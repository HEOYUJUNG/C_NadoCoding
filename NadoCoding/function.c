#include <stdio.h>

// ����
void p(int num);
void function_without_return();
int function_with_return();
void function_without_param();
void function_with_param(int num1, int num2, int num3);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);


int main_function(void)
{
	// int num = 2;
	// p(num);
	// function_without_return();
	// int ret = function_with_return();
	// p(ret);
	// function_without_param();
	// function_with_param(1, 2, 3);


	// ����
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 2);
	p(num);

	num = div(num, 3);
	p(num);


	return 0;
}

// ����
void p(int num)
{
	printf("num�� %d�Դϴ�\n", num);
}

void function_without_return()
{
	printf("��ȯ���� ���� �Լ��Դϴ�\n");
}

int function_with_return()
{
	printf("��ȯ���� �ִ� �Լ��Դϴ�\n");
	return 10;
}

void function_without_param()
{
	printf("���ް��� ���� �Լ��Դϴ�\n");
}

void function_with_param(int num1, int num2, int num3)
{
	printf("���ް��� �ִ� �Լ��Դϴ�\n");
	printf("���ް��� %d, %d, %d�Դϴ�\n", num1, num2, num3);
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}