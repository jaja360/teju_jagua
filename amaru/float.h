/**
 * @file amaru/float.h
 *
 * Amaru and helpers for float values.
 */

#ifndef AMARU_AMARU_FLOAT_H_
#define AMARU_AMARU_FLOAT_H_

#include "amaru/generated/ieee32.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Gets IEEE-754's binary32 representation of a float.
 *
 * See https://en.wikipedia.org/wiki/Single-precision_floating-point_format
 *
 * @pre value > 0.
 *
 * @param value             The given float.
 *
 * @returns IEEE-754's binary32 representation of value.
 */
amaru32_fields_t
amaru_float_to_ieee32(float value);

/**
 * @brief Gets Amaru's binary representation of a given IEEE-754 binary32 one.
 *
 * @pre value > 0.
 *
 * @param ieee32            The given IEEE-754 binary32 representation.
 *
 * @returns Amaru's binary representation value.
 */
amaru32_fields_t
amaru_ieee32_to_amaru_binary(amaru32_fields_t ieee32);

/**
 * @brief Gets Amaru's decimal representation of a float.
 *
 * @pre value > 0.
 *
 * @param value             The given float.
 *
 * @returns Amaru's decimal representation of value.
 */
amaru32_fields_t
amaru_float_to_amaru_decimal(float value);

#ifdef __cplusplus
}
#endif

#endif // AMARU_AMARU_FLOAT_H_
