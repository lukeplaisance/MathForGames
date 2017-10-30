#include "Vector3.h"
#include <iostream>
#include <assert.h>
using namespace std;
int main()
{
	Vector3 radians;
	float v1F1;
	float v1F2;
	float v1F3;
	float v2F1;
	float v2F2;
	float v2F3;
	cout << "Input the X value for Vec1" << endl;
	cin >> v1F1;
	cout << "Input the Y value for Vec1" << endl;
	cin >> v1F2;
	cout << "Input the Z value for Vec1" << endl;
	cin >> v1F3;
	cout << "Input the X value for Vec2" << endl;
	cin >> v2F1;
	cout << "Input the Y value for Vec2" << endl;
	cin >> v2F2;
	cout << "Input the Z value for Vec2" << endl;
	cin >> v2F3;
	cout << endl;
	Vector3 vectorOne(v1F1, v1F2, v1F3);
	Vector3 vectorTwo(v2F1, v2F2, v2F3);
	float result = vectorOne.Dot(vectorTwo);
	(result * 180) / 3.14;
	cout << result << endl;
	if (result == 0)
		cout << "the vectors are perpendicular\n";
	else
		cout << "The vectors are not perpendicular\n";


	system("pause");
}