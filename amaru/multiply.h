#ifndef AMARU_AMARU_MULTIPLY_H_
#define AMARU_AMARU_MULTIPLY_H_

/**
 * @file amaru/multiply.h
 *
 * Set platform multiplication capabilities.
 */

#include <stdint.h>

#if defined(_MSC_VER)
  #include <intrin.h>
#endif

#if !defined(__clang__) && !defined(__GNUC__) && defined(_MSC_VER)
  #error "Unsupported compiler."
#endif

//------------------------------------------------------------------------------
// Flags indicating the platform's multiplication capability.
//------------------------------------------------------------------------------

// The size in bits of the limb is amaru_size. For instance, if amaru_size ==
// 32, then 1-, 2- and 4-limb integers have size 32, 64 and 128, respectively.
// Similarly, if amaru_size == 64, then 1-, 2- and 4-limb integers have size 64,
// 128 and 256 respectively. The platform is required to support 1-limb integers
// but not necessarily 2- and 4-limb integers.

// Macro amaru_multiply_type define the platform's multiplication capability and
// is set to one of the values below.

/**
 * @brief The platform provides operator \c * for 1-limb unsigned integers that
 * yields the lower 1-limb of the 2-limb product. For instance, assuming 1-limb
 * is 32-bits:
 * \code{.cpp}
 *     uint32_t a, b;
 *     uint32_t lower = a * b;
 * \endcode
 */
#define amaru_built_in_1 0

/**
 * @brief The platform implements <tt>amaru_multiply()</tt> which takes two
 * 1-limb unsigned integers and returns the lower 1-limb of the 2-limb product.
 * It also takes a third argument of pointer type where the upper 1-limb of the
 * product is stored on exit. For instance, assuming 1-limb is 32-bits:
 * \code{.cpp}
 *     uint32_t a, b, upper;
 *     uint32_t lower = amaru_multiply(a, b, &upper);
 * \endcode
 */
#define amaru_synthetic_1 1

/**
 * @brief The platform provides operator \c * for 2-limb unsigned integers that
 * yields the lower 2-limb of the 4-limb product. For instance, assuming 1-limb
 * is 32-bits:
 * \code{.cpp}
 *     uint64_t a, b;
 *     uint64_t lower = a * b;
 * \endcode
 */
#define amaru_built_in_2  2

/**
 * @brief The platform implements <tt>amaru_multiply()</tt> which takes two
 * 2-limb unsigned integers and returns the lower 2-limb of the 4-limb product.
 * It also also takes a third argument of pointer type where the upper 2-limb of
 * the product is stored on exit. For instance, assuming 1-limb is 32-bits:
 * \code{.cpp}
 *     uint64_t a, b, upper;
 *     uint64_t lower = amaru_multiply(a, b, &upper);
 * \endcode
 */
#define amaru_synthetic_2 3

/**
 * @brief The platform provides operator \c * for 4-limb unsigned integers that
 * yields the lower 4-limb of the 8-limb product. For instance, assuming 1-limb
 * is 32-bits, gcc and clang support the following:
 * \code{.cpp}
 *     __uint128_t a, b;
 *     __uint128_t lower = a * b;
 * \endcode
 */
#define amaru_built_in_4  4

//------------------------------------------------------------------------------
// Limbs
//------------------------------------------------------------------------------

// Macros amaru<X>_u1_t, where <X> = amaru_size (e.g., amaru32_u1_t for
// amaru_size = 32), is set to the type of 1-limb unsigned integers, i.e., that
// whose size is amaru_size. When defined, amaru<X>_u2_t and amaru<X>_u4_t are,
// respectively, set to the types of the 2- and 4-limb unsigned integers.

//----------//
//  32 bits //
//----------//

#define amaru32_u1_t uint32_t
#define amaru32_u2_t uint64_t

#if defined(__clang__) || defined(__GNUC__)
  #define amaru32_u4_t          __uint128_t
  #define amaru32_multiply_type amaru_built_in_4
#elif defined(_MSC_VER)
  #define amaru32_multiply_type amaru_synthetic_2
#endif

typedef struct {
  int32_t      exponent;
  amaru32_u1_t mantissa;
} amaru32_fields_t;

//----------//
//  64 bits //
//----------//

#define amaru64_u1_t uint64_t

#if defined(__clang__) || defined(__GNUC__)
  #define amaru64_u2_t          __uint128_t
  #define amaru64_multiply_type amaru_built_in_2
#elif defined(_MSC_VER)
  #define amaru64_multiply_type amaru_synthetic_1
#endif

typedef struct {
  int32_t      exponent;
  amaru64_u1_t mantissa;
} amaru64_fields_t;

//----------//
// 128 bits //
//----------//

#if defined(__GNUC__) && !defined(__clang__)
  #define amaru128_u1_t __uint128_t
  #define amaru128_multiply_type amaru_built_in_1
#endif

//------------------------------------------------------------------------------
// amaru_multiply
//------------------------------------------------------------------------------

// One might want to disabled the provided implementations of amaru_multiply to
// be able to implement their own (e.g., for testing). For this, it suffices to
// define macro amaru_do_not_define_amaru_multiply prior to including this file.

#ifdef __cplusplus
extern "C" {
#endif

#if defined(_MSC_VER) && !defined(amaru_do_not_define_amaru_multiply)

  /**
   * @brief Calculates the 128-bits product of two 64-bits unsigned numbers.
   *
   * @param a The 1st multiplicand.
   * @param b The 2nd multiplicand.
   * @param upper On exit the value of the highest 64-bits of the product.
   *
   * @returns The lower 64-bits value of the product.
   */
  inline static
  uint64_t
  amaru_multiply(uint64_t const a, uint64_t const b, uint64_t* upper) {
    return _umul128(a, b, upper);
  }

#endif // defined(_MSC_VER)

#ifdef __cplusplus
}
#endif

#endif // AMARU_AMARU_MULTIPLY_H_
