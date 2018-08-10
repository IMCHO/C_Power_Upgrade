#include <stdio.h>

int main(){
	float rad=3.14;
	float r;

	fputs("반지름 입력 : ",stdout);
	scanf("%f",&r);

	printf("원의 넓이 : %f\n",rad*r*r);

	return 0;
}
