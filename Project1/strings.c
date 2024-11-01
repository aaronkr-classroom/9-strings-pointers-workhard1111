//strings.c

#include <stdio.h>
#include <string.h>

int main(void)
{
	char hello[6] = { 'H', 'E', 'l', 'l', 'o' ,0 };
	char world[6] = { 'W', 'o', 'r', 'l', 'd' ,0 };
	char ment[] = "C is fun!~";

	printf("%s %s\n%s", hello, world, ment);


    //문자열 dont't worry, be happy! 만들고
	//문자열 걱정마, 행복할 거야, 만들고
	//출력해 주세요.

	char worry[] = "Don't worry, be happy!";
	char worry_ko[] = "걱정마. 행복할 거야";

	printf("%s %s", worry, worry_ko);

	return 0;
}