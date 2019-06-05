#include<stdio.h>
#include<math.h>
#include < string.h >

void incrementHeapVariable()
{
	int *x9;
	printf("Input x\r\n");
	scanf_s("%d", &x9);
	printf("%d  %d\r\n",&x9, x9);
}
void sortHeapArray(int *arr, int n)
{

		for (int i = 0; i < n; ++i)
			scanf_s("%d", &arr[i]);
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
		{
			printf(" %d  ", arr[i]);
		}
}
void delete(char *str, const char *substr)
{
	printf("pos: %d\n", strstr(str, substr) - str);
	str = strstr(str, substr) - str;
}
void main()
{
	printf("Laba6\r\nTask1\r\n");
	incrementHeapVariable();
	printf("\r\nTask2\r\n");
	int arr2[5], v = 3;
	sortHeapArray(&arr2,v);
	printf("\r\nTask3\r\n");
	char *str = "rfadfg", *substr = "a";
	delete(str, substr);
	system("pause");
}