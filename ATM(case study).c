#include<stdio.h>
int main(){
int bi,cw,cd,cb, customer_choice,updated_balance, deposit_amount, amount;
printf("enter current balance(cb),customer choice(1 for bi,2 for cw,3 for cd):");
scanf("%d%d",&cb, &customer_choice);
if(customer_choice==1){
printf("current balance is %d",cb);
}else if(customer_choice==2){
     printf("Enter withdrawal amount: ");
     scanf("%d", &amount);
     if(amount<=cb){
     cb=cb-amount;
     printf("transaction successful, remaining balance is %d",cb);
     }else{
     printf("insufficient balance");
     }
}else if(customer_choice==3){
      printf("Enter deposit amount: ");
      scanf("%d", & deposit_amount); 
      updated_balance=cb+deposit_amount;
      printf("\nupdated balance=%d", updated_balance);
      printf("\ndeposit successful");
      }
else{
printf("invalid option");
}
return 0;
}