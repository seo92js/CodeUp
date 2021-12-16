#include <stdio.h>
#include <string.h>

int main()
{
	int h, w, n, l, d, x, y;

	scanf_s("%d %d", &h, &w); //격자 세로, 가로

	//2차원 배열 할당 행,열
	int **grid = new int*[h];

	for (int i = 0; i < h; i++)
	{
		grid[i] = new int[w];
		memset(grid[i], 0, sizeof(int) * w);

	}

	scanf_s("%d", &n); //막대 갯수

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d %d %d", &l, &d, &y, &x); // 막대 길이, 방향, 좌표

		for (int j = 0; j < l; j++)
		{
			if (d == 0) //가로
			{
				grid[y-1][(x-1)+ j] = 1;
			}
			else //세로
			{
				grid[(y - 1 + j)][x-1] = 1;
			}
		}
		
	}

	for (int i = 0; i < h; i++) //한 줄(위에서 아래로) 씩
	{
		for (int j = 0; j < w; j++) //한 열(왼쪽에서 오른쪽으로) 씩
		{
			printf("%d ", grid[i][j]); //값 출력
		}
		printf("\n"); //줄 바꾸기
	}


	//해제
	for (int i = 0; i < h; i++)
		delete[] grid[i];
	delete[] grid;
	
}