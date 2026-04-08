#include <stdio.h>
#include <math.h>

/*
//Primeira questão

int main(){
    int valor1
    int valor2
    
     printf("Digite 2 valores: ");
     
     calc = valor1 * valor2;
     scanf(%i ,calc);


//Primeira questão CORRIGIDA
    int valor1;
    int valor2;
    int calc;
    
    printf("Digite 2 valores: ");
    scanf("%i %i", &valor1, &valor2);
     
    calc = valor1 * valor2;
    printf("Resultado: %i\n" ,calc);
     

//Segunda questão
    int numero;
    int antecessor;
    int sucessor;
    
    printf("Digite um número: ");
    scanf("%i", &numero);
    
    antecessor = numero - 1;
    sucessor = numero + 1;
    
    
    printf("%i %i", antecessor, sucessor);
    

//Terceira questão
    int x;
    int y;
    int divisao;
    int quociente;
    
    printf("Digite dois valores: ");
    scanf("%i %i", &x, &y);%i\n
    
    divisao = x % y;
    printf("Resto da divisão: %i\n", divisao);
    
    quociente = x / y;
    printf("Resultado da divisão: %i\n", quociente);
    

//Quarta questão
    int numero1;
    int numero2;
    int soma;
    int multiplicacao;
    int resultdivisao;
    
    printf("Digite dois valores: ");
    scanf("%i %i", &numero1, &numero2);
    
    soma = numero1 + numero2;
    multiplicacao = numero1 * numero2;
    resultdivisao = numero1 / numero2;
    printf("%i\n%i\n%i", soma, multiplicacao, resultdivisao);
    

//Quinta questão    
//Pode dar lixo de memória caso o usuário digite um número menor que 1

   float centim;
   float poleg;

  printf("Digite o valor em centímetros: ");
  scanf("%f", &centim);

  poleg = centim / 2.54;
  
  printf("%.2f", poleg);


//Sexta questão
    float raio;
    float pi;
    float area;

    printf("Digite o valor do raio");
    scanf("%f", &raio);

    pi = 3.14;
    area = pi * raio * raio;

    printf("%.2f", area);



// area = pi * raio²


//Sétima questão

    float pi;
    float altura;
    float raio;
    float area;
    float volume;
    
    pi = 3.14;
    

    printf("Digite o valor da altura e do raio do cilindro: ");
    scanf("%f %f",  &altura, &raio);
    
    volume = pi * (raio * raio) * altura;
    area = 2 * pi * raio * (altura + raio);
    
    printf("%.2f %.2f\n", area, volume);
   

//Oitava questão
   float salario;
   float totalVendas;
   float comissao15;
   float salarioTotal;
   
   salario = 1615;
   comissao15 = 0.15;
   
   printf("Digite o total de vendas (Em dinheiro) desse mês: ");
   scanf("%f", &totalVendas);
   
   salarioTotal = salario + comissao15 * totalVendas;
   
   printf("Seu salario é: %.2f\nSeu salario final é: %.2f\n", salario, salarioTotal);
   

   
//Nona questão  
   float aInicial;
   float bInicial;
   float aFinal;
   float bFinal;
   
   printf("Digite duas vezes o valor a e duas vezes o valor b: ");
   scanf("%f %f %f %f", &aInicial, &bFinal, &bInicial, &aFinal);
   printf("%.0f %.0f\n", aInicial, bInicial);
   
   printf("%.0f %.0f\n", aFinal, bFinal);


//Décima questão   
   int valorSaque;
   int nota100;
   int nota50;
   int nota20;
   int nota10;
   int nota5;
   int nota2;
   int valor100;
   int resto100;
   int valor50;
   int resto50;
   int valor20;
   int resto20;
   int valor10;
   int resto10;
   int valor5;
   int resto5;
   int valor2;
   int resto2;
   
   nota100 = 100;
   nota50 = 50;
   nota20 = 20;
   nota10 = 10;
   nota5 = 5;
   nota2 = 2;
   
   
   printf("Digite o valor a ser sacado: ");
   scanf("%d", &valorSaque);
   
   valor100 = valorSaque / nota100;
   resto100 = valorSaque % nota100;
   printf("%d notas de 100\n", valor100);
   
   valor50 = resto100 / nota50;
   resto50 = resto100 % nota50;
   printf("%d notas de 50\n", valor50);
   
   valor20 = resto50 / nota20;
   resto20 = resto50 % nota20;
   printf("%d notas de 20\n", valor20);
   
   valor10 = resto20 / nota10;
   resto10 = resto20 % nota10;
   printf("%d notas de 10\n", valor10);
   
   valor5 = resto10 / nota5;
   resto5 = resto10 % nota5;
   printf("%d notas de 5\n", valor5);
   
   valor2 = resto5 / nota2;
   resto2 = resto5 % nota2;
   printf("%d notas de 2\n", valor2);
   
   printf("%d reai(s) restante(s), não pode(m) ser sacado(s)\n", resto2);
   
//Décima Primeira questão

  float valorCompra;
  float valorPago;
  int trocoCentavos;
  int nota100;
  int nota50;
  int nota20;
  int nota10;
  int nota5;
  int nota2;
  int moeda1;
  int moeda50;
  int moeda25;
  int moeda10;
  int moeda5;
  int valor100;
  int resto100;
  int valor50;
  int resto50;
  int valor20;
  int resto20;
  int valor10;
  int resto10;
  int valor5;
  int resto5;
  int valor2;
  int resto2;
  int valmoeda1;
  int resmoeda1;
  int valmoeda50;
  int resmoeda50;
  int valmoeda25;
  int resmoeda25;
  int valmoeda10;
  int resmoeda10;
  int valmoeda5;
  int resmoeda5;
  
  nota100 = 10000;
  nota50 = 5000;
  nota20 = 2000;
  nota10 = 1000;
  nota5 = 500;
  nota2 = 200;
  moeda1 = 100;
  moeda50 = 50;
  moeda25 = 25;
  moeda10 = 10;
  moeda5 = 5;
  
  
  printf("Digite o valor da compra: ");
  scanf("%f", &valorCompra);
  
  printf("Digite o valor dado pelo cliente: ");
  scanf("%f", &valorPago);
  
  
  trocoCentavos = (valorPago - valorCompra) * 100;
   
   valor100 = trocoCentavos / nota100;
   resto100 = trocoCentavos % nota100;
   printf("%d notas de 100\n", valor100);
   
   valor50 = resto100 / nota50;
   resto50 = resto100 % nota50;
   printf("%d notas de 50\n", valor50);
   
   valor20 = resto50 / nota20;
   resto20 = resto50 % nota20;
   printf("%d notas de 20\n", valor20);
   
   valor10 = resto20 / nota10;
   resto10 = resto20 % nota10;
   printf("%d notas de 10\n", valor10);
   
   valor5 = resto10 / nota5;
   resto5 = resto10 % nota5;
   printf("%d notas de 5\n", valor5);
   
   valor2 = resto5 / nota2;
   resto2 = resto5 % nota2;
   printf("%d notas de 2\n", valor2);
   
   valmoeda1 = resto2 / moeda1;
   resmoeda1 = resto2 % moeda1;
   printf("%d moeda de 1\n", valmoeda1);
   
   valmoeda50 = resmoeda1 / moeda50;
   resmoeda50 = resmoeda1 % moeda50;
   printf("%d moeda de 50\n", valmoeda50);
   
   valmoeda25 = resmoeda50 / moeda25;
   resmoeda25 = resmoeda50 % moeda25;
   printf("%d moeda de 25\n", valmoeda25);
   
   valmoeda10 = resmoeda25 / moeda10;
   resmoeda10 = resmoeda25 % moeda10;
   printf("%d moeda de 10\n", valmoeda10);
   
   valmoeda5 = resmoeda10 / moeda5;
   resmoeda5 = resmoeda10 % moeda5;
   printf("%d moeda de 5\n", valmoeda5);
   
   printf("\nTroco: R$ %.2f\n\n", (float)trocoCentavos / 100);
   printf("%d centavo(s) restante(s), não pode(m) ser devolvido(s) ao cliente, pois não existe(m)\n", resmoeda5);


//Décima Segunda questão
   float mediaAritmetica;
   float media;
   float somaMedias;
   float mediaDasMedias;
   
   mediaAritmetica = 7 + 8 + 9 / 3;
   media = 4 + 5 + 6 / 3;
   somaMedias = media + mediaAritmetica;
   mediaDasMedias = somaMedias / 2;
   
   printf("Soma: %.0f\n", somaMedias);
   printf("Média: %.1f\n", (float)mediaDasMedias);
   

//Décima Terceira questão

     float precoFabrica;
     float imposto;
     float porcRevendedor;
     float precoFinal;
     
     
     printf("Digite o preço de fábrica do veículo que pretende comprar ");
     scanf("%f", &precoFabrica);
     
     imposto = 0.45 * precoFabrica;
     porcRevendedor = 0.28 * precoFabrica;
     precoFinal = precoFabrica + imposto + porcRevendedor;
     
     printf("Este é o valor de fábrica do seu veículo: %.2f\n", precoFabrica);
     printf("E este é o valor total do seu veículo: %.2f", precoFinal);
     


//Décima Quarta questão
     
     int valorI;
     
     printf("Digite um valor inteiro: ");
     scanf("%i", &valorI);
     
     if(valorI == 0){
         printf("Valor exatamente igual a 0");
     }
     else if(valorI < 0){
         printf("Este valor é negativo");
     }
     else if(valorI > 0){
         printf("Este valor é positivo");
     }
     else {
         printf("Valor inválido");
     }
 
  return 0;
}






//APENAS PARA FINS DE ESTUDOS 
/*DÚVIDAS
1.Questão
    Onde colocar o ;
    Por que o %v (varia) precisa de aspas?
*/


/*ERROS
1.Questão
    Não ter declarado o calc
    O print aparece para o usuário, mas precisa do scanf pra o usuário colocar entrada (Depois do print)
    Esquecer o & antes dos "valor1" e "valor2"
    Entre o %i e outro %i não tem vírgula
    Use \n depois do texto do printf, MAS ENTRE ASPAS
    RETURN fica dentro da função main e não fora
    Confundir printf com scanf, deveria aparecer o resultado e não pedir mais entradas
    Coloque aspas  nos %i
    O & serve para pegar o endereço da variável, e isso é usado no scanf, não no printf.
 
 2.Questão
    & não se coloca no printf, apenas no scanf
    
 3.Questão 
    EXEMPLO ERRADO:
        printf("%i\n Resto da divisão: ", divisao);
    CERTO:
        printf("Resto da divisão: %i\n", divisao);
    
    
 5.Questão pra baixo (Dúvidas e erros)
    *valor de pi errado, pois o C não tem , e sim .
     *a declaração das variáveis volume e área estavam antes do 
     programa sequer lê-las, se coloca primeiro o scan que pede 
     ao usuário o valor das variáveis, pra pegar elas e poder 
     fazer o cálculo
     *a contagem de números após a vírgula é no printf e não no scanf (%2.f)
     *Pesquisar diferença entre colocar o & ou não, mas percebe-se que ele 
     não encontra o valor da variável sem o &
*/