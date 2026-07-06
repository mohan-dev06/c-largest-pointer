#include<stdio.h>
void main()
{
    int i, a[]={8, 22, 27, 32, 42};
    int *p=a;
    int max=*p;
    for(i=1; i<5; i++)
    {
        if(max<*(p+i))
        {
            max=*(p+i);
        }
    }
    printf("Largest array:%d", max);
}