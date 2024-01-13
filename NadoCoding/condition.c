#include <stdio.h>

int main_condition(void)
{
	// break / continue
	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6)
		{
			printf("나머지 학생은 집에 가세요\n");
			break;
		}
		printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
	}*/

	/*for (int i = 1; i <= 30; i++)
	{
		if (i >= 6 && i <= 10)
		{
			if (i == 7)
			{
				printf("%d번 학생은 결석입니다\n", i);
				continue;
			}
			printf("%d번 학생은 조별 발표 준비를 하세요\n", i);
		}
	}*/


	// switch-case
	//srand(time(NULL));
	//int i = rand() % 3; // 0 ~ 2 반환
	//switch (i)
	//{
	//case 0: printf("가위\n"); break;
	//case 1: printf("바위\n"); break;
	//case 2: printf("보\n"); break;
	//default: printf("몰라요\n"); break;
	//}


	// 업다운 게임
	srand(time(NULL));
	int num = rand() % 100 + 1; // 1 ~ 100 사이의 숫자 랜덤
	printf("숫자 : %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1)
	{
		printf("남은 기회 %d 번\n", chance--);
		printf("숫자를 맞혀보세요 (1~100) : ");
		scanf_s("%d", &answer);
		
		if (answer > num)
		{
			printf("DOWN ↓ \n\n");
		}
		else if (answer < num)
		{
			printf("UP ↑ \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다! \n\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류 발생 \n\n");
			break;
		}

		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요. 아쉽게 실패했습니다\n\n");
		}
	}

	return 0;
}