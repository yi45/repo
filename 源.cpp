#include <stdio.h>
#include <string.h>

int main() 
{
	void encrypt();
	void decrypt();
	printf("--------欢迎使用密码管理系统---------\n");
	printf("--------------1.加密-----------------\n");
	printf("--------------2.解密-----------------\n");
	printf("请选择你要实现的功能:\n");
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
			printf("没有这个功能，请重新选择。");
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
	printf("请输出要加密的明文：\n");
	scanf_s("%s", &text);
	count = strlen(text);
	for (i = 0; i < count; i++)
	{
		encrypt[i] = text[i] + i + 3;
	}
	encrypt[i] = '\0';
	printf("加密后的密文是:%s\n", encrypt);
}

void decrypt()
{
	int i;
	int count = 0;
	char text[100] = { '\0' };
	char decrypt[100] = { '\0' };
	printf("请输出要解密的明文：\n");
	scanf_s("%s", &text);
	count = strlen(text);
	for (i = 0; i < count; i++)
	{
		decrypt[i] = text[i] - i - 3;
	}
	decrypt[i] = '\0';
	printf("解密后的密文是:%s\n", decrypt);
}