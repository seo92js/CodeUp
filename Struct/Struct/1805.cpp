#include <stdio.h>

struct device
{
	int num;
	int gas;
};

//�������ķ�
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

	scanf_s("%d", &count);

	stDevice = new device[count];

	for (int i = 0; i < count; i++)
	{
		scanf_s("%d %d", &stDevice[i].num, &stDevice[i].gas);
	}

	//�ĺ���ȣ�� ������������ ���� -> ��������
	Sorting(stDevice, count);

	for (int i = 0; i < count; i++)
	{
		printf("%d %d\n" ,stDevice[i].num, stDevice[i].gas);
	}
	
	delete[] stDevice;
}
