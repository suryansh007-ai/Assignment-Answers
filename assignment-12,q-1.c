/*Write a program in C to demonstrate the difference between union and structure.
 1. Define a structure and a union with three members, one each of int, float, and char 
data-type.
 2. Take user input for each member, both for union and structure.
 3. Print the value of each member variable and size of structure and union variable.*/
/*For structure:*/
#include<stdio.h>
struct s_details
{
    int roll_no;
    float marks;
    char name[100];
};
int main()
{
    struct s_details data;
    printf("Enter roll number:");
    scanf("%d",&data.roll_no);
    printf("\nEnter marks:");
    scanf("%f",&data.marks);
    getchar();
    printf("\nEnter student name:");
    fgets(data.name,100,stdin);
    printf("\nRoll Number:%d",data.roll_no);
    printf("\nMarks:%f",data.marks);
    printf("\nName:%s",data.name);
    printf("\nSize of structure:%d",sizeof(data));
}
/*For union:
#include<stdio.h>
union u_details
{
    int roll_no;
    float marks;
    char name[100];
};
int main()
{
    union u_details data;
    printf("Enter roll number:");
    scanf("%d",&data.roll_no);
    printf("\nEnter marks:");
    scanf("%f",&data.marks);
    getchar();
    printf("\nEnter student name:");
    fgets(data.name,100,stdin);
    printf("\nRoll Number:%d",data.roll_no);
    printf("\nMarks:%f",data.marks);
    printf("\nName:%s",data.name);
    printf("\nSize of union:%d",sizeof(data));
}
*/

/*Explanation:The difference in output for structure and union is because in structure each member gets some memory allocated but in case of union , 
only the member with highest size’s memory space becomes the commonly shared memory for all other members thus there is difference in outputs.
In union, each time we enter new data, the memory gets re-written.*/