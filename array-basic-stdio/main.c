#include <stdio.h>

int main(void) {
    int r1, c1, r2, c2;

    printf("Please enter the number of rows of the first array:");
    scanf("%d", &r1);
    printf("Please enter the number of columns of the first array:");
    scanf("%d", &c1);

    printf("Please enter the number of rows of the second array:");
    scanf("%d", &r2);
    printf("Please enter the number of columns of the second array:");
    scanf("%d", &c2);

    int arr_one[r1][c1];
    
    return 0;
}