#include <stdio.h>

void reajuste (float *salario){
	
	float aumento, total;
	int aliq;
	
	if(*salario>=0 && *salario<=400){
		aliq = 15;		
		
	}else if (*salario>400 && *salario<=800){
		aliq = 12;
		
	}else if (*salario>800&&*salario<=1200){
		aliq = 10;
		
	}else if (*salario>1200&&*salario<=2000){
		aliq = 7;
		
	}else if (*salario>2000){
		aliq = 4;
		
	}
	
	aumento = (*salario) * (float)aliq/100;
	total = aumento + (*salario);
	
	printf("Novo salario: %.2f\n",total);
	printf("Reajuste ganho: %.2f\n",aumento);
	printf("Em percentual: %d %%\n",aliq);
	
}
 
int main() {
 
 	float salario;
 	
 	scanf("%f",&salario);
 	
 	reajuste(&salario);
 
 
    return 0;
}
