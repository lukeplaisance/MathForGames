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

Matrix4::Matrix4(float indexA, float indexB, float indexC, float indexD, float indexE, float indexF, float indexG, float indexH, float indexI, float indexJ, float indexK, float indexL, float indexM, float indexN, float indexO, float indexP)
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

Matrix4 Matrix4::operator+(Matrix4 & other)
{
	Matrix4 add;
	add.mMat[0] = mMat[0] + other.mMat[0];
	add.mMat[1] = mMat[1] + other.mMat[1];
	add.mMat[2] = mMat[2] + other.mMat[2];
	add.mMat[3] = mMat[3] + other.mMat[3];
	add.mMat[4] = mMat[4] + other.mMat[4];
	add.mMat[5] = mMat[5] + other.mMat[5];
	add.mMat[6] = mMat[6] + other.mMat[6];
	add.mMat[7] = mMat[7] + other.mMat[7];
	add.mMat[8] = mMat[8] + other.mMat[8];
	add.mMat[9] = mMat[2] + other.mMat[9];
	add.mMat[10] = mMat[3] + other.mMat[10];
	add.mMat[11] = mMat[4] + other.mMat[11];
	add.mMat[12] = mMat[5] + other.mMat[12];
	add.mMat[13] = mMat[6] + other.mMat[13];
	add.mMat[14] = mMat[7] + other.mMat[14];
	add.mMat[15] = mMat[8] + other.mMat[15];
	return add;
}

Matrix4 Matrix4::operator-(Matrix4 & other)
{
	Matrix4 sub;
	sub.mMat[0] = mMat[0] + other.mMat[0];
	sub.mMat[1] = mMat[1] + other.mMat[1];
	sub.mMat[2] = mMat[2] + other.mMat[2];
	sub.mMat[3] = mMat[3] + other.mMat[3];
	sub.mMat[4] = mMat[4] + other.mMat[4];
	sub.mMat[5] = mMat[5] + other.mMat[5];
	sub.mMat[6] = mMat[6] + other.mMat[6];
	sub.mMat[7] = mMat[7] + other.mMat[7];
	sub.mMat[8] = mMat[8] + other.mMat[8];
	sub.mMat[9] = mMat[2] + other.mMat[9];
	sub.mMat[10] = mMat[3] + other.mMat[10];
	sub.mMat[11] = mMat[4] + other.mMat[11];
	sub.mMat[12] = mMat[5] + other.mMat[12];
	sub.mMat[13] = mMat[6] + other.mMat[13];
	sub.mMat[14] = mMat[7] + other.mMat[14];
	sub.mMat[15] = mMat[8] + other.mMat[15];
	return sub;
}

Matrix4 Matrix4::operator*(Matrix4 & other)
{
	Matrix4 scale;
	scale.mMat[0] = mMat[0] * other.mMat[0];
	scale.mMat[1] = mMat[1] * other.mMat[1];
	scale.mMat[2] = mMat[2] * other.mMat[2];
	scale.mMat[3] = mMat[3] * other.mMat[3];
	scale.mMat[4] = mMat[4] * other.mMat[4];
	scale.mMat[5] = mMat[6] * other.mMat[5];
	scale.mMat[6] = mMat[6] * other.mMat[6];
	scale.mMat[7] = mMat[7] * other.mMat[7];
	scale.mMat[8] = mMat[8] * other.mMat[8];
	scale.mMat[9] = mMat[2] * other.mMat[2];
	scale.mMat[10] = mMat[10] * other.mMat[10];
	scale.mMat[11] = mMat[11] * other.mMat[11];
	scale.mMat[12] = mMat[12] * other.mMat[12];
	scale.mMat[13] = mMat[13] * other.mMat[13];
	scale.mMat[14] = mMat[14] * other.mMat[14];
	scale.mMat[15] = mMat[15] * other.mMat[15];
	return scale;
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
