#include <stdio.h>

int main(){
	int num1,num2;
	printf("두 수를 16진수로 입력 : ");
	scanf("%x %x",&num1,&num2);

	printf("연산 결과 8진수 : %o\n",num1+num2);
	printf("연산 결과 10진수 : %d\n",num1+num2);
	printf("연산 결과 16진수 : %x\n",num1+num2);

	return 0;
}
