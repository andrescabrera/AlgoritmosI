#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,n;
    scanf("%d",&a);
    scanf("%d",&n);
    printf("\n%d",exponencial(a,n));
}

int exponencial(int a, int n)
{
    int temp,resp;
    if (n==1)

        return a;

    else if (n % 2 ==0)
    {
        temp=exponencial(a,(int) n/2);
        resp = temp*temp;
        return resp;

    }
    else

        return (a*exponencial(a,n-1));

}


