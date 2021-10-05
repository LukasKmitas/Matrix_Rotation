#include <iostream>

int main()
{

	int matrix[2][2] = { 
		{0,#},
		{#,0}
	};

	for (int i = 0; i < 2; i++)
	{
		for (int y = 0; y < 2; y++)
		{
			std::cout << matrix[i][y];

			/*int temp = matrix[i][y];
			matrix[i][y] = matrix[y][i];
			matrix[y][i] = temp;*/
		}
		std::cout << "";
	}

	return 0;
}