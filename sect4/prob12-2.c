#include <stdio.h>

int main(){
	int num;
	int temp;

	fputs("정수 입력 : ",stdout);
	scanf("%d",&num);

	temp=num;
	for(int i=0;i<=100;i++){
		temp+=i;
		for(int j=1;j<=100;j++){
			if(temp%j==0&&temp/j<=100){
				printf("%d x %d - %d = %d\n",temp/j,j,i,num);
			}
			else{
				continue;
			}
		}
		temp=num;
	}
}


