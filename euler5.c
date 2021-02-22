#include <stdio.h>

int main(void)
{
	int i, mul = 1, j, num;
	int facts[20];

	for (i = 2; i <= 20; i++)
	{
		num = i;   
		for(j = 0; j < i - 2; j++)
		{
			if (num % facts[j] == 0)
			 	num = num / facts[j];
		}
		facts[i-2] = num;
		mul = mul * num;
 	}
	printf("%d\n", mul);
}
