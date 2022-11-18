#include <stdio.h>
#include <math.h>
 void orndenar(double *num1, double *num2, double *num3, double *cateto1, double *cateto2, double *hip){
 	
 	if((*num1)<(*num2)){
 		if ((*num2<=*num3)){ 			
 			(*cateto1)=(*num1);
 			(*cateto2)=(*num2);
 			(*hip)=(*num3);
 			
		 }else if ((*num3<*num2)&&(*num3>=*num1)){
		 	(*cateto1)=(*num1);
 			(*cateto2)=(*num3);
 			(*hip)=(*num2);
 			
		 }else {
		 	(*cateto1)=(*num3);
 			(*cateto2)=(*num1);
 			(*hip)=(*num2);
		 }
	 } else if ((*num2)<(*num1)){
	 	if ((*num1<=*num3)){
	 		(*cateto1)=(*num2);
 			(*cateto2)=(*num1);
 			(*hip)=(*num3);
 			
		 }else if ((*num2<*num3)&&(*num1<=*num3)){
			(*cateto1)=(*num2);
 			(*cateto2)=(*num3);
 			(*hip)=(*num1);	
 			
		 }else {
		 	(*cateto1)=(*num3);
 			(*cateto2)=(*num2);
 			(*hip)=(*num1);	 			
 		}
	 	
	 } else if ((*num1==*num2)){
	 	if(*num3<*num1){
		 	(*cateto1)=(*num3);
		 	(*cateto2)=(*num1);
 			(*hip)=(*num2);
 			
		 } else {
		 	(*cateto1)=(*num1);
 			(*cateto2)=(*num2);
 			(*hip)=(*num3);
		 	
		 }
	 }
          
 }

void perimetro_triagulo (double *a, double *b, double *c,double *perimetro){
    
    (*perimetro)=(*a)+(*b)+(*c);
    printf("Perimetro = %.1lf\n",(*perimetro));
    	
    }
    
void area_trapezio (double *a, double *b, double *c,double *area){
	
	(*area)=(((*a)+(*b))*(*c))/2;
	printf("Area = %.1lf\n",(*area));
	
}
 
int main() {
 
    double a,b,c;
    double perimetro, area;
    double cateto1,cateto2,hip;
    

    
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    
   	double num1 = a,num2 = b,num3 =c;    
    orndenar(&num1, &num2, &num3, &cateto1, &cateto2, &hip);
    
    printf("%.1lf\n",pow(hip,2));
    printf("%.1lf\n",pow(cateto1,2)+pow(cateto2,2));
    
    
    if(pow(hip,2)==(pow(cateto1,2)+pow(cateto2,2))){
    	perimetro_triagulo (&a, &b, &c, &perimetro);
	}else {
		area_trapezio (&a, &b, &c, &area);	
	}
	   
 
    return 0;
}
