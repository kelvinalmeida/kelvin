#include <stdio.h>

void pegar(int i, int n, int num[])
{
    if (i < n)
    {
        scanf("%d", &num[i]);
        pegar(i+1,n,num);
    }
}

void mostrar(int i, int n, int num[])
{
    if (i < n)
    {
        printf("%d", num[i]);

        mostrar(i+1,n,num);
    }
    
}

void contar(int i, int n, int num[])
{
    if (i < n)
    {
        
    }
    
}

int main(){

    int n,m;

    scanf("%d %d", &n, &m);
    
    int a;
    a = 2*n;

    int num[a];

    pegar(0,a,num);
    mostrar(0,a,num);

    contar(0,a,num);

return 0;
}
