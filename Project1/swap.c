//swap.c

#include <stdio.h>

void swap1(int a, int b)
{
	int temp = a; //a = 96, b = 5, temp = 96
	a = b;        // a = 5, b = 5, temp = 96
	b = temp;     // a = 5, b = 96, temp = 96
}

void swap2(int* pa, int* pb)
{
	int temp = *pa;  //*pa(start) = 96, *pb(end) = 5, temp = 96
	*pa = *pb;       //*pa(start) = 5, *pb(end) = 5, temp = 96
	*pb = temp;      //*pa(start) = 5, *pb(end) = 96, temp = 96
}

int main(void)
{
	int start = 96,
		end = 5;

	printf("swap 1:\n");
	printf("before start = %d, end = %d\n", start, end);
	if (start > end) swap1(start, end); // �� ���� (�纻)
	printf("after: start = %d, end = %d\n", start, end);

	printf("\nswap 2:\n");
	printf("before start = %d, end = %d\n", start, end);
	if (start > end) swap2(&start, &end); //�ּ� ���� (��� ��)
	printf("after: start = %d, end = %d\n", start, end);

	getch();

	return 0;
}