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

void Matrix3::operator+(Matrix3 & other)
{
	for (int i = 0; i < 9; i++)
	{
		mMat[i] + other.mMat[i];
	}
}

Matrix3 Matrix3::operator-(Matrix3 & other)
{
	Matrix3 sub;
	sub.mMat[0] = mMat[0] + other.mMat[0];
	sub.mMat[1] = mMat[1] + other.mMat[1];
	sub.mMat[2] = mMat[2] + other.mMat[2];
	sub.mMat[3] = mMat[3] + other.mMat[3];
	sub.mMat[4] = mMat[4] + other.mMat[4];
	sub.mMat[5] = mMat[5] + other.mMat[5];
	sub.mMat[6] = mMat[6] + other.mMat[6];
	sub.mMat[7] = mMat[7] + other.mMat[7];
	sub.mMat[8] = mMat[8] + other.mMat[8];
	return sub;
}

Matrix3 Matrix3::operator*(Matrix3 & other)
{
	Matrix3 scale;
	scale.mMat[0] = mMat[0] * other.mMat[0];
	scale.mMat[1] = mMat[1] * other.mMat[1];
	scale.mMat[2] = mMat[2] * other.mMat[2];
	scale.mMat[3] = mMat[3] * other.mMat[3];
	scale.mMat[4] = mMat[4] * other.mMat[4];
	scale.mMat[5] = mMat[5] * other.mMat[5];
	scale.mMat[6] = mMat[6] * other.mMat[6];
	scale.mMat[7] = mMat[7] * other.mMat[7];
	scale.mMat[8] = mMat[8] * other.mMat[8];
	return scale;
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
