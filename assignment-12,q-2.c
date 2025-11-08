/*Write a C program to create a structure to store name, number and rank. Access the 
structure members with Pointer.*/
#include<stdio.h>
struct details
{
    char name[100];
    int number;
    int rank;
};
int main()
{
    struct details data;
    printf("Enter the name:");
    fgets(data.name,100,stdin);
    printf("\nEnter the number:");
    scanf("%d",&data.number);
    printf("\nEnter the rank:");
    scanf("%d",&data.rank);
    struct details *ptr1;
    ptr1=&data;
    printf("\nName:%s",ptr1->name);
    printf("\nNumber:%d",ptr1->number);
    printf("\nRank:%d",ptr1->rank);
}
