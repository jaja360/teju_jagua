#pragma once

#include "common.h"

#include "generated/ieee32.h"
#include "generated/ieee64.h"

#include <stdint.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

static inline
ieee32_t amaru_float(float const value) {

  uint32_t const mantissa_size = 23;
  uint32_t const exponent_size = 8;
  int32_t  const exponent_min  = -149;

  uint32_t i;
  memcpy(&i, &value, sizeof(value));

  // Breakdown into IEEE-754 binary 32 fields:
  ieee32_t ieee;
  ieee.mantissa = AMARU_LSB(i, mantissa_size);
  i >>= mantissa_size;
  ieee.exponent = AMARU_LSB(i, exponent_size);
  i >>= exponent_size;
  ieee.negative = i;

  // Conversion to Amaru's binary representation.
  ieee32_t amaru = ieee;
  amaru.exponent += exponent_min;
  if (ieee.exponent != 0) {
    amaru.mantissa += AMARU_POW2(uint32_t, mantissa_size);
    amaru.exponent -= 1;
  }

  return amaru_ieee32(amaru.negative, amaru.exponent, amaru.mantissa);
}

static inline
ieee64_t amaru_double(double const value) {

  uint32_t const mantissa_size = 52;
  uint32_t const exponent_size = 11;
  int32_t  const exponent_min  = -1074;

  uint64_t i;
  memcpy(&i, &value, sizeof(value));

  // Breakdown into IEEE-754 binary 64 fields:
  ieee64_t ieee;
  ieee.mantissa = AMARU_LSB(i, mantissa_size);
  i >>= mantissa_size;
  ieee.exponent = AMARU_LSB(i, exponent_size);
  i >>= exponent_size;
  ieee.negative = i;

  // Conversion to Amaru's binary representation.
  ieee64_t amaru = ieee;
  amaru.exponent += exponent_min;
  if (ieee.exponent != 0) {
    amaru.mantissa += AMARU_POW2(uint64_t, mantissa_size);
    amaru.exponent -= 1;
  }

  return amaru_ieee64(amaru.negative, amaru.exponent, amaru.mantissa);
}

#ifdef __cplusplus
}
#endif
