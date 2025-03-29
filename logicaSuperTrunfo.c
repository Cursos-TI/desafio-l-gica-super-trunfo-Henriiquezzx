#include<stdio.h>
int main (){

 //Informaçoes da carta 1
 char pais1[50];
 unsigned long int populacao1;
 float area1; //km2
 float pib1; //em bilhoes
 int turismo1;


//Informações da carta 2
char pais2[50];
unsigned long int populacao2;
float area2; //km2
float pib2; //em bilhoes
int turismo2;


printf("===== Seja Bem-Vindo ao Super Trunfo =====\n");
// entradas e saidas carta 1
printf("* Carta 1 *\n");

printf("Insira o Nome do Pais\n");
scanf ("%49s", pais1);

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
scanf ("%49s", pais2);

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
printf("Nome do País: %s\n", pais1);
printf("População: %lu\n", populacao1);
printf ("Área: %.2f km2 \n", area1);
printf("PIB: %f Bilhoes de reais\n", pib1);
printf("N° de pontos turisticos: %d\n", turismo1);
printf("Densidade populacional: %.2f\n", densidade1);

printf("* Sua carta 2 é: *\n");
printf("Nome do País: %s\n", pais2);
printf("População: %lu\n", populacao2);
printf ("Área: %.2f km2 \n", area2);
printf("PIB: %f Bilhoes de reais\n", pib2);
printf("N° de pontos turisticos: %d\n", turismo2);
printf("Densidade populacional: %.2f\n", densidade2);

//menu interação com o cliente
int atributo1, atributo2;
do {
printf("======= Para continuar siga as instruções a seguir =======\n");
printf("Insira o número do atributo que você quer comparar\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos turisticos\n");
printf("5 - Densidade Populacional\n");
printf("6 - Sair\n");

scanf("%d", &atributo1);
//Codigo de repetição caso o cliente coloque o mesmo atributo
  
} while (atributo1 < 1 || atributo1 > 6);

    if (atributo1 == 6 ){
    printf("Obrigado por jogar o Super Trunfo Paises!!!");
    return 0;
}

do {
    printf("Escolha outro atributo para a comparação (sendo diferente do primeiro)!\n");
    scanf("%d", &atributo2);
    
} while (atributo1 == atributo2 || atributo2 < 1 || atributo2 > 6);


switch (atributo1) {
    case 1:
        printf("\nComparação do atributo População!\n");
        printf("País %s: %lu - País %s: %lu\n", pais1, populacao1, pais2, populacao2);
        (populacao1 > populacao2) ? printf("País vencedor: %s!\n", pais1) :
        (populacao1 < populacao2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    case 2:
        printf("\nComparação do atributo Área!\n");
        printf("País %s: %.2f km² - País %s: %.2f km²\n", pais1, area1, pais2, area2);
        (area1 > area2) ? printf("País vencedor: %s!\n", pais1) :
        (area1 < area2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    case 3:
        printf("\nComparação do atributo PIB!\n");
        printf("País %s: %.2f bilhões - País %s: %.2f bilhões\n", pais1, pib1, pais2, pib2);
        (pib1 > pib2) ? printf("País vencedor: %s!\n", pais1) :
        (pib1 < pib2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    case 4:
        printf("\nComparação de Pontos Turísticos!\n");
        printf("País %s: %d - País %s: %d\n", pais1, turismo1, pais2, turismo2);
        (turismo1 > turismo2) ? printf("País vencedor: %s!\n", pais1) :
        (turismo1 < turismo2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    case 5:
        printf("\nComparação da Densidade Populacional!\n");
        printf("País %s: %.2f hab/km² - País %s: %.2f hab/km²\n", pais1, densidade1, pais2, densidade2);
        (densidade1 < densidade2) ? printf("País vencedor: %s!\n", pais1) :
        (densidade1 > densidade2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    default:
        printf("Erro inesperado!\n");
        break;
}

switch (atributo2) {
    case 1:
        printf("\nComparação do atributo População!\n");
        printf("País %s: %lu - País %s: %lu\n", pais1, populacao1, pais2, populacao2);
        (populacao1 > populacao2) ? printf("País vencedor: %s!\n", pais1) :
        (populacao1 < populacao2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    case 2:
        printf("\nComparação do atributo Área!\n");
        printf("País %s: %.2f km² - País %s: %.2f km²\n", pais1, area1, pais2, area2);
        (area1 > area2) ? printf("País vencedor: %s!\n", pais1) :
        (area1 < area2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    case 3:
        printf("\nComparação do atributo PIB!\n");
        printf("País %s: %.2f bilhões - País %s: %.2f bilhões\n", pais1, pib1, pais2, pib2);
        (pib1 > pib2) ? printf("País vencedor: %s!\n", pais1) :
        (pib1 < pib2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    case 4:
        printf("\nComparação de Pontos Turísticos!\n");
        printf("País %s: %d - País %s: %d\n", pais1, turismo1, pais2, turismo2);
        (turismo1 > turismo2) ? printf("País vencedor: %s!\n", pais1) :
        (turismo1 < turismo2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    case 5:
        printf("\nComparação da Densidade Populacional!\n");
        printf("País %s: %.2f hab/km² - País %s: %.2f hab/km²\n", pais1, densidade1, pais2, densidade2);
        (densidade1 < densidade2) ? printf("País vencedor: %s!\n", pais1) :
        (densidade1 > densidade2) ? printf("País vencedor: %s!\n", pais2) : printf("Empate!\n");
        break;
    default:
        printf("Erro inesperado!\n");
        break;
}

return 0;  }