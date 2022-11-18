#include <stdio.h>
 
 
 void calcula_tempo (int *hora_ini, int *minuto_ini, int *hora_fin, int *minuto_fin, int *duracao_h, int *duracao_m){
 	
 	if(*hora_ini<*hora_fin){
 		if(*minuto_ini<*minuto_fin){
 			*duracao_h = *hora_fin - *hora_ini; 
 			*duracao_m = *minuto_fin - *minuto_ini;
 			
		 }else if(*minuto_ini>*minuto_fin){
		 	*duracao_h = (*hora_fin - 1) - *hora_ini; 
 			*duracao_m = (*minuto_fin + 60) - *minuto_ini;
 			
		 	
		 }else{
		 	*duracao_h = *hora_fin - *hora_ini; 
 			*duracao_m = 0;
		 }
	 }else if (*hora_ini>*hora_fin){
	 	if(*minuto_ini<*minuto_fin){
 			*duracao_h = (*hora_fin + 24) - *hora_ini; 
 			*duracao_m = *minuto_fin - *minuto_ini;
 			
		 }else if(*minuto_ini>*minuto_fin){
		 	*duracao_h = (*hora_fin + 23) - *hora_ini;  
 			*duracao_m = (*minuto_fin + 60) - *minuto_ini;
		 	
		 }else{
		 	*duracao_h = *hora_fin - *hora_ini; 
 			*duracao_m = 0;
		 }
	 	
	 }else{
	 	if(*minuto_ini<*minuto_fin){
 			*duracao_h = 0; 
 			*duracao_m = *minuto_fin - *minuto_ini;
 			
		 }else if(*minuto_ini>*minuto_fin){
		 	*duracao_h = 23;  
 			*duracao_m = (*minuto_fin + 60) - *minuto_ini;
		 	
		 }else{
		 	*duracao_h = 24; 
 			*duracao_m = 0;
		 }
	 }
	 if(*duracao_m>=60){
	 	*duracao_h = *duracao_h +1;
	 	*duracao_m = *duracao_m -60;	 	
	 }
	 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",*duracao_h,*duracao_m);
 }
 
 
 
int main() {
 
 int hora_ini, minuto_ini, hora_fin, minuto_fin,duracao_h,duracao_m;
 
 scanf("%d",&hora_ini);
 scanf("%d",&minuto_ini);
 scanf("%d",&hora_fin);
 scanf("%d",&minuto_fin);
 
 calcula_tempo(&hora_ini, &minuto_ini, &hora_fin, &minuto_fin, &duracao_h, &duracao_m);
 
 
 
    return 0;
}
