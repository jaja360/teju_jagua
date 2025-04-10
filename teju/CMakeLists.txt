# SPDX-License-Identifier: APACHE-2.0
# SPDX-FileCopyrightText: 2021-2024 Cassio Neri <cassio.neri@gmail.com>

add_library(teju STATIC
  generated/ieee16.c
  float.c
  double.c
)

if (teju_has_uint128)
  target_sources(teju PUBLIC
    generated/ieee32_with_uint128.c
    generated/ieee64_with_uint128.c
  )
  target_compile_definitions(teju PUBLIC teju_has_uint128)
else()
  target_sources(teju PUBLIC
    generated/ieee32_no_uint128.c
    generated/ieee64_no_uint128.c
  )
endif()

if (teju_has_float128)
  target_sources(teju PUBLIC
    generated/ieee128.c
    float128.c
  )
  target_compile_definitions(teju PUBLIC teju_has_float128)
endif()

target_include_directories(teju PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/..
)
