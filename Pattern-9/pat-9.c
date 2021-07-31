/*
  PATTERN
  A
  BB
  CCC
  DDDD
  EEEEE
*/

#include<stdio.h>
int main(){
	int i,j;
	char let=65;
	for(i=1;i<=5;++i){
		for(j=1;j<=5;++j){
			if(j<=i){
				printf("%c",let);
			
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
			++let;
	}
	return 0;
}
