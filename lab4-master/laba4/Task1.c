#include<stdio.h>
#include<math.h>
void f(const double *x, double *result)
{
	*result = (1.0 / (sqrt(2.0) + sqrt(*x)));
}
void writeArray(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
		printf(" %d  ", arr[i]);
}
void readArray(int *arr, int n)
{
	for (int i = 0; i < n; ++i)
		scanf_s("%d", &arr[i]);
}
void sort(int *arr, int n)
{
	int x;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (&arr[i] < &arr[j] && i > j)
			{
				x = &arr[i];
				arr[i] = &arr[j];
				arr[j] = &x;
			}
		}
	}
	for (int i = 0; i < n; ++i)
		printf(" %d  ", arr[i]);
}
void main()
{
	
	printf("Task1\r\n");
	double x;
	double result;
	int arr[5], n=3;
	arr[0] = 1;
	arr[1] = arr[0] + 1;
	arr[2] = arr[1] + 1;
	arr[3] = arr[2] + 1;
	x = 43.0;
	f(&x, &result);
	printf("x= %lf; f= %.2lf \r\n \r\n", x, result);
	printf("\r\nTask5\r\n");
	printf("%d\r\n", n);
	printf("Task2\r\n\r\n");
	writeArray(&arr, n);

	printf("\r\nTask3\r\n");
	readArray(&arr, n);

	printf("Task4\r\n");
	sort(&arr, n);



	system("pause");
}