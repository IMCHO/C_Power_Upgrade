#include <stdio.h>

int main(){

	int arr[5]={0,};
	int temp;

	for(int i=1;i<=5;i++){
		printf("숫자 %d 입력 : ",i);
		scanf("%d",&arr[i-1]);
	}

	for(int i=4;i>=1;i--){
		for(int j=0;j<i;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}
	}

	fputs("정렬된 출력 : ",stdout);
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	fputs("\n",stdout);
	return 0;
}
