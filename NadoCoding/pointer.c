#include <stdio.h>

void swap(int a, int b);
void swap_addr(int* a, int* b);
void changeArray(int* ptr);

int main_pointer(void)
{
	//// ������
	//int ö�� = 1;
	//int ���� = 2;
	//int �μ� = 3;
	//printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��);
	//printf("����� �ּ� : %d, ��ȣ : %d\n", &����, ����);
	//printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &�μ�, �μ�);

	//// ������ ����
	//int* �̼Ǹ�;
	//printf("\n... �̼Ǹ��� �̼� �����ϴ� ��... \n\n");
	//�̼Ǹ� = &ö��;
	//printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &����;
	//printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &�μ�;
	//printf("�̼Ǹ��� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//
	//
	//int* ������ = �̼Ǹ�;
	//printf("\n... �����̰� �̼� �����ϴ� ��... \n\n");
	//������ = &ö��;
	//*������ = *������ - 2;
	//printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);
	//������ = &����;
	//*������ = *������ - 2;
	//printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);
	//������ = &�μ�;
	//*������ = *������ - 2;
	//printf("�����̰� �湮�ϴ� �� �ּ� : %d, ��ȣ : %d\n", ������, *������);


	//printf("\n ... ö�� ���� �μ��� ���� �� ... \n");
	//printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��);
	//printf("����� �ּ� : %d, ��ȣ : %d\n", &����, ����);
	//printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &�μ�, �μ�);



	// �迭
	//int arr[3] = { 5,10,15 };
	//int* ptr = arr;
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	printf("�迭 ptr[%d]�� �� : %d\n", i, ptr[i]);
	//}
	//ptr[0] = 100;
	//ptr[1] = 200;
	//ptr[2] = 300;
	//// arr = arr �迭�� ù ��° ���� �ּ� = &arr[0]
	//for (int i = 0; i < 3; i++)
	//{
	//	/*printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);*/
	//	printf("�迭 arr[%d]�� �� : %d\n", i, *(arr + i));
	//}
	//for (int i = 0; i < 3; i++)
	//{
	//	//printf("�迭 ptr[%d]�� �� : %d\n", i, ptr[i]);
	//	printf("�迭 ptr[%d]�� �� : %d\n", i, *(ptr + i));
	//}
	



	// SWAP 
	/*int a = 10;
	int b = 20;
	printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
	swap(a, b);
	printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);

	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d, b : %d\n", a, b);
	swap_addr(&a, &b);
	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d, b : %d\n", a, b);*/


	int arr2[3] = { 10, 20, 30 };
	/*changeArray(arr2);*/
	changeArray(&arr2[0]);
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", arr2[i]);
	}


	return 0;
}
// ���� ���� ���� (Call by Value) 
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	printf("Swap �Լ� �� => a : %d, b : %d\n", a, b);
}

void swap_addr(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("(�ּҰ� ����)Swap �Լ� �� => a : %d, b : %d\n", *a, *b);
}

void changeArray(int* ptr)
{
	ptr[2] = 50;
}