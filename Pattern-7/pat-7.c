/*
  PATTERN-1
 
     *
    * *
   * * *
  * * * *
 * * * * *
*/
#include<stdio.h>
int main(){
	int i=5,j=5,k=0;
	for(i=1;i<=5;++i){
	  for(j=1;j<=9;++j){
		if(j>=6-i && j<=4+i){
			if(j%2!=0 && k==0){
				printf("*");
		       }
			else if(j%2==0 && k==1){
				   printf("*");	
			   }
			else{
					printf(" ");
			   }
			 }
		else{
				printf(" ");
			}
		}
		printf("\n");
		k=k==0?1:0;
	}
	return 0;
}

