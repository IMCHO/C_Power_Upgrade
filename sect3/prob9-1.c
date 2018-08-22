#include <stdio.h>

int main()
{
	int num=-1;
	int result=0;


	while(num<=0){
		fputs("1 이상의 정수 입력 : ",stdout);
		scanf("%d",&num);
		if(num<=0) fputs("1 이상의 정수를 입력해야 합니다.\n",stdout);
	}

	for(int i=1;i<=num;i++){
		result+=i;
	}
	printf("1부터 %d까지의 합은 %d.\n",num,result);

	return 0;
	
}

	
