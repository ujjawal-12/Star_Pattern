/*
  PATTERN-1
  1
  12
  123
  1234
  12345
  */
#include<stdio.h>
int main(){
	int i=5,j=5;
	for(i=1;i<=5;++i){
		for(j=1;j<=5;++j){
			if(j<=i){
				printf("%d",j);
			}
			else{
				printf("");
			}
		}
		printf("\n");
	}
	return 0;
}
