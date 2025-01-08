#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    int number=rand()%100+1;
    int count=0;
    int a=0;
    do{
       scanf("%d",&a);
        if(a<0){
            printf("Game Over");
        }
        else if(a>number){
            printf("Too big");
        }else if(a<number){
            printf("Too small");
        }
        count++;
    }while(a!=number);
    if(count==1){
        printf("Bingo!");
    }else if(count<=3){
        printf("Lucky You!");
    }else if(count>3){
        printf("Good Guess!");
    }
}
