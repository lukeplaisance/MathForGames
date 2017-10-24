#include "Vector3.h"
#include <math.h>
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
	sub.mZ = mZ - other.mZ;
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

bool Vector3::operator==(Vector3 & other) //compares
{
	if (mX == other.mX && mY == other.mY && mZ == other.mZ)
		return true;
}

float Vector3::Dot(Vector3 & other) //shows dot product
{
	float dot;
	dot = (mX * other.mX) + (mY * other.mY) + (mZ * other.mZ);
	return dot;
}

Vector3 Vector3::Cross(Vector3 & other) //shows cross product
{
	Vector3 X;
	X.mX = (mY * other.mZ) - (mZ * other.mY);
	X.mY = (mZ * other.mX) - (mX * other.mZ);
	X.mZ = (mX * other.mY) - (mY * other.mX);
	return X;
}

Vector3 Vector3::Normalize() //normalises the vectors
{
	Vector3 norm;
	norm.mX = mX / Magnitude();
	norm.mY = mY / Magnitude();
	norm.mZ = mZ / Magnitude();
	return norm;
}

float Vector3::Magnitude() //finds the magnitude
{
	float Xsquare = mX*mX;
	float Ysquare = mY*mY;
	float Zsquare = mZ*mZ;
	float sum = Xsquare + Ysquare + Zsquare;
	float mag = sqrt(sum);
	return mag;
}
