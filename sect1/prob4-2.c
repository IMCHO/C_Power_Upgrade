#include <stdio.h>

int main(){
	int num;
	int sum=0;
	int check;

	while(1){
		fputs("Data input (Ctrl+Z to exit) : ",stdout);
		
		check=scanf("%d",&num);
		if(check==EOF){
			//printf("test");
		       	break;
		}
		sum+=num;		
	}

	printf("\n총 합 : %d\n",sum);

	return 0;
}
