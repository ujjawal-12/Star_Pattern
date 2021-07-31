/*
 pyramid pattern
      1
    2 3 2 
  3 4 5 4 3 
4 5 6 7 6 5 4
      
 */
 
 #include<stdio.h>
 int main(){
 	int row,i,j,k,l,m;
 	printf("enter the no of row\n");
 	scanf("%d",&row);
 	for(i=1;i<row;++i){
 		for(j=1;j<=row-i;++j){
 			printf(" ");
		 }
		k=i;
		for(l=1;l<=i;++l){
			printf("%d",k++);
		}
		k-=2;
		for(m=1;m<i;++m){
			printf("%d",k++);
		}
		 printf("\n");
	 }
	return 0;
 }
