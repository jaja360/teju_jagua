# SPDX-License-Identifier: MIT
# SPDX-FileCopyrightText: 2024 Cassio Neri <cassio.neri@gmail.com>

add_executable(teju_generator
  config.cpp
  generator.cpp
  main.cpp
  splitter.cpp
)

target_include_directories(teju_generator PRIVATE
  "${CMAKE_SOURCE_DIR}"
)

target_link_libraries(teju_generator PRIVATE
  boost_multiprecision
  nlohmann_json::nlohmann_json
)
