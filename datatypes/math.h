#pragma once
// used: std::is_integral_v
#include <type_traits>
// used: sin, cos, pow, abs, sqrt
#include <corecrt_math.h>// used: MATH::Sin, cos, MATH::Pow, abs, sqrt
// used: rand, srand
#include <cstdlib>
// used: time
#include <ctime>

// convert angle in degrees to radians
#define M_DEG2RAD(DEGREES) ((DEGREES) * (MATH::_PI / 180.f))
// convert angle in radians to degrees
#define M_RAD2DEG(RADIANS) ((RADIANS) * (180.f / MATH::_PI))
/// linearly interpolate the value between @a'X0' and @a'X1' by @a'FACTOR'
#define M_LERP(X0, X1, FACTOR) ((X0) + ((X1) - (X0)) * (FACTOR))
/// trigonometry
#define M_COS(ANGLE) cos(ANGLE)
#define M_SIN(ANGLE) sin(ANGLE)
#define M_TAN(ANGLE) tan(ANGLE)
/// power
#define M_POW(BASE, EXPONENT) pow(BASE, EXPONENT)
/// absolute value
#define M_ABS(VALUE) abs(VALUE)
/// square root
#define M_SQRT(VALUE) sqrt(VALUE)
/// floor
#define M_FLOOR(VALUE) floor(VALUE)

/*
 * MATHEMATICS
 * - basic trigonometry, algebraic mathematical functions and constants
 */
namespace MATH
{
	/* @section: constants */
	// pi value
	inline constexpr float _PI = 3.141592654f;
	// double of pi
	inline constexpr float _2PI = 6.283185307f;
	// half of pi
	inline constexpr float _HPI = 1.570796327f;
	// quarter of pi
	inline constexpr float _QPI = 0.785398163f;
	// reciprocal of double of pi
	inline constexpr float _1DIV2PI = 0.159154943f;
	// golden ratio
	inline constexpr float _PHI = 1.618033988f;
}
