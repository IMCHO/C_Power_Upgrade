#include <stdio.h>

int main(){
	int num;
	int ref;

	while(1){
		fputs("1 이상의 정수 입력 : ",stdout);
		ref=scanf("%d",&num);

		if(num<1){
			fputs("1 이상의 입력을 필요로 합니다. 다시 입력하세요.\n",stdout);
			continue;
		}
		else if(ref==EOF) {
			fputs("\nEOF 입력에 의해 프로그램을 종료합니다.\n",stdout);
			break;
		}
		else{
			printf("%d의 약수들\n",num);
			for(int i=1;i<=num;i++){
				if(num%i==0) printf("%d ",i);
			}
			fputs("\n",stdout);
		}
	}
	return 0;
}



