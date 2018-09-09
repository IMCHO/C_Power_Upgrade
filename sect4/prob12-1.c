#include <stdio.h>

int main()
{
	int check;
	int select;
	while(1){
		fputs("홀수 단(1), 짝수 단(2) : ",stdout);
	        scanf("%d",&check);

		if(check==1){
			select=1;
			break;	
		}
		else if(check==2){
			select=2;
			break;
		}
		else fputs("잘못된 입력입니다. 1또는 2만 입력하세요.\n",stdout);	
	}

	for(int i=select;i<=9;i+=2){
		for(int j=1;j<=9;j++){
			printf("%d x %d = %d\n",i,j,i*j);
		}
	}

	return 0;
}
