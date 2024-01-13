#include <stdio.h>

int main_prinfscanf(void)
{
	// 정수형 변수
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);

	// 실수형 변수
	float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);

	// 상수
	const int YEAR = 2000;
	printf("태어난 년도 : %d\n", YEAR);
	// YEAR = 2001;  // 상수는 바꿀 수 없음!

	
	// printf
	// 연산
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);


	// scanf
	// 키보드 입력을 받아서 저장
	// & : & 뒤에 오는 변수에 값을 입력받겠다!
	int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d", &input);  
	printf("입력값 : %d\n", input);
	int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 값 : %d\n", one);	
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);


	// 문자, 문자열
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str)); // str의 길이(=256) 이내의 길이만 입력받겠다
	printf("%s\n", str);



	return 0;
}