#include<stdio.h>
#define SIZE 10
int string_len(char *str);
int main()
{
	char str[SIZE];
	int size;
	printf("\nEnter a string:\n");
	scanf("%[^\n]s", str);
	size = string_len(str);
    printf("length of string: %d\n", size);
	return 0;
}
int string_len(char *str)
{
	int count = 0;
	char *str1 = str;
	while (*str1 != '\0') {
		count++;
		str1++;
	}
	return count;
}

