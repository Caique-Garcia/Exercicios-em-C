#include <stdio.h>
 
int main() {
 
    int cod,quantidade;
    float total,preco;
    scanf("%d",&cod);
    scanf("%d",&quantidade);
 
 switch(cod){
     case 1:
      preco = 4.00;
        break;
     case 2:
      preco = 4.50;
        break;
     case 3:
      preco = 5.00;
        break;
     case 4:
      preco = 2.00;
        break;
     case 5:
      preco = 5.00;
        break;
    }
 total = (float)quantidade * preco;
 printf("Total: R$ %.2f\n",total);
    return 0;
}
