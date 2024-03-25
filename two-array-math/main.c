#include <stdio.h>

int getRowNumber();
int getColumnNumber();

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
            int r, c;

            printf("Please give the information of the arrays:\n");
            r = getRowNumber();
            c = getColumnNumber();
            
            if(dimensionController(&r, &c) == 1){
                return 1;
            } else {
                int sequence;
                int arr_one[r][c];
                int arr_two[r][c];
                int arr_out[r][c];

                printf("\nNow you have to enter the elements of the first array.\nBe ready!\n");
                getArray2D(r, c, arr_one);
            
                printf("Thank you for the first array. The first array looks like this(hopefully):\n");
                printArray2D(r, c, arr_one);

                printf("\nNow it is time for the second array.\nBe ready!\n");
                getArray2D(r, c, arr_two);
            
                printf("Thank you for the second array too. The second one looks like this(hopefully):\n");
                printArray2D(r, c, arr_two);

                printf("\nYou created the arrays. Thank you for the inputs.\n");
                printf("Which array should be substracted from the other:\n");
                printf("1 or 2?:");
                scanf("%d", &sequence);
                
                printf("\nNow I can calculate the output array!\n");
                arraySubstract2D(sequence, r, c, arr_one, arr_two, arr_out);
                
                printf("And the output array looks like this( hopefully :) ):\n");
                printArray2D(r, c, arr_out);
                printf("\n");
            }

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
    }

    return 0;
}

int getRowNumber(){
  int r;
  printf("Please enter the number of rows:");
  scanf("%d", &r);
  return r;
}

int getColumnNumber(){
  int c;
  printf("Please enter the number of column:");
  scanf("%d", &c);
  return c;
}