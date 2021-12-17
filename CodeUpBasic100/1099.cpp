#include <stdio.h>

int main()
{
	int map[10][10] = { 0 };
	int pos_x = 1, pos_y = 1;

	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 10; j++)
		{
			scanf_s("%d", &map[i][j]);
		}
	}

	while (true)
	{
		//시작
		if (map[pos_y][pos_x] == 0)
		{
			map[pos_y][pos_x] = 9;

			//x축 이동 가능하면
			if (map[pos_y][pos_x + 1] == 0 || map[pos_y][pos_x + 1] == 2)
				pos_x++;

			//y축 이동 가능하면
			else if (map[pos_y + 1][pos_x] == 0 || map[pos_y + 1][pos_x] == 2)
				pos_y++;

			//둘다 막히면
			else if(map[pos_y][pos_x + 1] == 1 && map[pos_y + 1][pos_x] == 1)
				break;
		}

		// 먹이를 찾거나
		if (map[pos_y][pos_x] == 2)
		{
			map[pos_y][pos_x] = 9;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d ", map[i][j]);
		}
		printf("\n");
	}

	return 0;
}