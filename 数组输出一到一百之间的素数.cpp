#include<stdio.h>
#define SIZE 10
void sushu(int array[SIZE][SIZE]);
int main(){
    int numbers[SIZE][SIZE];
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            numbers[i][j]=i*SIZE+j+1;
            }
    }
    sushu(numbers);
    printf("1 2 3 5 7 ");
    for (int i=0;i<SIZE;i++) {
        for (int j=0;j<SIZE;j++) {
            if (numbers[i][j]<=100 && numbers[i][j]!=0 &&numbers[i][j]!=1) {
                printf("%d ",numbers[i][j]);
            }
        }
    }
    return 0;
}
void sushu(int array[SIZE][SIZE]) {
    for (int i=2;i<=10;i++) {
        for (int j=0; j<SIZE;j++) {
            for (int k=0;k<SIZE;k++) {
                if (array[j][k]%i==0) {
                    array[j][k]=0;
                }
            }
        }
    }
}