#include "Vector4.h"
#include <math.h>

Vector4::Vector4()
{
}
Vector4::Vector4(float x, float y, float z, float w)
{
	mX = x;
	mY = y;
	mZ = z;
	mW = w;
}
Vector4 Vector4::operator+(Vector4 & other)
{
	Vector4 add;
	add.mX = mX + other.mX;
	add.mY = mY + other.mY;
	add.mZ = mZ + other.mZ;
	add.mW = mW + other.mW;
	return add;
}

Vector4 Vector4::operator-(Vector4 & other)
{
	Vector4 sub;
	sub.mX = mX - other.mX;
	sub.mY = mY - other.mY;
	sub.mZ = mZ - other.mZ;
	sub.mW = mW - other.mW;
	return sub;
}

Vector4 Vector4::operator*(float other)
{
	Vector4 scale;
	scale.mX = mX * other;
	scale.mY = mY * other;
	scale.mZ = mZ * other;
	scale.mW = mW * other;
	return scale;
}

bool Vector4::operator==(Vector4 & other)
{
	if (mX == other.mX && mY == other.mY && mZ == other.mZ && mW == other.mW)
		return true;
}

float Vector4::Dot(Vector4 & other)
{
	float dot;
	dot = (mX * other.mX) + (mY * other.mY) + (mZ * other.mZ) + (mW * other.mW);
	return dot;
}

Vector4 Vector4::Cross(Vector4 & other)
{
	return Vector4();
}

Vector4 Vector4::Normalize()
{
	Vector4 norm;
	norm.mX = mX / Magnitude();
	norm.mY = mY / Magnitude();
	norm.mZ = mZ / Magnitude();
	norm.mW = mW / Magnitude();
	return norm;
}

float Vector4::Magnitude()
{
	float Xsquare = mX*mX;
	float Ysquare = mY*mY;
	float Zsquare = mZ*mZ;
	float Wsquare = mW*mW;
	float sum = Xsquare + Ysquare + Zsquare + Wsquare;
	float mag = sqrt(sum);
	return mag;
}
