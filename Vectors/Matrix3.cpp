#include "Matrix3.h"

Matrix3::Matrix3()
{
}

Matrix3::Matrix3(float mat[])
{
	for (int i = 0; i < 9; i++)
	{
		mMat[i] = mat[i];
	}
}

Matrix3::Matrix3(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI)
{
	mMat[0] = indexA;
	mMat[1] = indexB;
	mMat[2] = indexC;
	mMat[3] = indexD;
	mMat[4] = indexE;
	mMat[5] = indexF;
	mMat[6] = indexG;
	mMat[7] = indexH;
	mMat[8] = indexI;
}

Matrix3 Matrix3::RotateX(float angle)
{
	float rad = ((angle * 3.1415926535897) / 180);
	Matrix3 *rotate = new Matrix3(1, 0, 0, 0, cos(rad), -sin(rad), 0, sin(rad), cos(rad));
	return *rotate * *this;
}

Matrix3 Matrix3::RotateY(float angle)
{
	float rad = ((angle * 3.1415926535897) / 180);
	Matrix3 *rotate = new Matrix3(cos(rad), 0, -sin(rad), 0, 1, 0, sin(rad), 0, cos(rad));
	return *rotate * *this;
}

Matrix3 Matrix3::RotateZ(float angle)
{
	float rad = ((angle * 3.1415926535897) / 180);
	Matrix3 *rotate = new Matrix3(cos(rad), -sin(rad), 0, sin(rad), cos(rad), 0, 0, 0, 1);
	return *rotate * *this;
}

Matrix3 Matrix3::operator+(Matrix3 & other)
{
	Matrix3 add;
	for (int i = 0; i < 9; i++)
	{
		add.mMat[i] = mMat[i] + other.mMat[i];
	}
	return add;
}

Matrix3 Matrix3::operator-(Matrix3 & other)
{
	Matrix3 sub;
	for (int i = 0; i < 4; i++)
	{
		sub.mMat[i] = mMat[i] - other.mMat[i];
	}
	return sub;
}

Matrix3 Matrix3::operator*(Matrix3 & other)
{
	float *newMat = new float[9];

	newMat[0] = (mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[3]) + mMat[2] * other.mMat[6];
	newMat[1] = (mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[4]) + mMat[2] * other.mMat[7];
	newMat[2] = (mMat[0] * other.mMat[2]) + (mMat[1] * other.mMat[5]) + mMat[2] * other.mMat[8];
	newMat[3] = (mMat[3] * other.mMat[0]) + (mMat[4] * other.mMat[3]) + mMat[5] * other.mMat[6];
	newMat[4] = (mMat[3] * other.mMat[1]) + (mMat[4] * other.mMat[4]) + mMat[5] * other.mMat[7];
	newMat[5] = (mMat[3] * other.mMat[2]) + (mMat[4] * other.mMat[5]) + mMat[5] * other.mMat[8];
	newMat[6] = (mMat[6] * other.mMat[0]) + (mMat[7] * other.mMat[3]) + mMat[8] * other.mMat[6];
	newMat[7] = (mMat[6] * other.mMat[1]) + (mMat[7] * other.mMat[4]) + mMat[8] * other.mMat[7];
	newMat[8] = (mMat[6] * other.mMat[2]) + (mMat[7] * other.mMat[5]) + mMat[8] * other.mMat[8];
	return newMat;
}

ostream & operator<<(ostream & os, const Matrix3 matrix)
{
	os << matrix.mMat[0] << " " << matrix.mMat[1] << " " << matrix.mMat[2] << endl;
	os << matrix.mMat[3] << " " << matrix.mMat[4] << " " << matrix.mMat[5] << endl;
	os << matrix.mMat[6] << " " << matrix.mMat[7] << " " << matrix.mMat[8] << endl;
	return os;
}

istream & operator >> (istream & is, Matrix3 matrix)
{
	is >> matrix.mMat[0] >> matrix.mMat[1] >> matrix.mMat[2];
	is >> matrix.mMat[3] >> matrix.mMat[4] >> matrix.mMat[5];
	is >> matrix.mMat[6] >> matrix.mMat[7] >> matrix.mMat[8];
	return is;
}
