/*Write a program to add two distances in inch-feet using structure. The values of the 
distances is to be taken from the user.*/
#include<stdio.h>
struct converter
{
    int feet;
    float inches;
};
int main()
{
    struct converter d1,d2,sum;
    printf("Enter Feet of d1:");
    scanf("%d",&d1.feet);
    printf("Enter inches of d1:");
    scanf("%f",&d1.inches);
    printf("Enter Feet of d2:");
    scanf("%d",&d2.feet);
    printf("Enter inches of d2:");
    scanf("%f",&d2.inches);
    sum.feet=d1.feet+d2.feet;
    sum.inches=d1.inches+d2.inches;
    if (sum.inches>=12.0)
    {
        sum.inches-=12.0;
        sum.feet++;
    }
    printf("The sum of distance is:%d feet and %0.2f inches",sum.feet,sum.inches);
    printf("\nSuryansh Sirohi");
}