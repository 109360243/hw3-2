#define _CRT_SUCURE_NO_WARINGS
#include<stdio.h>
#include<stdlib.h>

void function(unsigned int x, unsigned long long y);

int main(void)
{
	int ans;
	
	int x = 1;
	int y = 0;
	printf("費氏數列最大值:\n");
	
	 function(x,y);

}
void function(unsigned int x, unsigned long long y )

{

	
	
	int i=0;
	int c;
	scanf_s("%d", &c);
	int a = 0;
	
	 x = 0;
	
	while (i <c)
	{
		if (c == 1)
		{
			printf("0");
			i = 2;
			break;
		}

		
		y = a + x;
		
		if (y == 0)
		{
			x = 1;

		}
		
		

				a = x;
				x = y;
				
			
				i ++;
				

			}
	
	printf("%d\n", y);
			
		}




	

	
	
