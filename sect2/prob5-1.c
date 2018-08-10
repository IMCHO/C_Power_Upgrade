#include <stdio.h>

int main(){
	float num1,num2;

	fputs("두 개의 실수 입력 : ",stdout);
	scanf("%f %f",&num1,&num2);

	printf("덧셈 결과 : %f\n",num1+num2);
	printf("뺄셈 결과 : %f\n",num1-num2);
	printf("곱셈 결과 : %f\n",num1*num2);
	printf("나눗셈 결과 : %f\n",num1/num2);

	return 0;
}
