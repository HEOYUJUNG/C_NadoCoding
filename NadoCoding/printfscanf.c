#include <stdio.h>

int main_prinfscanf(void)
{
	// ������ ����
	int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);

	// �Ǽ��� ����
	float f = 46.5f;
	printf("%.2f\n", f);
	double d = 4.428;
	printf("%.2lf\n", d);

	// ���
	const int YEAR = 2000;
	printf("�¾ �⵵ : %d\n", YEAR);
	// YEAR = 2001;  // ����� �ٲ� �� ����!

	
	// printf
	// ����
	int add = 3 + 7;
	printf("3 + 7 = %d\n", add);
	printf("%d + %d = %d\n", 3, 7, 3 + 7);


	// scanf
	// Ű���� �Է��� �޾Ƽ� ����
	// & : & �ڿ� ���� ������ ���� �Է¹ްڴ�!
	int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &input);  
	printf("�Է°� : %d\n", input);
	int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �� : %d\n", one);	
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);


	// ����, ���ڿ�
	char c = 'A';
	printf("%c\n", c);

	char str[256];
	scanf_s("%s", str, sizeof(str)); // str�� ����(=256) �̳��� ���̸� �Է¹ްڴ�
	printf("%s\n", str);



	return 0;
}