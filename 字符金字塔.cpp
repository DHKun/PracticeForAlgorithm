#include <stdio.h>

void CharPyramid( int n, char ch );

int main()
{    
    int n;
    char ch;

    scanf("%d %c", &n, &ch);
    CharPyramid(n, ch);
    
    return 0;
}

void CharPyramid( int n, char ch ){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=n;j>i;j--){
            printf(" ");       //先输出每行的空格数。
        }
        for(j=1;j<=i;j++){
            printf("%c ",ch); //再输出每行的字符数，注意引号里面的空格。
        }
        printf("\n");        //换行循环N次。
    }
}