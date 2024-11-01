//2d_array.c
#include <stdio.h>

#define STU_NUM 3
#define GRADES_NUM 4

int main(void)
{
	int grades[STU_NUM][GRADES_NUM] = {
		{85, 45, 70, 93}, //�л�1
		{74, 86, 93, 45}, //�л�2
		{67, 37, 99, 97} //�л�3
	};

	//�� �л��� ���� ���
	printf("Student grades:\n");
	for (int i = 0; i < STU_NUM; i++)
	{ //�л��� ����
		printf("Student %d:", i + 1);
		for (int j = 0; j < GRADES_NUM; j++)
		{ //������ ����
			printf("%d", grades[i][j]); //grades[�л�][����]
		}
		printf("\n");
	}

	//�л��� ��� ���� ���
	printf("\nEach Student's Average : \n");
	for (int i = 0; i < STU_NUM; i++)
	{
		int sum = 0;
		for (int j = 0; j < GRADES_NUM; j++)
		{
			sum += grades[i][j];
		}
		float average = sum / (float)GRADES_NUM;
		printf("Student %d: %.2f\n", i + 1, average);
	}

	return 0;
}