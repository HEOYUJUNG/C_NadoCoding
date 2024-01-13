#include <stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int* ptr);

int main_pointer(void)
{
	//// 포인터
	//int 철수 = 1;
	//int 영희 = 2;
	//int 민수 = 3;
	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	//printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);

	//// 포인터 변수
	//int* 미션맨;
	//printf("\n... 미션맨이 미션 수행하는 중... \n\n");
	//미션맨 = &철수;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &영희;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);
	//미션맨 = &민수;
	//printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", 미션맨, *미션맨);
	//
	//
	//int* 스파이 = 미션맨;
	//printf("\n... 스파이가 미션 수행하는 중... \n\n");
	//스파이 = &철수;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);
	//스파이 = &영희;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);
	//스파이 = &민수;
	//*스파이 = *스파이 - 2;
	//printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", 스파이, *스파이);


	//printf("\n ... 철수 영희 민수가 집에 옴 ... \n");
	//printf("철수네 주소 : %d, 암호 : %d\n", &철수, 철수);
	//printf("영희네 주소 : %d, 암호 : %d\n", &영희, 영희);
	//printf("민수네 주소 : %d, 암호 : %d\n", &민수, 민수);



	// 배열
	//int arr[3] = { 5,10,15 };
	//int* ptr = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("배열 ptr[%d]의 값 : %d\n", i, ptr[i]);
	//}
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;
	//// arr = arr 배열의 첫 번째 값의 주소 = &arr[0]
	//for (int i = 0; i < 3; i++)
	//{
	//	/*printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);*/
	//	printf("배열 arr[%d]의 값 : %d\n", i, *(arr + i));
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("배열 ptr[%d]의 값 : %d\n", i, ptr[i]);
	//	printf("배열 ptr[%d]의 값 : %d\n", i, *(ptr + i));
	//}
	



	// SWAP 
	/*int a = 10;
	int b = 20;
	printf("Swap 함수 전 => a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("Swap 함수 후 => a : %d, b : %d\n", a, b);

	printf("(주소값 전달)Swap 함수 전 => a : %d, b : %d\n", a, b);
	swap_addr(&a, &b);
	printf("(주소값 전달)Swap 함수 후 => a : %d, b : %d\n", a, b);*/


	int arr2[3] = { 10, 20, 30 };
	/*changeArray(arr2);*/
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}


	return 0;
}
// 값에 의한 복사 (Call by Value) 
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("Swap 함수 내 => a : %d, b : %d\n", a, b);
}

void swap_addr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(주소값 전달)Swap 함수 내 => a : %d, b : %d\n", *a, *b);
}

void changeArray(int* ptr)
{
	ptr[2] = 50;
}