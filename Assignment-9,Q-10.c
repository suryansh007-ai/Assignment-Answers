/*10.	Given an array of numbers you've to write a function to return the string "Arithmetic" if the sequence follows an arithmetic pattern or 
return "Geometric" if it follows a geometric pattern. If the sequence does not follow either pattern return "neither arithmetic nor geometric".*/
#include<stdio.h>
int arit(int *ptr1,int d,int n)
{
    int flag,i;
    for(i=0;i<n-1;i++)
    {
        if (*(ptr1+1+i)-*(ptr1+i)==d)
        {
            flag=1;
        }
        else 
        {
            flag=0;
            break;
        }
    }
    return flag;
}
int geo(int *ptr1,int r,int n)
{
    int flag1,i;
    for(i=0;i<n;i++)
    {
        if ((*(ptr1+1+i)/(*ptr1+i))==r)
        {
            flag1=1;
        }
        else 
        {
            flag1=0;
            break;
        }
    }
    return flag1;
}
int main()
{
    int n,i;
    printf("How many elements you want in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter number:");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int d,r,*ptr=arr;
    d=arr[1]-arr[0];
    r=arr[1]/arr[0];
    int a,b;
    a=arit(ptr,d,n);
    b=geo(ptr,r,n);
    if (a==1)
    printf("\nArithemetic");
    else if (b==1)
    printf("Geometric");
    else
    {
        printf("Neither Arithemetic nor geometric:(");
    }
    printf("\nSuryansh Sirohi");
}