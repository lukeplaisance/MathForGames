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

Vector3 Vector3::operator+(Vector3 & other)//adds
{
	Vector3 add;
	add.mX = mX + other.mX;
	add.mY = mY + other.mY;
	add.mZ = mZ + other.mZ;
	return add;
}

Vector3 Vector3::operator-(Vector3 & other)//subtracts
{
	Vector3 sub;
	sub.mX = mX - other.mX;
	sub.mY = mY - other.mY;
	sub.mZ = mZ = other.mZ;
	return sub;
}

Vector3 Vector3::operator*(float other)//scales
{
	Vector3 scale;
	scale.mX = mX * other;
	scale.mY = mY * other;
	scale.mZ = mZ * other;
	return scale;
}