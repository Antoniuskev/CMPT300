#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <pthread.h>


int main(){
    int sizeMatrix;
    printf("Input a number more than 2 but less than 10: \n");
    scanf("%d",&sizeMatrix);
    printf("Size Matrix is %d\n", sizeMatrix);

    //Making a random matrix using input from user
    int matrix[sizeMatrix][sizeMatrix];
    for(int i = 0; i < sizeMatrix; i++){
        for(int j = 0; j < sizeMatrix; j++){
            matrix[i][j] = rand() % 10;   
        }
    } 
    //print the matrix 
    for(int i = 0; i < sizeMatrix; i++){
        printf("\n");
        for(int j = 0; j < sizeMatrix; j++){
            printf("%d", matrix[i][j]);  
            printf(" "); 
        }
        printf("\n");
    } 

    return 0;
}

