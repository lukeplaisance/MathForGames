#include "Vector2.h"
#include "Vector3.h"
#include <iostream>
#include <assert.h>
int main()
{
	//Vector2 tests
	Vector2 test1(3, 3);
	Vector2 test2(3, 3);
	Vector2 test3(4, 5);
	test1.Magnitude();
	test1.Normalize();
	assert((test1 == test2) == true);
	assert(test1.Dot(test3) == 27);

	//Vector3 tests
	Vector3 test4(4, 5, 6);
	Vector3 test5(4, 5, 6);
	Vector3 test6(7, 8, 9);
	Vector3 result(-3, 6, -3);
	test2.Magnitude();
	test2.Normalize();
	assert((test4 == test5) == true);
	assert(test5.Dot(test6) == 110);
	assert(test4.Cross(test6) == result);

	system("pause");
}