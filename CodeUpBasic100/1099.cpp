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
		//����
		if (map[pos_y][pos_x] == 0)
		{
			map[pos_y][pos_x] = 9;

			//x�� �̵� �����ϸ�
			if (map[pos_y][pos_x + 1] == 0 || map[pos_y][pos_x + 1] == 2)
				pos_x++;

			//y�� �̵� �����ϸ�
			else if (map[pos_y + 1][pos_x] == 0 || map[pos_y + 1][pos_x] == 2)
				pos_y++;

			//�Ѵ� ������
			else if(map[pos_y][pos_x + 1] == 1 && map[pos_y + 1][pos_x] == 1)
				break;
		}

		// ���̸� ã�ų�
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