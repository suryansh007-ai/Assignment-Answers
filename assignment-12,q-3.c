/*Write a function in C to compare two numbers and return a pointer to the large number.*/
#include<stdio.h>
int larger(int a,int b)
{
    int *ptr;
    if (a>b)
    {
        return ptr=&a;
    }
    else
    {
        return ptr=&b;
    }
}
int main()
{
    int a,b,*k;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    k=larger(a,b);
    printf("%d",*k);
}