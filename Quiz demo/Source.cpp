#include <iostream>


void Add(int array1[], int array2[], int array[])
{
	for (int i = 0; i < 4; i++)
	{
		array[i] = array1[i] + array2[i];
	}
}

int main()
{
	int matrix1[4] = { 3, 3, 3, 3 };
	int matrix2[4] = { 1, 1, 1, 1 };
	int matrix3[4];
	 Add(matrix1, matrix2, matrix3);

	system("pause");
}
	