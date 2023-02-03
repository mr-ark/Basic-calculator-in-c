#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num1,num2,choice,result;
	printf("Enter 2 numbers");
    scanf("%d%d",&num1,&num2);
    printf("1 for addition \n2 for subtraction \n3 for multiplication \n4for dividion \n         Enter your choice from above\n:");
    scanf("%d",&choice);
    if(choice==1){
        result=num1+num2;
    }else if(choice==2){
        result=num1-num2;
    }else if(choice==3){
        result=num1*num2;
    }else if(choice==4){
        result=num1/num2;
    }else{
        printf("Noting for you!");
    }
    printf("result=%d", result);
	return EXIT_SUCCESS;
}
