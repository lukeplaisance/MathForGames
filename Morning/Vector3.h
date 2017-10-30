#pragma once
class Vector3
{
public:
	float mX;
	float mY;
	float mZ;
	Vector3();
	Vector3(float x, float y, float z);
	float Dot(Vector3 & other);
};