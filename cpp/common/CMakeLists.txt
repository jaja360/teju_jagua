# SPDX-License-Identifier: APACHE-2.0
# SPDX-FileCopyrightText: 2021-2024 Cassio Neri <cassio.neri@gmail.com>

add_library(others OBJECT
  dragonbox.cpp
)

target_include_directories(others PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/../..
)

target_link_libraries(others
  dragonbox::dragonbox
  ryu::ryu
  teju_boost_multiprecision
)
