#include <stdio.h>

int main_array(void)
{
	// �迭
	//int subway_arr[3];
	//subway_arr[0] = 30;
	//subway_arr[1] = 40;
	//subway_arr[2] = 50;

	//printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�\n", subway_arr[0]);

	//// ���� �ʱ�ȭ�� �ݵ�� �ؾ� �� (�ʱ�ȭ ���ϸ� ���̰�)
	//// �迭 ũ��� �׻� ����� ����
	//int arr[10] = { 1, 2 }; // �ϳ��� ������ ���ָ� �������� �ʱⰪ 0���� ��
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}


	// ���� vs ���ڿ�
	// ���ڿ� ������ '��'�� �ǹ��ϴ� NULL ���� '\0'�� ���ԵǾ�� ��!!!
	//char c = 'A';
	//char str[6] = "coding";
	//char str2[7] = "coding";
	//printf("%s\n", str);
	//printf("%s\n", str2);
	//char str3[] = "coding";
	//printf("%s\n", str);
	//printf("%d\n", sizeof(str3)); // 7('\0' �� �ڵ����� ���ԵǾ��� ����!)


	// ���� 1���� : 1byte
	// �ѱ� 1���� : 2byte
	//char kor[] = "�����ڵ�";
	//printf("%s\n", kor);
	//printf("%d\n", sizeof(kor));


	// ASCII �ڵ� => ANSI (�̱�ǥ����ȸ) ���� ������ ǥ�� �ڵ� ü��
	// 7bit. �� 128�� �ڵ� (0 ~ 127)
	// a : 97
	// A : 65
	// 0 : 48
	printf("%d\n", 'a');
	printf("%d\n", 'A');
	printf("%d\n", '\0');


	for (int i = 0; i < 128; i++)
	{
		printf("�ƽ�Ű�ڵ� ���� %d : %c\n", i, i);
	}

	return 0;
}