#include <stdio.h>
#include <math.h>
#include <stdbool.h>



int getdigit(int n, int d)
{
	int potencia, potencia2;

	potencia = (int)pow(10, d);
	potencia2 = (int)pow(10, d - 1);

	return ((((n % potencia) - (n % potencia2)) / potencia2));
}
bool esPalindromo(int a)
{
	int numdig = (int) log10(a) + 1;
	bool palindromo = true;
	int k, halfnumdig, dig1, dig2;

//	printf("Tiene %d digitos \n", numdig);
	halfnumdig = numdig / 2;
//	printf("La mitad de los digitos son: %d\n", halfnumdig);
	for (k = 0; k <= halfnumdig; k++)
	{
		if (getdigit(a, k + 1) != getdigit(a, numdig - k))
		{
			palindromo = false;
			break;
		}
	}
	return (palindromo);
}

void printVector(int vector[], int t)
{
	int i = 0;

	for (; i < t; i++)
	{
		printf("%d ", vector[i]);
	}
	printf("\n");
}

int main(void)
{
	int i, j, palcounter = 0, multi, bigpal = 0;
	int palindromos[1239];

	for (i = 100; i <= 999; i++)
	{
		j = i;
		for (; j <= 999; j++)
		{
			multi = i * j;
			if (esPalindromo(multi) && multi > bigpal)
			{
//				palindromos[palcounter] = multi;
//				palcounter++;
				bigpal = multi;
			}
		}
	}
	printf("El palindromo más grande es: %d\n", bigpal);
//	printf("hay %d palindromos\n", palcounter);
//	printVector(palindromos, palcounter);
	return (0);
}
