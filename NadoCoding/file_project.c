#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// ��й�ȣ�� �Է� �޾Ƽ�
// �´� ���? ��� �ϱ⸦ �о�ͼ� �����ְ�, ��� �ۼ��ϵ��� ��
// Ʋ�� ���? ��� �޽����� ǥ���ϰ� ����.

#define MAX 10000

int main(void)
{
	// fgets, fputs Ȱ��
	char line[MAX]; // ���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX]; // �ϱ��忡 �Է��� ����
	char password[20]; // ��й�ȣ �Է�
	char c; // ��й�ȣ �Է� �� �� Ű�� Ȯ�ο�

	printf("'����ϱ�'�� ���� ���� ȯ���մϴ�\n");
	printf("��й�ȣ�� �Է��ϼ��� : ");

	// getchar() : ���͸� �Է¹޾ƾ� ������ ��
	// getch() : Ű �Է� �� �ٷιٷ� ������

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13) // Enter -> ��й�ȣ �Է� ����
		{
			password[i] = '\0';
			break;
		}
		else
		{
			printf("*");
			password[i++] = c;
		}
	}

	printf("\n\n === ��й�ȣ Ȯ�� ��... === \n\n");
	if (strcmp(password,"skehzheld") == 0) // ��й�ȣ ��ġ
	{
		printf("=== ��й�ȣ Ȯ�� �Ϸ� ===\n\n");
		char* fileName = "C:\\Users\\heoyu\\Desktop\\secretdiary.txt";
		FILE* file = fopen(fileName, "a+b"); // ������ ������ ����, ������ ������ append
		if (file == NULL)
		{
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL)
		{
			printf("%s", line);
		}

		printf("\n\n ������ ��� �ۼ��ϼ���! �����Ͻ÷��� EXIT�� �Է��ϼ���\n\n");

		while (1)
		{
			scanf("%[^\n]", contents); // �� ��(\n)�� ������ ������ ����
			getchar(); // Enter �Է�(\n) flush ó��

			if (strcmp(contents, "EXIT") == 0)
			{
				printf("����ϱ� �Է��� �����մϴ�\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n", file); // ���� ���Ƿ� �߰�
		}
		fclose(file);
	}
	else // ��й�ȣ Ʋ�� ���
	{
		printf(" === ��й�ȣ�� Ʋ�Ⱦ�� ===\n\n");
	}

	return 0;
}