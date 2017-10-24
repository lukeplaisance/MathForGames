#include "Vector2.h"

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
