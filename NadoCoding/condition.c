#include <stdio.h>

int main_condition(void)
{
	// break / continue
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("������ �л��� ���� ������\n");
			break;
		}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	}*/

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
				continue;
			}
			printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
		}
	}*/


	// switch-case
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 ��ȯ
	//switch (i)
	//{
	//case 0: printf("����\n"); break;
	//case 1: printf("����\n"); break;
	//case 2: printf("��\n"); break;
	//default: printf("�����\n"); break;
	//}


	// ���ٿ� ����
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 ������ ���� ����
	printf("���� : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1)
	{
		printf("���� ��ȸ %d ��\n", chance--);
		printf("���ڸ� ���������� (1~100) : ");
		scanf_s("%d", &answer);
		
		if (answer > num)
		{
			printf("DOWN �� \n\n");
		}
		else if (answer < num)
		{
			printf("UP �� \n\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�! \n\n");
			break;
		}
		else
		{
			printf("�� �� ���� ���� �߻� \n\n");
			break;
		}

		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿�. �ƽ��� �����߽��ϴ�\n\n");
		}
	}

	return 0;
}