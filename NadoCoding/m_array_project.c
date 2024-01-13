#include <stdio.h>
#include <time.h>

// 10������ ���� �ٸ� ���� (�� ī�� 2�徿)
// ����ڷκ��� 2���� �Է°��� �޾Ƽ� -> ���� ���� ã���� ī�� ������
// ��� ���� �� ã���� ���� ����
// �� ���� Ƚ�� �˷��ֱ�

int arrayAnimal[4][5];
int checkAnimal[4][5];
char* strAnimal[10]; // ĳ���� �������� (strAnimal�� ����� �ּҸ� ������ ����)

void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x();
int conv_pos_y();
void printAnimal();
void printQuestion();
int foundAllAnimals();

int main_m_array_project(void)
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();

	shuffleAnimal();

	int failCnt = 0; // ���� Ƚ��
	printAnimal(); // ���� ��ġ ���

	// ���� ����
	while (1)
	{
		int select1 = 0;
		int select2 = 0;
		
		printQuestion(); // ���� ��� (ī�� ����)
		printf("������ ī�� 2���� ������ : ");
		scanf_s("%d %d", &select1, &select2);

		// ���� ī�� ���� �� ��ȿ
		if (select1 == select2)
			continue;

		// ������ ī�尡 ������ Ȯ��
		int x1 = conv_pos_x(select1);
		int y1 = conv_pos_y(select1);
		int x2 = conv_pos_x(select2);
		int y2 = conv_pos_y(select2);

		// 1) ���� ������ ��� (����)
		if ((checkAnimal[x1][y1] == 0 && checkAnimal[x2][y2] == 0)
			&&
			(arrayAnimal[x1][y1] == arrayAnimal[x2][y2]))
		{
			printf("\n\n����! : %s �߰�\n\n", strAnimal[arrayAnimal[x1][y1]]);
			checkAnimal[x1][y1] = 1;
			checkAnimal[x2][y2] = 1;
		}
		// 2) �ٸ� ������ ��� (����)
		else {
			printf("\n\n��!! (Ʋ�Ȱų�, �̹� ������ ī���Դϴ�)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[x1][y1]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[x2][y2]]);
			printf("\n\n");

			failCnt++;
		}

		// ��� ������ ã�� ��� (���� ����)
		if (foundAllAnimals() == 1)
		{
			printf("\n\n �����մϴ�! ��� ������ �� ã�ҳ׿�\n\n");
			printf("���ݱ��� �� %d �� �Ǽ��߽��ϴ�\n", failCnt);
			break;
		}
	}

	return 0;
}

void initAnimalArray()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}

void initAnimalName()
{
	strAnimal[0] = "������";
	strAnimal[1] = "�ϸ�";
	strAnimal[2] = "������";
	strAnimal[3] = "�����";
	strAnimal[4] = "����";

	strAnimal[5] = "�ڳ���";
	strAnimal[6] = "�⸰";
	strAnimal[7] = "��Ÿ";
	strAnimal[8] = "Ÿ��";
	strAnimal[9] = "ȣ����";
}

void shuffleAnimal()
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 2; j++) {
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}


// ��ǥ���� �� ���� ã��
//   0  1  2  3  4
//   5  6  7  8  9
//  10 11 12 13 14
//  15 16 17 18 19
int getEmptyPosition()
{
	while (1)
	{
		int randPos = rand() % 20; // 0 ~ 19 ������ ���� ��ȯ
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1)
		{
			return randPos;
		}
	}
}

int conv_pos_x(int x)
{
	return x / 5;
}

int conv_pos_y(int y)
{
	return y % 5;
}

void printAnimal()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n=================================\n\n");
}

void printQuestion()
{
	printf("\n\n(����)\n");
	int seq = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] != 0)
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			else {
				printf("%8d", seq);
			}
			seq++;
		}
		printf("\n");
	}
}

int foundAllAnimals()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (checkAnimal[i][j] == 0)
			{
				return 0;
			}
		}
	}
	return 1;
}