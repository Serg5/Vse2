#include<stdio.h>
#include<math.h>
#include < string.h >
int strle(const char *str)
{
	return(strlen(*str));
}
char *find(const char *str, const char *substr)
{
		char *p;
		p = strchr(str, substr);
		char o = (p - str + 1);
		return(&o);

}
void delete(char *str, const char *substr)
{
	printf("pos: %d\n", strstr(str, substr) - str);
	str = strstr(str, substr) - str;
}
void main()
{
	printf("Task1\r\n");
	char *str = "rfadfg", *substr = "a";
	printf("%d\r\n",strlen(str));

	printf("Task2\r\n");
	printf("%d\r\n", find(str, substr));

	printf("Task3\r\n");
	delete(str, substr);


	system("pause");
}