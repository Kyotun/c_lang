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

    return 0;
}