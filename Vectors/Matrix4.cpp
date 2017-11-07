#include "Matrix4.h"

Matrix4::Matrix4()
{
}

Matrix4::Matrix4(float mat[])
{
	for (int i = 0; i < 16; i++)
	{
		mMat[i] = mat[i];
	}
}

Matrix4::Matrix4(float indexA, float indexB, float indexC, float indexD, 
float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, 
float indexK, float indexL, float indexM, float indexN, float indexO, float indexP)
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
	mMat[9] = indexJ;
	mMat[10] = indexK;
	mMat[11] = indexL;
	mMat[12] = indexM;
	mMat[13] = indexN;
	mMat[14] = indexO;
	mMat[15] = indexP;
}

Matrix4 Matrix4::RotateX(float angle)
{
	float rad = ((angle * 3.1415926535897) / 180);
	Matrix4 *rotate = new Matrix4(1, 0, 0, 0,
								  0, cos(rad), -sin(rad), 0, 
								  0, sin(rad),cos(rad), 0, 
								  0, 0, 0, 1);
	return *rotate * *this;
}

Matrix4 Matrix4::RotateY(float angle)
{
	float rad = ((angle * 3.1415926535897) / 180);
	Matrix4 *rotate = new Matrix4(cos(rad), 0, sin(rad), 0, 0, 1, 0, 0, -sin(rad), 0, 
									cos(rad), 0,0, 0, 0, 1);
	return *rotate * *this;
}

Matrix4 Matrix4::RotateZ(float angle)
{
	float rad = ((angle * 3.1415926535897) / 180);
	Matrix4 *rotate = new Matrix4(cos(rad), -sin(rad), 0, 0, sin(rad), cos(rad), 0, 0,
									0, 0, 1, 0, 0, 0, 0, 1);	
		return *rotate * *this;
}

Matrix4 Matrix4::operator+(Matrix4 & other)
{
	Matrix4 add;
	for (int i = 0; i < 16; i++)
	{
		add.mMat[i] = mMat[i] + other.mMat[i];
	}
	return add;
}

Matrix4 Matrix4::operator-(Matrix4 & other)
{
	Matrix4 sub;
	for (int i = 0; i < 16; i++)
	{
		sub.mMat[i] = mMat[i] - other.mMat[i];
	}
	return sub;
}

Matrix4 Matrix4::operator*(Matrix4 & other)
{
	float *newMat = new float[16];

	newMat[0] = (mMat[0] * other.mMat[0]) + (mMat[1] * other.mMat[4]) + (mMat[2] * other.mMat[8]) + (mMat[3] * other.mMat[12]);
	newMat[1] = (mMat[0] * other.mMat[1]) + (mMat[1] * other.mMat[5]) + (mMat[2] * other.mMat[9]) + (mMat[3] * other.mMat[13]);
	newMat[2] = (mMat[0] * other.mMat[2]) + (mMat[1] * other.mMat[6]) + (mMat[2] * other.mMat[10]) + (mMat[3] * other.mMat[14]);
	newMat[3] = (mMat[0] * other.mMat[3]) + (mMat[1] * other.mMat[7]) + (mMat[2] * other.mMat[11]) + (mMat[3] * other.mMat[15]);
	newMat[4] = (mMat[4] * other.mMat[0]) + (mMat[5] * other.mMat[4]) + (mMat[6] * other.mMat[8]) + (mMat[7] * other.mMat[12]);
	newMat[5] = (mMat[4] * other.mMat[1]) + (mMat[5] * other.mMat[5]) + (mMat[6] * other.mMat[9]) + (mMat[7] * other.mMat[13]);
	newMat[6] = (mMat[4] * other.mMat[2]) + (mMat[5] * other.mMat[6]) + (mMat[6] * other.mMat[10]) + (mMat[7] * other.mMat[14]);
	newMat[7] = (mMat[4] * other.mMat[3]) + (mMat[5] * other.mMat[7]) + (mMat[6] * other.mMat[11]) + (mMat[7] * other.mMat[15]);
	newMat[8] = (mMat[8] * other.mMat[0]) + (mMat[9] * other.mMat[4]) + (mMat[10] * other.mMat[8]) + (mMat[11] * other.mMat[12]);
	newMat[9] = (mMat[8] * other.mMat[1]) + (mMat[9] * other.mMat[5]) + (mMat[10] * other.mMat[9]) + (mMat[11] * other.mMat[13]);
	newMat[10] = (mMat[8] * other.mMat[2]) + (mMat[9] * other.mMat[6]) + (mMat[10] * other.mMat[10]) + (mMat[11] * other.mMat[14]);
	newMat[11] = (mMat[8] * other.mMat[3]) + (mMat[9] * other.mMat[7]) + (mMat[10] * other.mMat[11]) + (mMat[11] * other.mMat[15]);
	newMat[12] = (mMat[12] * other.mMat[0]) + (mMat[13] * other.mMat[4]) + (mMat[14] * other.mMat[8]) + (mMat[15] * other.mMat[12]);
	newMat[13] = (mMat[12] * other.mMat[1]) + (mMat[13] * other.mMat[5]) + (mMat[14] * other.mMat[9]) + (mMat[15] * other.mMat[13]);
	newMat[14] = (mMat[12] * other.mMat[2]) + (mMat[13] * other.mMat[6]) + (mMat[14] * other.mMat[10]) + (mMat[15] * other.mMat[14]);
	newMat[15] = (mMat[12] * other.mMat[3]) + (mMat[13] * other.mMat[7]) + (mMat[14] * other.mMat[11]) + (mMat[15] * other.mMat[15]);
	return newMat;
}

ostream & operator<<(ostream & os, const Matrix4 matrix)
{
	os << matrix.mMat[0] << " " << matrix.mMat[1] << " " << matrix.mMat[2] << " " << matrix.mMat[3] << endl;
	os << matrix.mMat[4] << " " << matrix.mMat[5] << " " << matrix.mMat[6] << " " << matrix.mMat[7] << endl;
	os << matrix.mMat[8] << " " << matrix.mMat[9] << " " << matrix.mMat[10] << " " << matrix.mMat[11] << endl;
	os << matrix.mMat[12] << " " << matrix.mMat[13] << " " << matrix.mMat[14] << " " << matrix.mMat[15] << endl;
	return os;
}

istream & operator >> (istream & is, Matrix4 matrix)
{
	is >> matrix.mMat[0] >> matrix.mMat[1] >> matrix.mMat[2] >> matrix.mMat[3];
	is >> matrix.mMat[4] >> matrix.mMat[5] >> matrix.mMat[6] >> matrix.mMat[7];
	is >> matrix.mMat[8] >> matrix.mMat[9] >> matrix.mMat[10] >> matrix.mMat[11];
	is >> matrix.mMat[12] >> matrix.mMat[13] >> matrix.mMat[14] >> matrix.mMat[15];
	return is;
}
