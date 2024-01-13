#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 물고기 6마리가 어항에 있음.
// 물이 증발하기 저넹 부지런히 어항에 물을 줘서 물고기를 살려야 함

int level;
int arrayFish[6];
int* cursor;
void initData();
void printFishes();
void decreaseWater(long elapsedTime);

int main_pointer_project(void)
{
	long startTime = 0; // 게임 시작 시간
	long totalElapsedTime = 0; // 총 경과 시간
	long prevElapsedTime = 0; // 직전 경과 시간 (최근에 물을 준 시간 간격)

	int num; // 몇 번 어항에 물을 줄 것인지. 사용자 입력
	initData();

	cursor = arrayFish;

	// 게임 시작
	startTime = clock(); // 현재 시간을 millisecond (1000분의 1초) 단위로 반환
	while (1)
	{
		printFishes();
		printf("몇 번 어항에 물을 주시겠어요?");
		scanf_s("%d", &num);

		// 입력값 체크
		if (num < 1 || num>6)
		{
			printf("\n입력값이 잘못되었습니다\n");
			continue;
		}

		// 총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n", totalElapsedTime);

		// 직전 물 준 시간 이후로 흐른 시간 (낮아진 물 높이 계산을 위해)
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간 : %ld초\n", prevElapsedTime);

		// 어항의 물 감소
		decreaseWater(prevElapsedTime);

		// 사용자가 입력한 어항에 물 주기
		// 1. 어항의 물이 0이면? 이미 물고기 죽었으니까 물을 주지 않는다
		if (cursor[num - 1] <= 0)
		{
			printf("%d 번 물고기는 이미 죽었습니다.. 물을 주지 않습니다.\n", num);
		}
		// 2. 어항의 물이 0이 아닌 경우 => 100을 넘지 않는지 체크
		else if (cursor[num - 1] >= 100)
		{
			printf("%d 번 어항에 물이 넘쳤습니다! 물을 주지 않습니다.\n", num);
		}
		else
		{
			printf("%d 번 어항에 물을 줍니다.\n", num);
			cursor[num - 1]++;
		}

		// 레벨업 (5초마다 한번씩 수행)
		if (totalElapsedTime / 5 >= level)
		{
			level++;
			printf(" *** 축 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n", level - 1, level);

			// 최종 레벨
			if (level == 5)
			{
				printf("\n\n축하합니다. 최고 레벨을 달성했습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			// 모든 물고기 죽음. 게임 종료.
			printf("\n모든 물고기가 죽었습니다. 게임 종료\n");
			exit(0);
		}
		else {
			// 게임 진행
			printf("\n물고기가 아직 살아 있어요!\n");
		}
		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}

void initData()
{
	level = 1; // 게임 레벨 (1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100; // 어항 물 높이 (0~100)
	}
}

void printFishes()
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ", arrayFish[i]);

	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}

int checkFishAlive()
{
	for (int i = 0; i < 6; i++)
	{
		if (arrayFish[i] > 0)
			return 1;
	}
	return 0;
}

