#include <iostream>

int const t_SIZE = 10;

int main()
{
	int houseArray[t_SIZE][t_SIZE] = {
		{0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
		{0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
		{0, 0, 1, 0, 0, 0, 1, 0, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
		{0, 1, 0, 0, 0, 0, 0, 1, 0, 0},
		{0, 1, 1, 1, 1, 1, 1, 1, 0, 0}
	};

	for (int i = 0; i < t_SIZE; i++)
	{
		for (int y = 0; y < t_SIZE; y++)
		{
			if (houseArray[i][y] == 0)
			{
				std::cout << "  ";
			}
			else
			{
				std::cout << " #";
			}
		}
		std::cout << std::endl;
	}

	std::cout << std::endl;

	//rotateMatrix(mat);

	return 0;
}

// 90 degrees matrix
void rotateMatrix(int houseArray[][t_SIZE])
{

	for (int x = 0; x < t_SIZE / 2; x++) {
		for (int y = x; y < t_SIZE - x - 1; y++)
		{
			int temp = houseArray[x][y];

			houseArray[x][y] = houseArray[y][t_SIZE - 1 - x];
			houseArray[y][t_SIZE - 1 - x] = houseArray[t_SIZE - 1 - x][t_SIZE - 1 - y];
			houseArray[t_SIZE - 1 - x][t_SIZE - 1 - y] = houseArray[t_SIZE - 1 - y][x];

			houseArray[t_SIZE - 1 - y][x] = temp;
		}
	}
}
