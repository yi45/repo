#include <stdio.h>
#include <string.h>

int main() 
{
	void encrypt();
	void decrypt();
	printf("--------��ӭʹ���������ϵͳ---------\n");
	printf("--------------1.����-----------------\n");
	printf("--------------2.����-----------------\n");
	printf("��ѡ����Ҫʵ�ֵĹ���:\n");
	int n;
	scanf_s("%d", &n);
	while (n)
	{
		if (n == 1 || n == 2)
		{
			switch (n)
			{
			case 1:encrypt(); break;
			case 2:decrypt(); break;
			}
		}
		else
		{
			printf("û��������ܣ�������ѡ��");
		}
	}
	return 0;
}

void encrypt()
{
	int i;
	int count = 0;
	char text[100] = { '\0' };
	char encrypt[100] = { '\0' };
	printf("�����Ҫ���ܵ����ģ�\n");
	scanf_s("%s", &text);
	count = strlen(text);
	for (i = 0; i < count; i++)
	{
		encrypt[i] = text[i] + i + 3;
	}
	encrypt[i] = '\0';
	printf("���ܺ��������:%s\n", encrypt);
}

void decrypt()
{
	int i;
	int count = 0;
	char text[100] = { '\0' };
	char decrypt[100] = { '\0' };
	printf("�����Ҫ���ܵ����ģ�\n");
	scanf_s("%s", &text);
	count = strlen(text);
	for (i = 0; i < count; i++)
	{
		decrypt[i] = text[i] - i - 3;
	}
	decrypt[i] = '\0';
	printf("���ܺ��������:%s\n", decrypt);
}