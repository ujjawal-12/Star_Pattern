/*
  PATTERN-1
  *****
   ****
    *** 
     **
      *
  */
#include<stdio.h>
int main(){
	int i=5,j=5;
	for(i=1;i<=5;++i){
		for(j=1;j<=5;++j){
			if(j>=i){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
