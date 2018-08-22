#include <stdio.h>

int main()
{
	int num;
	int result1=0,result2=0;

	fputs("2 이상 입력 : ",stdout);
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		result1+=i;
		if(result1>num){
			printf("%d를 더할 때 처음 %d를 넘기 시작한다.\n",i,num);
			break;
		}
		result2=result1;
	}
	printf("%d를 넘기 이전의  합 : %d.\n",num,result2);
	printf("%d를 넘은 이후의  합 : %d.\n",num,result1);

	return 0;
	
}

	
