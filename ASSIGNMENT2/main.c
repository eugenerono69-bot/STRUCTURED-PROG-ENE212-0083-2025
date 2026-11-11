#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char correctUsername[] = "John";
    char userName[50];


    while (strcasecmp (userName, correctUsername)!=0){
        printf("Enter username: ");
        scanf("%49s", &userName);
        if (strcasecmp(userName, correctUsername) !=0 ){
            printf("INCORRECT USERNAME");
        }

    }
    char correctPin[] = "9999";
    char userPin[6];
    int pinMatched = 0;


    while (!pinMatched){
        printf("Enter your %lu-digit pin: ", (unsigned long)strlen(correctPin));
        scanf("%5s", userPin);

        if(strlen(userPin) != strlen(correctPin)){
            printf("Enter %lu digits!!!\n", (unsigned long)strlen(correctPin));
            continue;
        }
        if(strcmp(userPin, correctPin) == 0) {
            pinMatched = 1;
        }else{
        printf("Incorrect Pin\n");
        }
    }
        printf("\nGranted Access\n");
        printf("1. Open door\n");
        printf("2. Change username\n");
        printf("3. Change pin\n");
        printf("4. Exit\n");


    int choice;

    while(choice > 4 || choice < 1){
            printf("\nChoose one of these options : ...");
            scanf("%d", &choice);
    if(choice < 1 || choice > 4){
        printf("Invalid option!! Please select an option from the above list");
    }
}

    if (choice == 1){
        printf("Acces Granted! Door unlocked");
    }
    else if(choice == 2){
        printf("Change username feature coming soon");
    }
    else if(choice == 3){
        printf("Change pin feature coming soon");
    }
    else if(choice == 4){
        printf("Exiting system.....");
    }


    return 0;
}
