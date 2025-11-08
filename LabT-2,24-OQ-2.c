/*Write a program to manage student records using structures. Define a structure Student that contains 
the following information: name (string), roll_number (integer), marks (float). Create a function inputStudentData() 
to input the details of a student and a function displayStudentData() to display the student's information. Your program 
should be able to input data for multiple students and display it. Example: 
Input: 
• Name: John 
• Roll Number: 101 
• Marks: 85.5 
Output: 
• Student Name: John   
• Roll Number: 101 
• Marks: 85.5*/
#include<stdio.h>
#include<stdlib.h>
struct details
{
    char name[100];
    int roll_no;
    float marks;
};
struct details data[100];
void inputStudentData(int i)
{
    getchar();
    printf("Enter student name:");
    fgets(data[i].name,100,stdin);
    printf("\nEnter student Roll No.:");
    scanf("%d",&data[i].roll_no);
    printf("\nEnter student marks:");
    scanf("%f",&data[i].marks);
    i++;
    printf("\nData added succesfully!");
}
void displayStudentData(int j)
{
    printf("Student name:%s",data[j].name);
    printf("\nStudent Roll No.:%d",data[j].roll_no);
    printf("\nStudent marks:%f",data[j].marks);
}
int main()
{
    int key=1;
    static int i=0,j;
    while (key!=3)
    {
        printf("\n1:Input Student data");
        printf("\n2:Display student data\n3:Exit\nMake a choice!");
        scanf("%d",&key);
        switch (key)
        {
        case 1:
        inputStudentData(i);
        break;
        case 2:
        printf("Which data entry result you want?");
        scanf("%d",&j);
        displayStudentData(j-1);
        break;
        case 3:
        printf("Exiting Program:)");
        exit(1);
        default:
        printf("Oops, wrong choice.");
        }
    }
}