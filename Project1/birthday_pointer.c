//birthday_pointer.c
#include <stdio.h>

int main(void)
{
	short birthday;
	short* ptr; //포인터 변수 선언함
	ptr = &birthday; //birthday 변수의 주소를 ptr 변수에 대입함.

	int intVar = 42;
	float floatVar = 3.14;
	char charVar = 'A';
	double doubleVar = 9.81;

	//포인터 정의
	int* intPtr = &intVar;
	float* floatPtr = &floatVar;
	char* charPtr = &charVar;
	double* doublePtr = &doubleVar;

	//%p 생식은 메모리 주소를 16진수 형식으로 출력함
	printf("birthday 변수의 주소는 %p입니다.\n", ptr);

	// 변수 값과 주소를 출력함
	printf("intVar 변수 값: %d ,주소는 %p입니다.\n", *intPtr, intPtr);
	printf("floatVar 변수 값: %.2f ,주소는 %p입니다.\n", *floatPtr, floatPtr);
	printf("charVar 변수 값: %c ,주소는 %p입니다.\n", *charPtr, charPtr);
	printf("doubleVar 변수 값: %.2f ,주소는 %p입니다.\n", *doublePtr, doublePtr);

	getch();

	return 0;
}