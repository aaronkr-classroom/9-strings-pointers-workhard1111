//strings.c

#include <stdio.h>
#include <string.h>

int main(void)
{
	char hello[6] = { 'H', 'E', 'l', 'l', 'o' ,0 };
	char world[6] = { 'W', 'o', 'r', 'l', 'd' ,0 };
	char ment[] = "C is fun!~";

	printf("%s %s\n%s", hello, world, ment);


    //���ڿ� dont't worry, be happy! �����
	//���ڿ� ������, �ູ�� �ž�, �����
	//����� �ּ���.

	char worry[] = "Don't worry, be happy!";
	char worry_ko[] = "������. �ູ�� �ž�";

	printf("%s %s", worry, worry_ko);

	return 0;
}