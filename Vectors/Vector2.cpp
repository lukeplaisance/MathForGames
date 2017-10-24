#include "Vector2.h"
#include <math.h>
Vector2::Vector2()
{
}

Vector2::Vector2(float x, float y)
{
	mX = x;
	mY = y;
}

Vector2 Vector2::operator+(Vector2 & other)//adds
{
	Vector2 add;
	add.mX = mX + other.mX;
	add.mY = mY + other.mY;
	return add;
}

Vector2 Vector2::operator-(Vector2 & other)//subtracts
{
	Vector2 sub;
	sub.mX = mX - other.mX;
	sub.mY = mY - other.mY;
	return sub;
}

Vector2 Vector2::operator*(float other)//scales
{
	Vector2 scale;
	scale.mX = mX * other;
	scale.mY = mY * other;
	return scale;
}

bool Vector2::operator==(Vector2 & other) //compares
{
	if (mX == other.mX && mY == other.mY)
		return true;
}

float Vector2::Dot(Vector2 & other) //shows dot product
{
	float dot;
	dot = (mX * other.mX) + (mY * other.mY);
	return dot;
}

float Vector2::Magnitude() //finds the magnitude
{
	float Xsquare = mX*mX;
	float Ysquare = mY*mY;
	float sum = Xsquare + Ysquare;
	float mag = sqrt(sum);
	return mag;
}

Vector2 Vector2::Normalize() //normalises the vectors
{
	Vector2 norm;
	norm.mX = mX / Magnitude();
	norm.mY = mY / Magnitude();
	return norm;
}