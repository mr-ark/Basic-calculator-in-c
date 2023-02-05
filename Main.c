#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1,num2,choice;
    float result;
	printf("Enter 2 numbers\n:");
    scanf("%d%d",&num1,&num2);
    printf("1 for addition \n2 for subtraction \n3 for multiplication \n4 for dividion\n5 for exit\n\nEnter your choice from above\n:");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        result=num1+num2;
        printf("result=%f", result);
        break;
    case 2:
        result=num1-num2;
        printf("result=%f", result);
        break;
    case 3:
        result=num1*num2;
        printf("result=%f", result);
        break;
    case 4:
        result=num1/num2;
        printf("result=%f", result);
        break;
    case 5:
           return EXIT_SUCCESS;
           break;
    default:
        printf("Noting for you!");
    }
}
