#include<stdio.h>
#if 0
int main() 
{
	int num2[5];
	int num[5] = {1,2,3,4,5};
	num2 = num;
	printf("%d", num2);
	return 0;
}
#endif
#if 0
struct {
		int a[5];
		int b[5];
	} num,num2;
int main()
{
	struct num.a = {1,2,3,4,5};
	struct num2.b;
	num2 = num;
	printf("%d", num2);
	return 0;
}
#endif
#if 0
int main()
{
	int arr[100] = { [0 ... 19] = 1, [20 ... 39] = 2, [40 ... 59] = 3, [60 ... 79] = 4, [80 ... 99] = 5};
	int i;
	for (i = 0; i < 100; i++)
	{                 
		printf("elements having same value in the range: %d -%d = %d\n", i + 1, i + 20, arr[i]);
		i = i + 19;
	}
	return 0;
}
#endif
#if 1
int main() 
{
	struct name {
			int a;
			int b;
			int c;
	} num1;
	num1.b = 10;
	printf("b = %d", num1.b);
	return 0;
}
#endif
