#include<conio.h>
 int main() 
{
  float balance, amount;
  int choice;
  printf("Enter current balance:");
  scanf("%f", &balance);
  printf("Enter choice(1-balance Inquiry,2-withdrawal,3-deposit):");
  scanf("%d",&choice);
  if(choice == 1)
  {
  printf("\ncurrent balance:%.2f",balance);
  }
    else if (choice ==2)
    {
     printf("Enter withdrawal amount:");
     scanf("%f",&amount);
     if(amount <= balance)
     {
     balance=balance-amount;
     printf("\ntransaction successful");
     printf("\nremaining balance:%.2f",balance);
     }
     else
     {
     printf("\nInsufficient balance");
     }
    }
     else if (choice ==3)
     {
     printf("Enter deposit amount:");
     scanf("%f",&amount);
     balance =balance + amount ;
     printf("\ndeposit successful");
     printf("\nUpdated balance:%.2f",balance);
     }
     else
     {
     printf("\nInvalid option");
     }
}