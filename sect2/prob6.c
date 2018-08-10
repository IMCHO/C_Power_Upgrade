#include <stdio.h>

int main(){
	int num;
	int max;
	int min;
	int sum=0;

	for(int i=0;i<7;i++){
		fputs("정수형 데이터 입력 : ",stdout);
		scanf("%d",&num);
		if(i==0){
			max=num;
			min=num;
		}
		sum+=num;
		if(max<num) max=num;
		if(min>num) min=num;
	}

	printf("%d\n%d\n%d\n%f\n",max,min,sum,(float)sum/(float)7);

	return 0;
}
