#include <stdio.h>

int main(){

    int matrix[][4] = {{14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1}};
    int sum = 0;

    int num = matrix[3][1];
    printf("%d\n", num);

    int rowDimension = sizeof(matrix)/sizeof(matrix[0]);
    int columnDimension = sizeof(matrix[0])/sizeof(int);

    for(int i = 0; i < rowDimension; i++){
        for(int j = 0; j < columnDimension; j++){
            sum += matrix[i][j];
        }
    }

    printf("%i\n", sum);

    return 0;
}