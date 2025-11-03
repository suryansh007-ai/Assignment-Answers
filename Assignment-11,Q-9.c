/*Define a union which can record the ID, Name, Age, and Salary of two employees 
Employee. Using loops, record the input for five users and print all the records such that no 
data is lost while printing the output.*/
#include<stdio.h>
union employee
{
    int id;
    char name[50];
    int age;
    float salary;
};
struct details
{
    int id;
    char name[50];
    int age;
    float salary;
};
int main()
{
    struct details emp[5];
    int i;
    union employee temp;
    for(i=0;i<5;i++)
    {
        printf("\nEnter the details for employee %d:",i+1);
        printf("Enter ID:");
        scanf("%d",&temp.id);
        emp[i].id=temp.id;
        getchar();
        printf("Enter name:");
        fgets(temp.name,50,stdin);
        int j=0;
        while(temp.name[j]!='\0')
        {
            emp[i].name[j]=temp.name[j];
            j++;
        }
        emp[i].name[j]='\0';
        printf("Enter Age:");
        scanf("%d",&temp.age);
        emp[i].age=temp.age;
        printf("Enter salary:");
        scanf("%d",&temp.salary);
        emp[i].salary=temp.salary;
    }
    printf("\nEmployee Records:\n");
    for(i=0;i<5;i++)
    {
        printf("\nEmployee %d",i+1);
        printf("\nID:%d",emp[i].id);
        printf("\nName:%s",emp[i].name);
        printf("\nAge:%d",emp[i].age);
        printf("\nSalary:%d",emp[i].salary);
    }
}