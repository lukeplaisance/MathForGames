#include "Matrix2.h"

Matrix2::Matrix2()
{
}

Matrix2::Matrix2(float mat[])
{
	for (int i = 0; i < 4; i++)
	{
		mMat[i] = mat[i];
	}
}

Matrix2::Matrix2(float indexA, float indexB, float indexC, float indexD)
{
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
}

Matrix2 Matrix2::Rotate(float angle)
{
	float rad = ((angle * 3.1415926535897) / 180);
	Matrix2 *rotate =  new Matrix2(cos(rad), sin(rad), -sin(rad), cos(rad));
	return *rotate * *this;
}

Matrix2 Matrix2::operator+(Matrix2 & other)
{
	Matrix2 add;
	for (int i = 0; i < 4; i++)
	{
		add.mMat[i] = mMat[i] + other.mMat[i];
	}
	return add;
}

Matrix2 Matrix2::operator-(Matrix2 & other)
{
	Matrix2 sub;
	for (int i = 0; i < 4; i++)
	{
		sub.mMat[i] = mMat[i] - other.mMat[i];
	}
	return sub;
}

Matrix2 Matrix2::operator*(Matrix2 &other)
{
	float *newMat = new float[4];

	newMat[0] = (mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[2]);
	newMat[1] = (mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[3]);
	newMat[2] = (mMat[2] * other.mMat[0]) + (mMat[3] * other.mMat[2]);
	newMat[3] = (mMat[2] * other.mMat[1]) + (mMat[3] * other.mMat[3]);
	return newMat;
}

ostream & operator<<(ostream & os, const Matrix2 matrix)
{
	os << matrix.mMat[0] << " " << matrix.mMat[1] << endl;
	os << matrix.mMat[2] << " " << matrix.mMat[3] << endl;
	return os;
}

istream & operator >> (istream & is, Matrix2 matrix)
{
	is >> matrix.mMat[0] >> matrix.mMat[1];
	is >> matrix.mMat[2] >> matrix.mMat[3];
	return is;
}

