#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}

int CountDigit( int number, int digit ){
    int i=0;
    int a;
    if(number<0){
        number=-number;
    }else if(number==0){
        i=1;
    }
    while(number>=1){
        int a=number%10;
        if(a==digit){
            i++;
        }
        number/=10;
    }
    return i;
}
