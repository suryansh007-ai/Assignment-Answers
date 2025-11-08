/*Write a program that calculates the average of all elements in an array using a function and pointers. 
The program should have a function averageArray(int* arr, int size) that takes a pointer to the array and its size as 
parameters, and returns the average of the array elements by traversing the array using pointer arithmetic. Example: 
Input:                                                               
Output: 
arr = {2, 4, 6, 8, 10},                                       
size = 5 
Average of array elements: 6*/
#include<stdio.h>
int averageArray(int *arr,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum+=*(arr+i);
    }
    return sum/size;
}
int main()
{
    int n,*ptr,a,i;
    printf("Enter how many elements you want in array:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element at %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nElements of array are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    ptr=arr;
    a=averageArray(ptr,n);
    printf("\nAverage of array elements:%d",a);
}