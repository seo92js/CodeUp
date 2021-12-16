#include <stdio.h>
#include <string.h>

int main()
{
	int h, w, n, l, d, x, y;

	scanf_s("%d %d", &h, &w); //���� ����, ����

	//2���� �迭 �Ҵ� ��,��
	int **grid = new int*[h];

	for (int i = 0; i < h; i++)
	{
		grid[i] = new int[w];
		memset(grid[i], 0, sizeof(int) * w);

	}

	scanf_s("%d", &n); //���� ����

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d %d %d", &l, &d, &y, &x); // ���� ����, ����, ��ǥ

		for (int j = 0; j < l; j++)
		{
			if (d == 0) //����
			{
				grid[y-1][(x-1)+ j] = 1;
			}
			else //����
			{
				grid[(y - 1 + j)][x-1] = 1;
			}
		}
		
	}

	for (int i = 0; i < h; i++) //�� ��(������ �Ʒ���) ��
	{
		for (int j = 0; j < w; j++) //�� ��(���ʿ��� ����������) ��
		{
			printf("%d ", grid[i][j]); //�� ���
		}
		printf("\n"); //�� �ٲٱ�
	}


	//����
	for (int i = 0; i < h; i++)
		delete[] grid[i];
	delete[] grid;
	
}