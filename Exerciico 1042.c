#include <stdio.h>
 
 void orndenar(int *num1,int *num2,int *num3){
 	
 	if((*num1)<(*num2)){
 		if ((*num2<=*num3)){ 			
 			printf("%d\n",(*num1));
 			printf("%d\n",(*num2));
 			printf("%d\n",(*num3));
 			
		 }else if ((*num3<*num2)&&(*num3>=*num1)){
		 	printf("%d\n",(*num1));
 			printf("%d\n",(*num3));
 			printf("%d\n",(*num2));
 			
		 }else {
		 	printf("%d\n",(*num3));
 			printf("%d\n",(*num1));
 			printf("%d\n",(*num2));
		 }
	 } else if ((*num2)<(*num1)){
	 	if ((*num1<=*num3)){
	 		printf("%d\n",(*num2));
 			printf("%d\n",(*num1));
 			printf("%d\n",(*num3));
 			
		 }else if ((*num2<*num3)&&(*num1<=*num3)){
			printf("%d\n",(*num2));
 			printf("%d\n",(*num3));
 			printf("%d\n",(*num1));	
 			
		 }else {
		 	printf("%d\n",(*num3));
 			printf("%d\n",(*num2));
 			printf("%d\n",(*num1));	 			
 		}
	 	
	 } else if ((*num1==*num2)){
	 	if(*num3<*num1){
		 	printf("%d\n",(*num3));
		 	printf("%d\n",(*num1));
 			printf("%d\n",(*num2));
 			
		 } else {
		 	printf("%d\n",(*num1));
 			printf("%d\n",(*num2));
 			printf("%d\n",(*num3));
		 	
		 }
	 }
          
 }
 
 void mostrar (int *num1,int *num2,int *num3){
 	
  			printf("%d\n",(*num1));
 			printf("%d\n",(*num2));
 			printf("%d\n",(*num3));
 }
 
int main() {
	int num1,num2,num3;
	
	
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
	orndenar(&num1,&num2,&num3);
	printf("\n");
	mostrar(&num1,&num2,&num3);	
 
    return 0;
}
