#include <stdio.h>

int main_array(void)
{
	// 배열
	//int subway_arr[3];
	//subway_arr[0] = 30;
	//subway_arr[1] = 40;
	//subway_arr[2] = 50;

	//printf("지하철 1호차에 %d 명이 타고 있습니다\n", subway_arr[0]);

	//// 값은 초기화를 반드시 해야 함 (초기화 안하면 더미값)
	//// 배열 크기는 항상 상수로 선언
	//int arr[10] = { 1, 2 }; // 하나라도 선언을 해주면 나머지는 초기값 0으로 됨
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}


	// 문자 vs 문자열
	// 문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야 함!!!
	//char c = 'A';
	//char str[6] = "coding";
	//char str2[7] = "coding";
	//printf("%s\n", str);
	//printf("%s\n", str2);
	//char str3[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str3)); // 7('\0' 이 자동으로 포함되었기 때문!)


	// 영어 1글자 : 1byte
	// 한글 1글자 : 2byte
	//char kor[] = "나도코딩";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));


	// ASCII 코드 => ANSI (미국표준협회) 에서 제시한 표준 코드 체계
	// 7bit. 총 128개 코드 (0 ~ 127)
	// a : 97
	// A : 65
	// 0 : 48
	printf("%d\n", 'a');
	printf("%d\n", 'A');
	printf("%d\n", '\0');


	for (int i = 0; i < 128; i++)
	{
		printf("아스키코드 정수 %d : %c\n", i, i);
	}

	return 0;
}