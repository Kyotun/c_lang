#include <stdio.h>

int main(void) {
    // rows-> 0,1,2,3 | columns -> 0,1,2
    int r1,c1 = 0;
    int arr_1[4][3] = {{1,2,3},{4,5,6},{7,8,9},{1,2,3}};

    // rows-> 0,1,2 | columns -> 0,1,2,3,4
    int r2,c2 = 0;
    int arr_2[3][5] = {{1,2,3,4,3},{4,3,2,1,1},{2,2,2,2,2}};

    printf("Please enter the number of rows of the first array:");
    scanf("%d", &r1);
    printf("Please enter the number of columns of the first array:");
    scanf("%d", &c1);

    printf("Please enter the number of rows of the second array:");
    scanf("%d", &r2);
    printf("Please enter the number of columns of the second array:");
    scanf("%d", &c2);

    int r3,c3, value_1, value_2, value_out, multiplication = 0;
    int arr_out[4][5];

    for(int i; i<r1-1; i++){
        for(int j; j<c2-1; j++){
            for(int k; k<c1-1; k++){
            value_1 = arr_1[i][k];
            value_2 = arr_2[k][j];
            multiplication = value_1*value_2;
            value_out = multiplication + value_out; 
            }
            arr_out[i][j] = value_out;
        }
    }

    int out = 0;
    for(int a; a<4; a++){
        for(int b; b<5; b++){
        out = arr_out[a][b];
        printf("%d", out);
        }
    }

    return 0;
}