#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
char sss(char ch);
int main()
{
	char x;
	x = 'a';
	printf("%s\n", sss(x));
}
	char sss(char ch)
	{
		
		while ((ch = getchar()) != EOF)
		{
			if (ch >= 'A' && ch <= 'Z')
			{
				ch = ch + 32;

			}
			else if (ch >= 'a' && ch <= 'z')
			{
				ch = ch - 32;
			}
			putchar(ch);
			
		}
		return ch;
	}
