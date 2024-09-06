#include <stdio.h>
#include <stdlib.h>

int main (){
    float capital_disponivel=1000.00;
    float preco_acao1=24.13, preco_acao2=11.00, preco_acao3=38.65;
    float dividendo_acao1=17.00, dividendo_acao2=35.00, dividendo_acao3=25.00;
    int qtde_acao1, qtde_acao2, qtde_acao3;

    printf("Digite a quantidade da Acao 1 que deseja comprar :");
    scanf("%d",&qtde_acao1);
    printf("Digite a quantidade da Acao 2 que deseja comprar :");
    scanf("%d",&qtde_acao2);
    printf("Digite a quantidade da Acao 3 que deseja comprar :");
    scanf("%d",&qtde_acao3);

    float total_acao1= qtde_acao1*preco_acao1;
    float total_acao2= qtde_acao2*preco_acao2;
    float total_acao3= qtde_acao3*preco_acao3;
    float total_investido= total_acao1+total_acao2+total_acao3;

    if(total_investido>capital_disponivel){
        printf("O valor total investido (R$%.2f)excede o capital disponivel de %.2f.\n",total_investido, capital_disponivel);

    }else{
      float dy_acao1=(dividendo_acao1/preco_acao1)*100;
      float dy_acao2=(dividendo_acao2/preco_acao2)*100;
      float dy_acao3=(dividendo_acao3/preco_acao3)*100;

      printf("Dividend Yield da Acao 1 : %.2f%%\n",dy_acao1);
      printf("Dividend Yield da Acao 2 : %.2f%%\n",dy_acao2);
      printf("Dividend Yield da Acao 3 : %.2f%%\n",dy_acao3);

      printf("Valor total investido : R$ %.2f\n",total_investido);
    }
    return 0;
}
