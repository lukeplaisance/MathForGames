#include <iostream>

struct Vector2
{
	float mX;
	float mY;
};

Vector2 Addition(Vector2 lhs, Vector2 rhs) //adds the vectors
{
	Vector2 add;
	add.mX = lhs.mX + rhs.mX;
	add.mY = lhs.mY + rhs.mY;
	return add;
}

Vector2 Subtraction(Vector2 lhs, Vector2 rhs) //subtracts the vectors
{
	Vector2 sub;
	sub.mX = lhs.mX - rhs.mX;
	sub.mY = lhs.mY - rhs.mY;
	return sub;
}

Vector2 Scale(Vector2 lhs, float rhs) //scales the vectors
{
	Vector2 temp;
	temp.mX = lhs.mX * rhs;
	temp.mY = lhs.mY * rhs;
	return temp;
}

int main()
{
	Vector2 test1;
	Vector2 test2;
	test1.mX = 25;
	test1.mY = -5;
	test2.mX = 10;
	test2.mY = 11;
	Vector2 test3 = Addition(test1, test2); //(9,9)
	Vector2 test4 = Subtraction(test1, test2); //(1,1)
	Vector2 test5 = Scale(test1, 2); //(10,10)
	system("pause");
}