#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include <iostream>
#include <assert.h>
#include "Tests.h"
#include "Matrix2.h"
#include "Matrix3.h"
#include "Matrix4.h"
int main()
{
	//Vector2 tests
	assert(add1 == result1);
	assert(sub1 == result2);
	assert(scale1 == result3);
	assert((test1 == test2) == true);
	assert(test1.Dot(test3) == 27);
	test1.Magnitude();
	test1.Normalize();

	//Vector3 tests
	assert(add2 == result4);
	assert(sub2 == result5);
	assert(scale2 == result6);
	assert((test4 == test5) == true);
	assert(test5.Dot(test6) == 122);
	assert(test4.Cross(test6) == result7);
	test2.Magnitude();
	test2.Normalize();

	//Vector4 tests
	assert(add3 == result8);
	assert(sub3 == result9);
	assert(scale3 == result10);
	assert((test7 == test8) == true);
	assert(test8.Dot(test9) == 125);
	test7.Magnitude();
	test7.Normalize();
	std::cout << test7 << endl;

	Matrix2 matrixOne(1, 2, 3, 4);
	Matrix2 a = matrixOne.Rotate(90);
	std::cout << a << endl;

	Matrix3 matrixTwo(1, 2, 3, 4, 5, 6, 7, 8, 9);
	Matrix3 b = matrixTwo.RotateY(90);
	std::cout << b << endl;

	Matrix4 matrixThree(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16);
	Matrix4 c = matrixThree.RotateZ(90);
	std::cout << c << endl;

	system("pause");
}