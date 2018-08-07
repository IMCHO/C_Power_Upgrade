#include <stdio.h>

int main(){
	char c;
	int count=0;

	while(1){
		fputs("Data input (Ctrl+Z to exit) : ",stdout);
		c=getchar();
		if(c==EOF){
			//printf("test");
		       	break;
		}
		//fflush(stdin);
		getchar();
		count++;
	}

	printf("\n입력된 문자의 수 : %d\n",count);

	return 0;
}
