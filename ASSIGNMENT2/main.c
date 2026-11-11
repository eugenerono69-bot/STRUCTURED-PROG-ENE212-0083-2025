#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 0;
    while(n <= 0 || n >50){
    printf("Enter number of students(Max: 50):");
    scanf("%d", &n);

    (n >= 1 && n <= 50)? printf("You can proceed to enter the student information\n") :printf("Enter valid number of students\n");
    }

    for(int count = 1; count <= n; count ++ ){

    printf("Enter details for student %d\n", count);

    int number;
    char name[50];

    printf("Enter your reg number:");
    scanf("%d", &number);

    printf("Enter your name:");
    scanf("%49s", name);

    char grade;

    int marks, v;
    while(1){
        printf("Enter marks: ");
        scanf("%d", &marks);
    if(marks> 100 || marks < 0){
        printf("Invalid marks!!!\n");
    }
    else{
        break;
    }
    }
    if(marks >= 70){
        grade = 'A';
    }
    else if(marks >= 60){
        grade = 'B';
    }
    else if(marks >=50){
        grade = 'C';
    }
    else if(marks >= 40){
        grade = 'D';
    }
    else {
        grade = 'F';
    }
    printf("\n______________________________________________");
    printf("\n              STUDENT INFORMATION             ");
    printf("\n______________________________________________");
    printf("\nRegistration no: %d",number);
    printf("\nName: %s", name);
    printf("\nMarks: %d", marks);
    printf("\nGrade: %c", grade);
    printf("\n______________________________________________\n");

}
    return 0;
}

