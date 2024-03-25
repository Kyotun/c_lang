#include <stdio.h>

int getRowNumber();
int getColumnNumber();
int dimensionController(int *r, int *c);

void getArray2D(int r, int c, int arr[r][c]);
void printArray2D(int r, int c, int arr[r][c]);
void arraySubstract2D(int sequence, int r, int c, int arr_1[r][c], int arr_2[r][c], int arr_out[r][c]);
void arrayAdd2D(int r, int c, int arr_1[r][c], int arr_2[r][c], int arr_out[r][c]);

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
        int r, c;

        printf("\nNote that arrays should have the same number of rows and columns.\n");
        printf("Please give the information of the arrays:\n");
        r = getRowNumber();
        c = getColumnNumber();
        
        if(dimensionController(&r, &c) == 1){
            return 1;
        } else{
            
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
            printf("\nNow I can calculate the output array!\n");
            arrayAdd2D(r, c, arr_one, arr_two, arr_out);
            
            printf("The output array looks like this( hopefully :) ):\n");
            printArray2D(r, c, arr_out);
            printf("\n");
      }

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

int dimensionController(int *r, int *c){
  if( *r == 0 || *c == 0){
    printf("Please give a reasonable array size/format.\n");
    printf("Dimensions of arrays cannot be 0.\n");
    return 1;
  } else{
    printf("\nThank you for the reasonable dimension! There isn't none-existing dimension(0 dimension).\n");
    return 0;
  }
}


void getArray2D(int r, int c, int arr[r][c]){

  for(int i = 0; i<r; i++){
    for(int j = 0; j<c; j++){
      printf("Enter the row:%d | column:%d element:", i, j);
      scanf("%d", &arr[i][j]);
    }
  }
}

void printArray2D(int r, int c, int arr[r][c]){
  
  for(int i = 0; i<r; i++){
    for(int j = 0; j<c; j++){
      if(j < c-1){
        printf("%d ", arr[i][j]);
      } else{
        printf("%d\n", arr[i][j]);
      }
    }
  }
}

void arraySubstract2D(int sequence, int r, int c, int arr_1[r][c], int arr_2[r][c], int arr_out[r][c]){
  
  int value_1, value_2;

  for(int i = 0; i<r; i++){
    for(int j = 0; j<c; j++){
      value_1 = arr_1[i][j];
      value_2 = arr_2[i][j];
      if(sequence==1){
        arr_out[i][j] = value_2-value_1;
      } else {
        arr_out[i][j] = value_1-value_2;
      }
    }
  }
}

void arrayAdd2D(int r, int c, int arr_1[r][c], int arr_2[r][c], int arr_out[r][c]){
  int value_1, value_2, value_out, addition;

  for(int i = 0; i<r; i++){
    for(int j = 0; j<c; j++){
      value_1 = arr_1[i][j];
      value_2 = arr_2[i][j];
      addition = value_1+value_2;
      arr_out[i][j] = addition;
    }
  }
}