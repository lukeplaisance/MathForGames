#include "Vector3.h"

Vector3::Vector3()
{
}

Vector3::Vector3(float x, float y, float z)
{
	mX = x;
	mY = y;
	mZ = z;
}

float Vector3::Dot(Vector3 & other)
{
	float dot;
	dot = (mX * other.mX) + (mY * other.mY) + (mZ * other.mZ);
	return dot;
}

