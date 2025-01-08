#include <stdio.h>
int main()
{ 
    int i,j,n;
    scanf("%d",&n);
    int k=(n+1)/2;
    for(i=1;i<=k;i++){
        for(j=1;j<=n-2*i+1;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-k;i>=1;i--){
        for(j=1;j<=n-2*i+1;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
