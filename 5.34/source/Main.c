#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int function(int x, int y);
int main()
{
	int a, b;
	printf("¿é¤J¨â¼Æ­È\n");
	scanf("%d%d", &a, &b);
	printf("answer is %d", function(a, b));
}
int function(int x, int y)
{
	int i;
	int s;
	s = x;
	for (i = 1; i < y; i++)
	{
		x = s * x;

	}
	return x;
}