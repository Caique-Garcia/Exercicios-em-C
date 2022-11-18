#include <stdio.h>
 
 void orndenar(int *num1,int *num2,int *num3, int *primeiro, int *segundo, int *terceiro){
 	
 	if((*num1)<(*num2)){
 		if ((*num2<=*num3)){ 			
 			(*primeiro)=(*num1);
 			(*segundo)=(*num2);
 			(*terceiro)=(*num3);
 			
		 }else if ((*num3<*num2)&&(*num3>=*num1)){
		 	(*primeiro)=(*num1);
 			(*segundo)=(*num3);
 			(*terceiro)=(*num2);
 			
		 }else {
		 	(*primeiro)=(*num3);
 			(*segundo)=(*num1);
 			(*terceiro)=(*num2);
		 }
	 } else if ((*num2)<(*num1)){
	 	if ((*num1<=*num3)){
	 		(*primeiro)=(*num2);
 			(*segundo)=(*num1);
 			(*terceiro)=(*num3);
 			
		 }else if ((*num2<*num3)&&(*num1<=*num3)){
			(*primeiro)=(*num2);
 			(*segundo)=(*num3);
 			(*terceiro)=(*num1);	
 			
		 }else {
		 	(*primeiro)=(*num3);
 			(*segundo)=(*num2);
 			(*terceiro)=(*num1);	 			
 		}
	 	
	 } else if ((*num1==*num2)){
	 	if(*num3<*num1){
		 	(*primeiro)=(*num3);
		 	(*segundo)=(*num1);
 			(*terceiro)=(*num2);
 			
		 } else {
		 	(*primeiro)=(*num1);
 			(*segundo)=(*num2);
 			(*terceiro)=(*num3);
		 	
		 }
	 }
          
 }
 
 void mostrar (int *num1,int *num2,int *num3, int *primeiro, int *segundo, int *terceiro){
 	
  			printf("%d\n",(*primeiro));
 			printf("%d\n",(*segundo));
 			printf("%d\n",(*terceiro));
 			
 			printf("\n");
 			
 			printf("%d\n",(*num1));
 			printf("%d\n",(*num2));
 			printf("%d\n",(*num3));
 }
 
 
int main() {
	int num1,num2,num3;
	int primeiro, segundo, terceiro;
	
	
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	
	orndenar(&num1,&num2,&num3,&primeiro,&segundo,&terceiro);
	mostrar(&num1,&num2,&num3,&primeiro,&segundo,&terceiro);	
 
    return 0;
}
