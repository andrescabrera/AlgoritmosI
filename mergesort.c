#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[40],fin,i;
    printf("ingrese dim\n");
    scanf("%d",&fin);
    for(i=0; i<fin; i++)
    {
        printf("ingr valor\n");
        scanf("%d",&a[i]);
    }

    printf("\n el vector ordenado por merge");
    for(i=0; i<fin; i++)
    {
        printf("\n %d",a[i]);
    }




}



void mergesort(int a[],int low,int high)
{
    int working[40],i;
    if (low==high)
        return;	//solo hay un elemento, así que finaliza


    int length = high-low+1;
    int pivot = (low+high)/2;
    //divide
    mergesort(a,low,pivot);
    mergesort(a,pivot+1,high);
    //combina

    for ( i=0; i<length; i++)
        working[i]=a[low+i];
    int m1=0;
    int m2=pivot-low+1;
    for( i=0; i<length; i++)
    {
        if(m2 <= high-low)
            if(m1 <= pivot -low)
                if(working[m1] >working[m2])
                    a[i+low] = working[m2++];
                else
                    a[i+low] = working[m1++];
            else
                a[i+low]=working[m2++];
        else
            a[i+low]=working[m1++];
    }
}
