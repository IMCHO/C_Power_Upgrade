#include <stdio.h>
#include <stdlib.h>

int main(){
	int num;
	int arr[10]={0,};
	int index=0;

	scanf("%d",&num);
	
	while(num!=0){
		if(num%2==1) arr[index]=1;
		else arr[index]=0;
		num/=2;
		index++;
		if(index>9) {
			fputs("size error",stdout);
			exit(-1);
		}
	}

	index-=1;
	for(;0<=index;index--){
		printf("%d",arr[index]);
	}
	fputs("\n",stdout);
	return 0;
}



	
	
