#include <stdio.h>

int main()
{
	int num;
	int result1=0,result2=0;

	fputs("자연수 입력 : ",stdout);
	scanf("%d",&num);

	for(int i=1;i<=num;i++){
		if(!(i%2)){
			result1+=i;
		}
		else{
			result2+=i;
		}
	}
	printf("%d 이하 홀수 합 : %d.\n",num,result2);
	printf("%d 이하 짝수 합 : %d.\n",num,result1);

	return 0;
	
}

	
