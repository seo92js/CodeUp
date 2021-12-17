#include <stdio.h>

struct device
{
	int num;
	int gas;
};

//버블정렬로
void Sorting(device* input, int count)
{
	for (int i = 0; i < count - 1; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			if (input[i].num > input[j].num)
			{
				int tmpNum = input[i].num;
				int tmpGas = input[i].gas;

				input[i].num = input[j].num;
				input[i].gas = input[j].gas;

				input[j].num = tmpNum;
				input[j].gas = tmpGas;
			}
		}
	}
}

int main()
{
	int count;

	device* stDevice;

	scanf("%d", &count);

	stDevice = new device[count];

	for (int i = 0; i < count; i++)
	{
		scanf("%d %d", &stDevice[i].num, &stDevice[i].gas);
	}

	//식별번호를 오름차순으로 정렬 -> 버블정렬
	Sorting(stDevice, count);

	for (int i = 0; i < count; i++)
	{
		printf("%d %d\n" ,stDevice[i].num, stDevice[i].gas);
	}
	
	delete[] stDevice;
}

