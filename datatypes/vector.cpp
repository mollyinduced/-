#include "vector.h"
#include "qangle.h"
#include "math.h"
#include <algorithm>
[[nodiscard]] QAngle_t Vector_t::ToAngles() const
{
	float flPitch, flYaw;
	if (this->x == 0.0f && this->y == 0.0f)
	{
		flPitch = (this->z > 0.0f) ? 270.f : 90.f;
		flYaw = 0.0f;
	}
	else
	{
		flPitch = M_RAD2DEG(std::atan2f(-this->z, this->Length2D()));

		if (flPitch < 0.f)
			flPitch += 360.f;

		flYaw = M_RAD2DEG(std::atan2f(this->y, this->x));

		if (flYaw < 0.f)
			flYaw += 360.f;
	}

	return { flPitch, flYaw, 0.0f };
}

[[nodiscard]] QAngle_t Vector_t::CalculateViewAngle(const Vector_t& from, const Vector_t& to)
{
	float pitch , yaw;

	auto d = to - from;
	yaw = std::atan2(d.y , d.x) * 180 /  MATH::_PI;

	double dist = d.Length2D();
	pitch = - std::atan2(d.z , dist) * 180 /MATH::_PI;

	return {pitch , yaw};
}