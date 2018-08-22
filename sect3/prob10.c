#include <stdio.h>

int main(){
	int num1,num2;
	int result=0;

	fputs("두 개의 정수 입력 : ",stdout);
	scanf("%d %d",&num1,&num2);

	for(int i=((num1>num2)?num2:num1);i<=((num1>num2)?num1:num2);i++){
		if(i%3==0 || i%5==0){
			printf("%d는 합에서 제외.\n",i);
			continue;
		}
		result+=i;
	}

	printf("%d과 %d을 포함하여 그 사이에 있는 정수들의 합 : %d\n",num1,num2,result);

	return 0;
}
