#include<stdio.h>
int main (){

 //Informaçoes da carta 1
 char país1[50];
 unsigned long int populacao1;
 float area1; //km2
 float pib1; //em bilhoes
 int turismo1;


//Informações da carta 2
char país2[50];
unsigned long int populacao2;
float area2; //km2
float pib2; //em bilhoes
int turismo2;


printf("===== Seja Bem-Vindo ao Super Trunfo =====\n");
// entradas e saidas carta 1
printf("* Carta 1 *\n");

printf("Insira o Nome do Pais\n");
scanf ("%49s", país1);

printf("Insira a População\n");
scanf ("%lu", &populacao1);

printf("Insira a Área\n");
scanf ("%f", &area1);

printf("Insira o PIB\n");
scanf ("%f", &pib1);

printf("Insira o N° de pontos turisticos\n");
scanf ("%d", &turismo1);

printf("Agora insira os dados da carta N° 2\n");
// entradas e saidas carta 2
printf("** Carta 2 **\n");

printf("Insira o Nome do Pais\n");
scanf ("%49s", país2);

printf("Insira a População\n");
scanf ("%lu", &populacao2);

printf("Insira a Área\n");
scanf ("%f", &area2);

printf("Insira o PIB\n");
scanf ("%f", &pib2);

printf("Insira o N° de pontos turisticos\n");
scanf ("%d", &turismo2);

// calculo p/ descobrir a densidade
float densidade1 = (float)populacao1 / area1;
float densidade2 = (float)populacao2 / area2;


// Resultado das Cartas

printf("* Sua carta 1 é: *\n");
printf("Nome do País: %s\n", país1);
printf("População: %lu\n", populacao1);
printf ("Área: %.2f km2 \n", area1);
printf("PIB: %f Bilhoes de reais\n", pib1);
printf("N° de pontos turisticos: %d\n", turismo1);
printf("Densidade populacional: %.2f\n", densidade1);

printf("* Sua carta 2 é: *\n");
printf("Nome do País: %s\n", país2);
printf("População: %lu\n", populacao2);
printf ("Área: %.2f km2 \n", area2);
printf("PIB: %f Bilhoes de reais\n", pib2);
printf("N° de pontos turisticos: %d\n", turismo2);
printf("Densidade populacional: %.2f\n", densidade2);

//menu interação com o cliente
int opcao;
printf("======= Para continuar siga as instruções a seguir =======\n");
printf("Insira o número do atributo que você quer comparar\n");
printf("População = 1\n");
printf("Área = 2\n");
printf("PIB = 3\n");
printf("Pontos turisticos = 4\n");
printf("Densidade Populacional = 5\n");
printf("Sair = 6\n");

scanf("%d", &opcao);
//sequencia de comandos para combinações dos atributos 
switch (opcao)
{
case 1:
    printf("Comparação do atributo população!\n");
    printf("País %s: %lu País %s: %lu\n",país1 ,populacao1, país2, populacao2);
    if (populacao1 > populacao2){
        printf ("País: %s foi o(a) campeão!!!", país1);
    }else if(populacao1 < populacao2){
        printf("País: %s foi o(a) campeão!!!", país2);
    }else {
        printf("Empate!");
    }
    break;
case 2:
    printf("Comparação do atributo Área!\n");
    printf("País %s: %.2f País %s: %.2f\n",país1 ,area1, país2, area2);
    if (area1 > area2){
        printf ("País: %s foi o(a) campeão!!!", país1);
    }else if(area1 < area2){
        printf("País: %s foi o(a) campeão!!!", país2);
    }else {
        printf("Empate!");
    }
    break;
case 3:
    printf("Comparação do atributo PIB!\n");
    printf("País %s: %f País %s: %f\n",país1 ,pib1, país2, pib2);
    if (pib1 > pib2){
        printf ("País: %s foi o(a) campeão!!!", país1);
    }else if(pib1 < pib2){
        printf("País: %s foi o(a) campeão!!!", país2);
    }else {
        printf("Empate!");
    }
    break;
case 4:
    printf("Comparação de Pontos Turisticos!\n");
    printf("País %s: %d País %s: %d\n",país1 ,turismo1, país2, turismo2);
    if (turismo1 > turismo2){
        printf ("País: %s foi o(a) campeão!!!", país1);
    }else if(turismo1 < turismo2){
        printf("País: %s foi o(a) campeão!!!", país2);
    }else {
        printf("Empate!");
    }
    break;

//a carta com menor valor de densidade vence
case 5:
    printf("Comparação da Densidade Populacional!\n");
    printf("País %s: %.2f País %s: %.2f\n",país1 ,densidade1, país2, densidade2);
    if (densidade1 < densidade2){
        printf ("País: %s foi o(a) campeão!!!", país1);
    }else if(densidade1 > densidade2){
        printf("País: %s foi o(a) campeão!!!", país2);
    }else {
        printf("Empate!");
    }
    break;
case 6:
    printf("Obrigado por jogar o Super Trunfo Paises!!!");
 
    break;
default: printf("ERROR 105");
    break;
}
return 0;
}