#include <stdio.h>

int main(void) {

    int request = 0;
    
    while (request != 100){

        request = 0;
        printf("Options:\n");
        printf("0: Array multiplication.\n");
        printf("1: Array substraction.\n");
        printf("2: Array addition.\n");
        printf("3: Array transposing.\n");
        printf("100: Exit.\n");
        printf("Please choose an option:");
        scanf("%d", &request);

        if(request == 0){ //Multiplication
            return 0;

        } else if(request == 1){ //Substraction
            return 0;

        } else if(request == 2){ //Addition
            return 0;

        } else if(request == 3){ //Transpose
            return 0;

        } else if(request == 100){
            printf("See you later!");
            break;

        } else {
            printf("You entered something else.");
            printf("Try again.");
            return 1;
        }

    return 0;
}