#include <stdio.h>
#include <string.h>
#define TAM 11

void identifica (char palavra1[TAM], char palavra2[TAM], char palavra3[TAM]){
	
	char especie[TAM];
	
	if((strcmp(palavra1,"vertebrado"))==0){
		
		if((strcmp(palavra2,"ave"))==0){
			
			if((strcmp(palavra3,"carnivoro"))==0){		
				
				strcpy(especie,"aguia");
			
			}else if(strcmp(palavra3,"onivoro")==0){
				
				strcpy(especie,"pomba");
			}
			
		}else if(strcmp(palavra2,"mamifero")==0)
		
						if(strcmp(palavra3,"herbivoro")==0){		
				
				strcpy(especie,"vaca");
			
			}else if(strcmp(palavra3,"onivoro")==0){
				
				strcpy(especie,"homem");
			}
		
	}else if(strcmp(palavra1,"invertebrado")==0){
		
				if(strcmp(palavra2,"inseto")==0){
			
			if(strcmp(palavra3,"hematofago")==0){		
				
				strcpy(especie,"pulga");
			
			}else if(strcmp(palavra3,"herbivoro")==0){
				
				strcpy(especie,"lagarta");
			}
			
		}else if(strcmp(palavra2,"anelideo")==0)
		
						if(strcmp(palavra3,"onivoro")==0){		
				
				strcpy(especie,"minhoca");
			
			}else if(strcmp(palavra3,"hematofago")==0){
				
				strcpy(especie,"sanguessuga");
			}
		
	}
	printf("%s\n",especie);
	
}
 
int main() {
 
	char palavra01[TAM],palavra02[TAM],palavra03[TAM];
	int ret;
	gets(palavra01);
	gets(palavra02);
	gets(palavra03);
	
	identifica (palavra01, palavra02, palavra03);

    return 0;
}
