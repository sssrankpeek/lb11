#include <stdio.h>
#include<locale.h>
#include <math.h>
#define N 10
#define E 101
float func(float x)
{
	float y;
	y = pow(2,x) - 2 * x * x - 1;
	return y;
}
void main()
{
	setlocale(LC_ALL, "RUS");
	float A[N], temp, se=0;
	for (int i = 0; i < N; i++)
	{
		printf("A[%d]= ", i + 1);
		scanf("\n%f", &temp);
		A[i] = temp;
	}
	for (int i = 0; i < N; i++)
	{
		printf("\nA[%d] | %9.2f |", i+1, A[i]);
		if ((i+1)%2==0)
		A[i] = A[i] + 1;
		printf("%9.2f", A[i]);
		se += A[i];
	}
	printf("\n ������� ��������������=%f", se / N);

	float B[E], x=1;
	float shag;
	printf("\n ������� ��� ��� �������: ");
	scanf("%f", &shag);
	for (int i = 0; i<E; i++) 
	{
		B[i] = func(x);
		x+=shag;
		printf("\n B[%d]=%f", i, B[i]);
	}
	float sum = 0, sum1=0;
	int kolvootric = 0, kolvopoloj = 0;
	for (int i = 0; i < E; i++)
	{
		if (B[i] > 0)
		{
			sum += B[i];
			kolvopoloj += 1;
		}
		else
		{
			sum1 += B[i];
			kolvootric += 1;
		}
	}
}