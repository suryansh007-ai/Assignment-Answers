/*Write a program that finds the maximum element in an array using a function and pointers. The 
program should have a function findMax(int* arr, int size) that takes a pointer to the array and its size as parameters, 
and returns the maximum element by traversing the array using pointer arithmetic. Example: 
Input:                                                          
Output: 
arr = {3, 7, 1, 5, 9},                                     
size = 5 */
#include<stdio.h>
int findmax(int *arr,int size)
{
    int max,i;
    max=*arr;
    for(i=1;i<size;i++)
    {
        if (*(arr+i)>max)
        {
            max=*(arr+i);
        }
    }
    return max;
}
int main()
{
    int n,a,i;
    printf("Enter how many elements you want in array:");
    scanf("%d",&n);
    int arr[n],*ptr;
    for(i=0;i<n;i++)
    {
        printf("Enter element at %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nYour array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    ptr=arr;
    a=findmax(ptr,n);
    printf("\nMaximum of array is:%d",a);
}