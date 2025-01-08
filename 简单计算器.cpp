#include<stdio.h>
int main()
{
	char opter='0';
	int sum, i,flag=0;
	scanf("%d", &sum);
	while (opter != '=')
	{
		scanf("%c", &opter);
		if (opter == '=')
			break;
		scanf("%d", &i);
		switch (opter)
		{
		case '+':sum = sum + i; break;
		case '-':sum = sum - i; break;
		case '*':sum = sum * i; break;
		case '/':if (i == 0) flag = -1; else sum = sum / i; break;
		default:flag = -1; break;
		}
	}
	if (flag == -1)
		printf("ERROR");
	else
	printf("%d", sum);
	return 0;
}



#include<stdio.h>
int main() {
    int result;
    scanf("%d", &result);
    int flag = 1;
    char operator;
    while ((operator = (char) getchar()) != '=') {
        int number;
        scanf("%d", &number);
        switch (operator) {
            case '+':result += number;break;
            case '-':result -= number;break;
            case '*':result *= number;break;
            case '/':if (number == 0) {
                    flag = 0;
                } else {
                    result /= number;
                }
                break;
            default:
                flag = 0;
        }
    }
    if (flag == 0) {
        printf("ERROR");
    } else {
        printf("%d", result);
    }
return 0;
}

