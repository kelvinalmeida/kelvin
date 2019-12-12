#include <stdio.h.>

int tam_ciclo(int n, int tam) // Retorna o tamanho do ciclo
{
	//printf("%d\n", n);

	if (n == 1) 
	{
		tam++; // Tem que acrescentar +1 pois ele não desce para contar o 1.
		return tam; 
	}
	
	else if (n % 2 == 0)
	{
		n = n/2;
	}
	else
	{
		n = n*3 + 1;
	}
	
	tam++;
	
	tam_ciclo(n,tam);
}

void organizador(int i, int i2, int j, int maior)
{
	if (i <= j)
	{
		if (tam_ciclo(i,0) > maior)
		{
			maior = tam_ciclo(i,0);
		}

		organizador(i+1,i2,j,maior);
	}
	else
	{
		printf("%d %d %d\n",i2 ,j ,maior);
	}	
}

void loop(){
	int i, j;

	scanf("%d %d", &i, &j);

	organizador(i,i,j,0);

	loop();
}

int main(){
	
	loop();	

return 0;	
}