#include <stdio.h>
#include <time.h>

// 10마리의 서로 다른 동물 (각 카드 2장씩)
// 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// 모든 동물 쌍 찾으면 게임 종료
// 총 실패 횟수 알려주기

int arrayAnimal[4][5];
int checkAnimal[4][5];
char* strAnimal[10]; // 캐릭터 포인터형 (strAnimal이 저장된 주소를 가지고 있음)

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

	int failCnt = 0; // 실패 횟수
	printAnimal(); // 동물 위치 출력

	// 게임 시작
	while (1)
	{
		int select1 = 0;
		int select2 = 0;
		
		printQuestion(); // 문제 출력 (카드 지도)
		printf("뒤집을 카드 2개를 고르세요 : ");
		scanf_s("%d %d", &select1, &select2);

		// 같은 카드 선택 시 무효
		if (select1 == select2)
			continue;

		// 선택한 카드가 같은지 확인
		int x1 = conv_pos_x(select1);
		int y1 = conv_pos_y(select1);
		int x2 = conv_pos_x(select2);
		int y2 = conv_pos_y(select2);

		// 1) 같은 동물인 경우 (정답)
		if ((checkAnimal[x1][y1] == 0 && checkAnimal[x2][y2] == 0)
			&&
			(arrayAnimal[x1][y1] == arrayAnimal[x2][y2]))
		{
			printf("\n\n빙고! : %s 발견\n\n", strAnimal[arrayAnimal[x1][y1]]);
			checkAnimal[x1][y1] = 1;
			checkAnimal[x2][y2] = 1;
		}
		// 2) 다른 동물인 경우 (오답)
		else {
			printf("\n\n땡!! (틀렸거나, 이미 뒤집힌 카드입니다)\n");
			printf("%d : %s\n", select1, strAnimal[arrayAnimal[x1][y1]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[x2][y2]]);
			printf("\n\n");

			failCnt++;
		}

		// 모든 동물을 찾은 경우 (게임 종료)
		if (foundAllAnimals() == 1)
		{
			printf("\n\n 축하합니다! 모든 동물을 다 찾았네요\n\n");
			printf("지금까지 총 %d 번 실수했습니다\n", failCnt);
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
	strAnimal[0] = "원숭이";
	strAnimal[1] = "하마";
	strAnimal[2] = "강아지";
	strAnimal[3] = "고양이";
	strAnimal[4] = "돼지";

	strAnimal[5] = "코끼리";
	strAnimal[6] = "기린";
	strAnimal[7] = "낙타";
	strAnimal[8] = "타조";
	strAnimal[9] = "호랑이";
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


// 좌표에서 빈 공간 찾기
//   0  1  2  3  4
//   5  6  7  8  9
//  10 11 12 13 14
//  15 16 17 18 19
int getEmptyPosition()
{
	while (1)
	{
		int randPos = rand() % 20; // 0 ~ 19 사이의 숫자 반환
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
	printf("\n\n(문제)\n");
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