#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char correctPin[] = "13671";
    char enteredPin[6];
    int pinMatched = 0;

    while (!pinMatched){
        printf("Enter your %lu-digit pin: ", (unsigned long)strlen(correctPin));
        scanf("%5s", enteredPin);

        if(strlen(enteredPin) != strlen(correctPin)){
            printf("Enter %lu digits!!!\n", (unsigned long)strlen(correctPin));
            continue;
        }
        if(strcmp(enteredPin, correctPin) == 0) {
            pinMatched = 1;
        }else{
        printf("Incorrect Pin\n");
        }
}
    double balance = 10564.36;
    double deposit, withdrawal;

    for(int count =0; count<10; count++){
    printf("1. Check balance");
    printf("\n2. Deposit");
    printf("\n3. Withdraw");
    printf("\n4. Exit\n");

    int choice;

    while(1){
    printf("\nChoose one: ");
    scanf("%d", &choice);

    if(choice<1 || choice>4){
        printf("Choose valid option!!!");
    }


    else if (choice==1){
        printf("Balance : $ %.2lf", balance);

    }else if(choice==2){
        printf("Enter amount to deposit: ");
        scanf("%lf", &deposit);
        balance = balance + deposit;
        printf("\nNew account balance: $ %.2lf", balance);

    }else if(choice==3){
        printf("Enter amount to withdraw: ");
        scanf("%lf", &withdrawal);
        for(int n=0; n<10; n++){

        if(withdrawal<balance){
        balance = balance - withdrawal;
        printf("\nNew account balance: $ %.2lf", balance);
        break;

        }else{
        while(withdrawal>balance){
        printf("Insufficient amount to withdraw: ");
        scanf("%lf", &withdrawal);
        printf("\nInsufficient amount in account!!!");
        }
    }
    }

    }else {
        printf("Ending session...");
        break;
    }
}
    return 0;
}
}
