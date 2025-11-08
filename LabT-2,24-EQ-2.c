/* Write a program that uses structures to calculate the salary of an employee. Define a structure 
Employee with the following fields: 
• name (string) 
• basic_salary (float) 
• bonus (float) 
• deductions (float) 
Create a function calculateSalary() that computes the total salary by adding the basic salary, bonus, and subtracting 
the deductions. Display the employee's name along with the total salary. Example: 
Input: 
• Name: Alice 
• Basic Salary: 50000 
• Bonus: 5000 
• Deductions: 2000 
Output: 
• Employee Name: Alice   
• Total Salary: 53000*/
#include<stdio.h>
struct details
{
    char name[100];
    float basic_sal;
    float bonus;
    float deductions;
};
struct details data[100];
void calculateSalary()
{
    static int i=0;
    float ts=0;
    printf("\nEnter Employee name:");
    fgets(data[i].name,100,stdin);
    printf("\nEnter Basic salary:");
    scanf("%f",&data[i].basic_sal);
    printf("\nEnter Bonus:");
    scanf("%f",&data[i].bonus);
    printf("\nEnter deductions:");
    scanf("%f",&data[i].deductions);
    ts=data[i].basic_sal+data[i].bonus-data[i].deductions;
    printf("\nName:%s",data[i].name);
    printf("Total Salary:%f",ts);
    i++;
}
int main()
{

    int a,flag=1;
    while (flag!=0)
    {
        calculateSalary();
        printf("\nWant to calculate for another employee?Press 0 if no, else press any number key.");
        scanf("%d",&flag);
        getchar();
    }
    printf("\nThanks for using:)");
}