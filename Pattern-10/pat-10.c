/*
  Floyd's triangle
  PATTERN
  1
  23
  456
  78910
*/

#include<stdio.h>
int main(){
	int i,j;
	int num=1;
	for(i=1;i<=5;++i){
		for(j=1;j<=5;++j){
			if(j<=i){
				printf("%d",num);
			     ++num;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
			
	}
	return 0;
}
