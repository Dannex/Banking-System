#include <stdio.h>
#include<stdlib.h>
int main()
{
    int id;
    int depo;
    int with;
    int acc,acc2;
    int pin;
    char ans1,ans2,ans3,ans4;
    int mony=0;
    int chos,trans;
    char name [20];
    char bank;
    char bank2 [20];
    char bank3 [20];
    system ("COLOR 5C");
    printf("\t\tWelcome to DANNEX ONLINE BANKING SYSTEM. \nThis is a system that will enable you to gain acces to your bank account and do any transaction that you need to do while sitting at your home. \nHope you enjoy the services that you get here and thanks in advance\n\n");
  printf("Enter your name\n");
  scanf("%s",&name);
  printf("enter your ID number\n");
  scanf("%d",&id);
  printf("do you have a bank account? (y/n)\n\n");
  scanf("%s",&ans1);
  system("color 9E");
  if(ans1=='y')
  {
      printf("choose your bank from the list below:\n(/*Enter the number not the name*\)\n\n1. Equity \t2. Standard\n3. Family\t4. National\n5. Baclays\t6. Co-operative\n7. Faulu\t8. KCB\n");
      scanf("%s",&bank);
      if (bank=='1')
            bank3[20]="Equity";
          else if (bank=='2')
            bank3[20]="Standard";
           else if (bank=='3')
            bank3[20]="Family";
          else if (bank=='4')
            bank3[20]="National";
          else if (bank=='5')
            bank3[20]="Baclays";
          else if (bank=='6')
            bank3[20]="Co-operatives";
          else if (bank=='7')
            bank3[20]="Faulu";
          else if (bank=='8')
            bank3[20]="KCB";
          else
            printf("You entered the wrong choice");

      printf("Enter your your Account Number:\n");
      scanf("%d",&acc);
      printf("Enter your PIN\n");
      scanf("%d",&pin);
      printf("Which transaction do you want to perform (Enter the number for which transaction you want to make)\n 1) Deposit Cash \t 2) Withdraw Cash\t3) Transfer Cash\t4) Check Balance\n");
      scanf("%d",&chos);
      system("color 9");
      if (chos==1)
      {
          printf("How much money do you want to deposit to your account?\n");
          scanf("%d",&depo);
          mony +=depo;
          printf("You have successfully deposited sh%d to your %s account your new balance is sh%d\n\n",depo,bank3[20],mony);
          printf("Do you want to perform any other transaction?(y/n)\n");
          scanf("%s",&ans3);
          if (ans3=='y')
          {
              printf("Which transaction do you want to perform (Enter the number for which transaction you want to make)\n 1) Deposit Cash \t 2) Withdraw Cash\t3) Transfer Money\t4) Check Balance\n");
              scanf("%d",&chos);
              if (chos==2)
              {
                  printf("How much money do want to withdraw?\nsh");
                    scanf("%d",&with);
                    if(with<=mony)
                    {
                        mony -=with;
                            printf("You have successfully withdrawn sh%d from your account.\nYour new balance is sh%d",with,mony);
                    }
                    else
                            printf("you don't have enough money to withdraw sh%d from your account. Your balance is sh%d",with,mony);
              }
              else if (chos==3)
              {
                  printf("Enter the account number you wish to transfer money to:\n");
                        scanf("%d",&acc2);
                        printf("Enter the Name of the bank:\n");
                        scanf("%s",&bank2);
                        printf("Enter the amount of money you wish to transfer:\n");
                        scanf("%d",&trans);
                        if (trans<=mony)
                        {
                            mony -=trans;
                                printf("Your have successfully transfered sh%d to account number %d of %s Bank.\nYour new balance is sh%d",trans,acc2,bank2,mony);
                        }
                        else
                            printf("You don't have enough money to make the transfer. Your balance is sh%d",mony);
              }
              else if (chos==4)
              {
                  printf("Your Balance is sh%d",mony);
              }
          }
          else
                printf("Thank you for using our service. Have a blessed moment");
      }
      else if (chos==2)
              {
                  printf("How much money do want to withdraw?\nsh");
                    scanf("%d",&with);
                    if(with<=mony)
                    {
                        mony -=with;
                            printf("You have successfully withdrawn sh%d from your account.\nYour new balance is sh%d",with,mony);
                    }
                    else
                            printf("you don't have enough money to withdraw sh%d from your account. Your balance is sh%d",with,mony);
              }
              else if (chos==3)
              {
                  printf("Enter the account number you wish to transfer money to:\n");
                        scanf("%d",&acc2);
                        printf("Enter the Name of the bank:\n");
                        scanf("%s",&bank2);
                        printf("Enter the amount of money you wish to transfer:\n");
                        scanf("%d",&trans);
                        if (trans<=mony)
                        {
                            mony -=trans;
                                printf("Your have successfully transfered sh%d to account number %d of %s Bank.\nYour new balance is sh%d",trans,acc2,bank2,mony);
                        }
                        else
                            printf("You don't have enough money to make the transfer. Your balance is sh%d",mony);
              }
              else
              {
                  printf("Your Balance is sh%d",mony);
              }
  }
  if (ans1=='n')
  {
      printf("Do you wish to create and account?\n\t(Type y for YES or n for NO)\n");
      scanf("%s",&ans3);
      if(ans3=='y')
      {
          printf("choose your bank from the list below:\n1. Equity \t2. Standard\n3. Family\t4. National\n5. Baclays\t6. Co-operative\n7. Faulu\t8. KCB\n");
      scanf("%s",&bank);
      printf("Enter your pin number\n");
      scanf("%d",&pin);
      printf("You have successfully created an account in %s Bank your account number is 1234567890 and your pin is %d. \nRemember to keep your pin as a secret to ensure safety of your money from unauthorised people\nDo you wish to make any other transaction?\n",bank3,pin);
      scanf("%s",&ans4);
      if (ans4=='y')
      {
              printf("Which transaction do you want to perform (Enter the number for which transaction you want to make)\n 1) Deposit Cash \t 2) Withdraw Cash\t3) Transfer Cash\t4) Check Balance\n");
      scanf("%d",&chos);
      if (chos==1)
      {
          printf("How much money do you want to deposit to your account?\n");
          scanf("%d",&depo);
          mony +=depo;
          printf("You have successfully deposited sh%d to your %s account your new balance is sh%d\n\n",depo,bank3,mony);
          printf("Do you want to perform any other transaction?(y/n)\n");
          scanf("%s",&ans3);
          if (ans3=='y')
          {
              printf("Which transaction do you want to perform (Enter the number for which transaction you want to make)\n 1) Deposit Cash \t 2) Withdraw Cash\t3) Transfer Money\t4) Check Balance\n");
              scanf("%d",&chos);
              if (chos==2)
              {
                  printf("How much money do want to withdraw?\nsh");
                    scanf("%d",&with);
                    if(with<=mony)
                    {
                        mony -=with;
                            printf("You have successfully withdrawn sh%d from your account.\nYour new balance is sh%d",with,mony);
                    }
                    else
                            printf("you don't have enough money to withdraw sh%d from your account. Your balance is sh%d",with,mony);
              }
              else if (chos==3)
              {
                  printf("Enter the account number you wish to transfer money to:\n");
                        scanf("%d",&acc2);
                        printf("Enter the Name of the bank:\n");
                        scanf("%s",&bank2);
                        printf("Enter the amount of money you wish to transfer:\n");
                        scanf("%d",&trans);
                        if (trans<=mony)
                        {
                            mony -=trans;
                                printf("Your have successfully transfered sh%d to account number %d of %s Bank.\nYour new balance is sh%d",trans,acc2,bank2,mony);
                        }
                        else
                            printf("You don't have enough money to make the transfer. Your balance is sh%d",mony);
              }
              else if (chos==4)
              {
                  printf("Your Balance is sh%d",mony);
              }
          }
          else
                printf("Thank you for using our service. Have a blessed moment");
      }
      else if (chos==2)
              {
                  printf("How much money do want to withdraw?\nsh");
                    scanf("%d",&with);
                    if(with<=mony)
                    {
                        mony -=with;
                            printf("You have successfully withdrawn sh%d from your account.\nYour new balance is sh%d",with,mony);
                    }
                    else
                            printf("you don't have enough money to withdraw sh%d from your account. Your balance is sh%d",with,mony);
              }
              else if (chos==3)
              {
                  printf("Enter the account number you wish to transfer money to:\n");
                        scanf("%d",&acc2);
                        printf("Enter the Name of the bank:\n");
                        scanf("%s",&bank2);
                        printf("Enter the amount of money you wish to transfer:\n");
                        scanf("%d",&trans);
                        if (trans<=mony)
                        {
                            mony -=trans;
                                printf("Your have successfully transfered sh%d to account number %d of %s Bank.\nYour new balance is sh%d",trans,acc2,bank2,mony);
                        }
                        else
                            printf("You don't have enough money to make the transfer. Your balance is sh%d",mony);
              }
              else
              {
                  printf("Your Balance is sh%d",mony);
              }
    }

      else
        printf("\n\nThank you for using this system");
      }
      else
        printf("\n\nThank you for using this system. Hope you loved our services.");
  }
  return 0;
}
