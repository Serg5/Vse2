#include<stdio.h>
#include<math.h>
const int *x = 654;
int t = 65;
int *y = &x;
void main()
{
	printf("x= %d\r\n t= %d ", *y, t);
	system("pause");
}