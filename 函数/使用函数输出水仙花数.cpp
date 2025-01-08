#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic( int number ){
    int gewei,shiwei,baiwei;
    int a,b;
    gewei=number%10;
    a=number/10;
    shiwei=a%10;
    b=a/10;
    baiwei=b%10;
    if(number==gewei*gewei*gewei+shiwei*shiwei*shiwei+baiwei*baiwei*baiwei){
        return 1;
    }else{
        return 0;
    }
}
void PrintN( int m, int n ){
    int i=m+1;
    while(i<n){
        if(narcissistic(i)==1){
            printf("%d\n",i);
        }
        i++;
    }
}



#include <stdio.h>
#include<math.h>
int narcissistic( int number );
void PrintN( int m, int n );
    
int main()
{
    int m, n;
  
    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
int narcissistic(int number) {
	int i = 0, sum = 0, k = number, count = 0;
	int a[10] = { 0 };//定义数组接收余数
	while (number) {
		a[i++] = number % 10;
		number /= 10;
		count++;//确定是几位数
	}
	for (i = 0; i < count; i++) {
		sum += pow(a[i],count);//count位数就取count次幂
	}
	if (sum == k)
		return 1;
	else
		return 0;
}
void PrintN(int m, int n) {
	int i;
	for (i = m+1 ; i < n; i++) { //开区间
		if (narcissistic(i)) {
			printf("%d\n", i);
		}
	}
}