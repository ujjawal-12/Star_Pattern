/*
 pyramid pattern
      1
    3 2 1 
  5 4 3 2 1
7 6 5 4 3 2 1
      
 */
 #include<stdio.h>
 int main(){
 	int row,i,j,k,l,a=1,b;
 	printf("enter the no of row\n");
 	scanf("%d",&row);
 	for(i=1;i<=row;++i){
 	   for(j=1;j<=row-i;++j){
 	   	printf(" ");
		}	
		b=a;
		for(l=1;l<=a;l++){
			
			printf("%d",b);
		    --b;
		}
			a+=2;
			
		printf("\n");
 	}
 	return 0;
 }
