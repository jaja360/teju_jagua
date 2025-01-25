# SPDX-License-Identifier: APACHE-2.0
# SPDX-FileCopyrightText: 2021-2024 Cassio Neri <cassio.neri@gmail.com>

add_executable(teju_benchmark
  main.cpp
)

target_link_libraries(teju_benchmark PRIVATE
  teju
  gtest
  nanobench
  others
)
