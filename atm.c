// create atm machine that includes balance,withdrawl,deposit,exit
#include<stdio.h>
int main(){
    float withdrawl,deposit,total=50000;
    int ch;
    printf("Menu(ATM Machine):\n1.Balance\n2.Withdrawl\n3.Deposit\n4.Exit\nEnter choice:\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
            printf("The balance remaining is: %.2f",total);
            break;
        case 2:
            printf("Enter the withdrawl Amount:");
            scanf("%f",&withdrawl);
            if(withdrawl < total){
                printf("amount Withdrawn\n");
                printf("Remaining amount is %.2f",total - withdrawl);
            }else{
                printf("Insufficient Amount!");
            }
            break;
        case 3:
            printf("enter deposit amount: \n");
            scanf("%f",&deposit);
            if(deposit > 15000){
                printf("Enter valid amount!\n");
            }
            else{
                printf("Amount deposited\n");
            }
            printf("Remaining Amount:%.2f",total + deposit);
            break;
        case 4:
            printf("Exiting....");
            break;
    }
    return 0;
}