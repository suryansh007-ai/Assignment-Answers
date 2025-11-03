/*I have commented out the first 2 parts, there code is in comments:)*/


/*Define a union with three members – one each of char, int, and float data types. The 
char variable should be able to handle a string of a maximum of 10 characters. Declare two 
variables of this union.
 1. The first variable read user input for all the three members first and then print their values to 
the output screen.
#include<stdio.h>
union details
{
    char name[10];
    int age;
    float salary;
};
int main()
{
    union details info_1;
    printf("\nEnter the age:");
    scanf("%d",&info_1.age);
    printf("\nEnter the salary:");
    scanf("%f",&info_1.salary);
    printf("Enter the name:");
    getchar();
    fgets(info_1.name,10,stdin);
    printf("Name:%s",info_1.name);
    printf("\nAge:%d",info_1.age);
    printf("\nSalary:%f",info_1.salary);
}
 2. For the second variable, one by one, read input for one member and then print its 
value.
#include<stdio.h>

union details
{
    char name[10];
    int age;
    float salary;
};
int main()
{
    union details info_2;
    printf("\nEnter the age:");
    scanf("%d",&info_2.age);
    printf("\nAge:%d",info_2.age);
    printf("\nEnter the salary:");
    scanf("%f",&info_2.salary);
    printf("\nSalary:%f",info_2.salary);
    printf("\nEnter the name:");
    getchar();
    fgets(info_2.name,10,stdin);
    printf("\nName:%s",info_2.name);
}
 Examine the difference in the outputs of the first and second steps*/

 /*Reason for different answer in 1st and 2nd part is that in Union memory is shared between the members due to which in first case, it is getting constantly overwritten without getting to print the actual output, thus we get garbage values in 1st . In 2nd part after each time we write data, it gets printed before being overwritten.*/
/*3. Print the size of the union variables.*/
 #include<stdio.h>

union details
{
    char name[10];
    int age;
    float salary;
};
int main()
{
    union details info_1;
    printf("\nEnter the age:");
    scanf("%d",&info_1.age);
    printf("\nEnter the salary:");
    scanf("%f",&info_1.salary);
    printf("Enter the name:");
    getchar();
    fgets(info_1.name,10,stdin);
    printf("\nSize of first union variable:%d\n",sizeof(info_1));
    union details info_2;
    printf("\nEnter the age:");
    scanf("%d",&info_2.age);
    printf("\nAge:%d",info_2.age);
    printf("\nEnter the salary:");
    scanf("%f",&info_2.salary);
    printf("\nSalary:%f",info_2.salary);
    printf("\nEnter the name:");
    getchar();
    fgets(info_2.name,10,stdin);
    printf("\nName:%s",info_2.name);
    printf("\nSize of second union variable:%d\n",sizeof(info_2));
}