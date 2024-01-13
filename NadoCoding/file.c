#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 10000

int main_file(void)
{
	// 파일 입출력

	/* fputs, fgets(문자열) */
	//char line[MAX];

	// 파일에 쓰기
	//FILE* file = fopen("C:\\Users\\heoyu\\Desktop\\test1.txt", "wb"); // wb : 바이너리 데이터를 쓰겠다
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//fputs("fputs를 이용해서 글을 적어볼게요\n", file);
	//fputs("잘 적히는지 확인해주세요\n", file);


	// 파일 읽기
	//FILE* file = fopen("C:\\Users\\heoyu\\Desktop\\test1.txt", "rb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}

	//while (fgets(line, MAX, file))
	//{
	//	printf("%s", line);
	//}

	//// 파일을 열고 나서 닫지 않은 상태에서 어떤 프로그램에 문제가 생기면
	//// 데이터 손실 발생 가능! 항상 파일은 닫아주는 습관을 들이자
	//fclose(file);



	/* fprintf, fscanf */
	int num[6] = { 0,0,0,0,0,0 }; // 추첨번호
	int bonus = 0; // 보너스번호
	char str1[MAX];
	char str2[MAX];
	//FILE* file = fopen("C:\\Users\\heoyu\\Desktop\\test2.txt", "wb");
	//if (file == NULL)
	//{
	//	printf("파일 열기 실패\n");
	//	return 1;
	//}
	//// 로또 추첨 번호 저장
	//fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호 ", 1, 2, 3, 4, 5, 6);
	//fprintf(file, "%s %d\n", "보너스번호 ", 7);
	//fclose(file);

	// 파일 읽기
	FILE* file = fopen("C:\\Users\\heoyu\\Desktop\\test2.txt", "rb");
	if (file == NULL)
	{
		printf("파일 열기 실패\n");
		return 1;
	}
	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);

	fscanf(file, "%s %d", str2, &bonus);
	printf("%s %d\n", str2, bonus);


	return 0;
}