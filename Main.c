#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1,num2,choice;
    float result;
	printf("Enter 2 numbers\n:");
    scanf("%d%d",&num1,&num2);
    printf("1 for addition \n2 for subtraction \n3 for multiplication \n4 for dividion \n\nEnter your choice from above\n:");
    scanf("%d",&choice);
    if(choice==1){
        result=num1+num2;
        printf("result=%f", result);
    }else if(choice==2){
        result=num1-num2;
        printf("result=%f", result);
    }else if(choice==3){
        result=num1*num2;
        printf("result=%f", result);
    }else if(choice==4){
        result=num1/num2;
        printf("result=%f", result);
    }else{
        printf("Noting for you!");
    }
	return EXIT_SUCCESS;
}
