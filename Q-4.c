/*Create a structure to specify data of customers in a bank. The data to be stored is: 
Account number, Name, Balance in account. Assume maximum of 20 customers in the bank. 
Create a function to read all customers details and call it in main. Your program must be 
menu driven with following options
 1. Print the Account number and name and balance of each customer.
 2. Withdraw money
 3. Deposit money
 4. Search Customer*/
#include<stdio.h>
struct details
{
    int account;
    char name[100];
    int balance;
};
static struct details data[20];
int n;
void print(int account,int n)
{
    int i,a=1;
    printf("Account Number:%d\n",account);
    for(i=0;i<n;i++)
    {
        if (account==data[i].account)
        {
            printf("Customer Name:%s",data[i].name);
            printf("Balance:%d",data[i].balance);
            a=0;
        }
    }
    if (a!=0)
    {
        printf("\nRecord not found.\n");
    }
}
int withdraw(int account,int amount)
{
    int i,a=0;
    for(i=0;i<n;i++)
    {
        if (account==data[i].account)
        {
            if (data[i].balance<amount)
                printf("\nLow on funds.Transaction not possible\n");
            else
            {
                data[i].balance-=amount;
                a=data[i].balance;
            }
            break;
        }
    }
    return a;
}
int deposit(int account, int amount)
{
    int i,a=0;
    for(i=0;i<n;i++)
    {
        if (account==data[i].account)
        {
            data[i].balance+=amount;
            a=data[i].balance;
            break;
        }
    }
    return a;
}
void search(int account, int n)
{
    int i=0,pole=1;
    for(i=0;i<n;i++)
    {
        if (account==data[i].account)
        {
            printf("\nCustomer Found:)\n");
            pole=0;
        }
    }
    if (pole!=0)
    {
        printf("\nCustomer not Found:(\n");
    }
}
int main()
{
    int choice,flag=1,account,amount,i,hold;
    printf("Enter how many customer's data you wish to enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter customer account no.:");
        scanf("%d",&data[i].account);
        getchar();
        printf("Enter customer name:");
        fgets(data[i].name,100,stdin);
        printf("Enter customer balance:");
        scanf("%d",&data[i].balance);
    }
    while (flag!=0)
    {
        printf("1.Print all the details of customer:\n2.Withdraw Money\n3.Deposit Money\n4.Search Customer\n");
        scanf("%d",&choice);
        printf("Enter account number:");
        scanf("%d",&account);
        switch (choice)
        {
        case 1:
            print(account,n);
            break;
        case 2:
            printf("Enter amount: ");
            scanf("%d",&amount);
            hold=withdraw(account,amount);
            printf("\nThe amount has been debited successfully!\n");
            printf("\nNew Balance:%d",hold);
            break;
        case 3:
            printf("Enter amount: ");
            scanf("%d",&amount);
            hold=deposit(account,amount);
            printf("\nThe amount has been credited successfully!\n");
            printf("\nNew Balance:%d",hold);
            break;
        case 4:
            search(account,n);
            break;
        default:
            printf("Oops, you entered wrong number.");
        }
        printf("\nDo you wish to continue?If no then press 0 else press any key.\n");
        scanf("%d",&flag);
        if(flag==0)
            break;
    }
    printf("\nSuryansh Sirohi");
}