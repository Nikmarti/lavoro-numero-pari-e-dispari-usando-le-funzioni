#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a;
	void numero(int a);
	
	printf("Inserisci un numero: ");
	scanf("%d", &a);
	
	numero(a);
}

void numero(int a)
{
	int resto;
	resto=a%2;
	
	if(resto==0)
	{
		printf("Il numero e' pari");
	}
	else
	{
		printf("Il numero e' dispari");
	}
}
