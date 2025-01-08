#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

// void hollowPyramid ( int n )
// {
//     int i,j,k,z;
//     for(i=1;i<=n;i++)
//     {
//         for(j=n-i;j>0;j--)
//         {
//             printf(" ");
//         }
//         printf("%d",i);
//         if(i==1) printf("\n");
//         if(i>=2&&i<n)
//         {
//             for(k=0;k<2*i-3;k++)
//             {
//                 printf(" ");
//             }
//             printf("%d\n",i);
//         }
//     }
//     i=i-1;
//     if(i==n)
//     {
//         for(z=0;z<2*n-2;z++)
//         {
//             printf("%d",i);
//         }
//     }
//     return;
// }
void hollowPyramid( int n )
{
	int i,j;
	for(i=1;i<=n;i++){
		for(j=0;j<n-i;j++){
            printf(" ");
        }
		for(j=0;j<2*i-1;j++){
			if(j==0||n==i||j==2*i-2)
			printf("%d",i);
			else
			printf(" ");
		} 
		printf("\n");
	}
}