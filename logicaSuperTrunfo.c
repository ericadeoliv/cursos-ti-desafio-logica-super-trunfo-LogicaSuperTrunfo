
#include <stdio.h>

// Desafio Final Super Trunfo - Países
// Tema 3 - Comparações de multiplos atributos escolhidos pelo usuário

int main(){
  
    // variáveis/atribuições da Carta 1
    char estado1 [3] = "SP";
    char codigo1 [5] = "A01";
    char cidade1 [15]= "SÃO PAULO"; 
    unsigned long int populacao1 = 11895578;
    int pontosturisticos1 = 85;
    float area1 = 1521.20;
    float pib1 = 8289000000000; 
    float dens_pop1, pib_pc1;
    float superpoder1;

    
    // variáveis/atributos da Carta 2
    char estado2 [3] = "RJ";
    char codigo2 [5]= "B02";
    char cidade2 [15] = "RIO DE JANEIRO";
    unsigned long int populacao2 = 6729894;
    int pontosturisticos2 = 100;
    float area2 = 1200.00;
    float pib2 = 1300000000000;
    float  dens_pop2, pib_pc2;
    float superpoder2;

    int atributo1, atributo2, atributo3, resultado1, resultado2, resultado3;
    int pontoCarta1 = 0;
    int pontoCarta2 = 0;
     
   // Cálculo das densidades populacionais
    dens_pop1 = (float) populacao1 / area1;
    dens_pop2 = (float) populacao2 / area2;

    // Cálculo do PIB per capita
    pib_pc1 = pib1 / populacao1;
    pib_pc2 = pib2 / populacao2;
    
    // Cálculo do Super Poder
    superpoder1 = (double)(populacao1 + area1 + pib1 + pontosturisticos1 + pib_pc1) + (1/dens_pop1);
    superpoder2 = (double)(populacao2 + area2 + pib2 + pontosturisticos2 + pib_pc2) + (1/dens_pop2);
    
    printf ("\n >> BEM VINDO AO JOGO SUPER TRUNFO << \n");
    
    // Impressão Carta 1
    printf("\n\n ---- Carta 1");
    printf("\nEstado: %s", estado1);
    printf("\nCódigo: %s", codigo1);
    printf("\nNome da cidade: %s", cidade1);
    printf("\nPopulação: %lu habitantes", populacao1);
    printf("\nÁrea: %.3f Km²", area1);
    printf("\nPIB: R$%.2f", pib1);
    printf("\nPontos Turísticos: %d", pontosturisticos1);
    printf("\nDensidade Populacional: %.1f h/Km²", dens_pop1);
    printf("\nPIB per Capita: R$%.2f", pib_pc1);
     printf("\nSUPER PODER: %lf", superpoder1);

    // Impressão Carta 2
    printf("\n\n ---- Carta 2");
    printf("\nEstado: %s", estado2);
    printf("\nCódigo: %s", codigo2);
    printf("\nNome da cidade: %s", cidade2);
    printf("\nPopulação: %lu habitantes", populacao2);
    printf("\nÁrea: %.3f km²", area2);
    printf("\nPIB: R$%.2f", pib2);
    printf("\nPontos Turísticos: %d", pontosturisticos2);
    printf("\nDensidade Populacional: %.1f h/Km²", dens_pop2);
    printf("\nPIB per Capita: %.2f", pib_pc2);
    printf("\nSUPER PODER: %lf", superpoder2);

     
    printf ("\n\n --------- Comparando dois atributos ---------\n\n");
    
    // Menu de escolha pelo usuário para o primeiro atributo de comparação
    printf ("Escolha o primeiro atributo para comparação das cartas?\n");
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. PIB per capita\n");
    printf ("5. Pontos Turísticos\n");
    printf ("6. Densidade Populacional\n");
    printf ("7. SUPER PODER\n");
    printf ("Digite uma opção: ");
    scanf ("%d", &atributo1); 

    // Menu de escolhas pelo usuário para o segundo atributo de comparação, com exclusão do primeiro já escolhido
    printf ("\nEscolha o segundo atributo para comparação das cartas.\n");
    printf ("Você NÃO pode escolher o mesmo atributo escolhido anteriormente.\n");
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. PIB per capita\n");
    printf ("5. Pontos Turísticos\n");
    printf ("6. Densidade Populacional\n");
    printf ("7. SUPER PODER\n");
    printf ("Digite uma opção: ");
    scanf ("%d", &atributo2); 

    // Menu de escolhas pelo usuário para o terceiro atributo de comparação, diferente dos demais escolhidos
    printf ("\nEscolha o terceiro atributo para comparação das cartas.\n");
    printf ("Você NÃO pode escolher os atributos escolhidos anteriormente.\n");
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. PIB per capita\n");
    printf ("5. Pontos Turísticos\n");
    printf ("6. Densidade Populacional\n");
    printf ("7. SUPER PODER\n");
    printf ("Digite uma opção: ");
    scanf ("%d", &atributo3); 
    
    // Verificação de entrada de dois atributos diferentes
    if ((atributo1 == atributo2) || (atributo1 == atributo3))   
    {
        printf ("\nVocê escolheu atributos iguais.\n"); 
    } 
    
    else
    {
        // Tratamento, por meio do switch case, da primeira escolha de atributo feita pelo usuário
        switch (atributo1){
            case 1:
                resultado1 = (populacao1 > populacao2) ? 1 : 0; // Operador ternário para verificação do primeiro resultado da comparação
                printf ("\nPrimeiro atributo: POPULAÇÃO\n");
                printf ("Carta 1: %s - População: %lu\n", cidade1, populacao1);
                printf ("Carta 2: %s - População: %lu\n", cidade2, populacao2);
                break;

            case 2:
                resultado1 = (area1 > area2) ? 1 : 0;
                printf ("\nPrimeiro atributo: ÁREA\n");
                printf ("Carta 1: %s - Área: %.1f\n", cidade1, area1);
                printf ("Carta 2: %s - Área: %.1f\n", cidade2, area2);
                break;
            
            case 3:
                resultado1 = (pib1 > pib2) ? 1 : 0;
                printf ("\nPrimeiro atributo PIB\n");
                printf ("Carta 1: %s - PIB: R$%.2f\n", cidade1, pib1);
                printf ("Carta 2: %s - PIB: R$%.2f\n", cidade2, pib2);
                break;
            
            case 4:
                resultado1 = (pib_pc1 > pib_pc2) ? 1 : 0;
                printf ("\nPrimeiro atributo: PIB PER CAPITA\n");
                printf ("Carta 1: %s - PIB per capita: R$%.2f\n", cidade1, pib_pc1);
                printf ("Carta 2: %s - PIB per capita: R$%.2f\n", cidade2, pib_pc2);
                break;

            case 5:
                resultado1 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
                printf ("\nPrimeiro atributo: PONTOS TURÍSTICOS\n");
                printf ("Carta 1: %s - Pontos Turísticos: %d\n", cidade1, pontosturisticos1);
                printf ("Carta 2: %s - Pontos Turísticos: %d\n", cidade2, pontosturisticos2);
                break;

            case 6:
                resultado1 = dens_pop1 < dens_pop2 ? 1 : 0;
                printf ("\nPrimeiro atributo: DENSIDADE POPULACIONAL\n");
                printf ("Carta 1: %s - Densidade Populacional: %f\n", cidade1, dens_pop1);
                printf ("Carta 2: %s - Densidade Populacional: %f\n", cidade2, dens_pop2);
                break;

            case 7:
                resultado1 = superpoder1 > superpoder2 ? 1 : 0;
                printf ("\nPrimeiro atributo: SUPER PODER\n");
                printf ("Carta 1: %s - Super Poder: %f\n", cidade1, superpoder1);
                printf ("Carta 2: %s - Super Poder: %f\n", cidade2, superpoder2);
                break;

            default: 
                printf ("Opção Inválida!\n");
                break;
        }

        if (resultado1 == 1)
        {
            pontoCarta1++;
            printf("Ponto para a Carta 1\n");
        } 
        else 
        {
            pontoCarta2++;
            printf("Ponto para a Carta 2\n");
        }

        // Tratamento, por meio do switch case, da segunda escolha de atributo feita pelo usuário  
        switch (atributo2){
            case 1:
                resultado2 = populacao1 > populacao2 ? 1 : 0; // Operador ternário para verificação do segundo resultado da comparação
                printf ("\nSegundo atributo: POPULAÇÃO\n");
                printf ("Carta 1: %s - População: %lu\n", cidade1, populacao1);
                printf ("Carta 2: %s - População: %lu\n", cidade2, populacao2);
                break;

            case 2:
                resultado2 = area1 > area2 ? 1 : 0;
                printf ("\nSegundo atributo: ÁREA\n");
                printf ("Carta 1: %s - Área: %.1f\n", cidade1, area1);
                printf ("Carta 2: %s - Área: %.1f\n", cidade2, area2);
                break;
            
            case 3:
                resultado2 = pib1 > pib2 ? 1 : 0;
                printf ("\nSegundo atributo: PIB\n");
                printf ("Carta 1: %s - PIB: R$%.2f\n", cidade1, pib1);
                printf ("Carta 2: %s - PIB: R$%.2f\n", cidade2, pib2);
                break;
            
            case 4:
                resultado2 = pib_pc1 > pib_pc2 ? 1 : 0;
                printf ("\nSegundo atributo: PIB PER CAPITA\n");
                printf ("Carta 1: %s - PIB per capita: R$%.2f\n", cidade1, pib_pc1);
                printf ("Carta 2: %s - PIB per capita: R$%.2f\n", cidade2, pib_pc2);
                break;

            case 5:
                resultado2 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
                printf ("\nSegundo atributo: PONTOS TURÍSTICOS\n");
                printf ("Carta 1: %s - Pontos Turísticos: %d\n", cidade1, pontosturisticos1);
                printf ("Carta 2: %s - Pontos Turísticos: %d\n", cidade2, pontosturisticos2);
                break;

            case 6:
                resultado2 = dens_pop1 < dens_pop2 ? 1 : 0;
                printf ("\nSegundo atributo: DENSIDADE POPULACIONAL\n");
                printf ("Carta 1: %s - Densidade Populacional: %f\n", cidade1, dens_pop1);
                printf ("Carta 2: %s - Densidade Populacional: %f\n", cidade2, dens_pop2);
                break;

            case 7:
                resultado2 = superpoder1 > superpoder2 ? 1 : 0;
                printf ("\nSegundo atributo: SUPER PODER\n");
                printf ("Carta 1: %s - Super Poder: %f\n", cidade1, superpoder1);
                printf ("Carta 2: %s - Super Poder: %f\n", cidade2, superpoder2);
                break;

            default: 
                printf ("Opção Inválida!\n");
                break;
        }

        if (resultado2 == 1)
        {
            pontoCarta1++;
             printf("Ponto para a Carta 1\n");
        } 
        else 
        {
            pontoCarta2++;
             printf("Ponto para a Carta 2\n");
        }


        // Tratamento, por meio do switch case, da terceira escolha de atributo feita pelo usuário  
        switch (atributo3){
            case 1:
                resultado3 = populacao1 > populacao2 ? 1 : 0; // Operador ternário para verificação do segundo resultado da comparação
                printf ("\nTerceiro atributo: POPULAÇÃO\n");
                printf ("Carta 1: %s - População: %lu\n", cidade1, populacao1);
                printf ("Carta 2: %s - População: %lu\n", cidade2, populacao2);
                break;

            case 2:
                resultado3 = area1 > area2 ? 1 : 0;
                printf ("\nTerceiro atributo: ÁREA\n");
                printf ("Carta 1: %s - Área: %.1f\n", cidade1, area1);
                printf ("Carta 2: %s - Área: %.1f\n", cidade2, area2);
                break;
            
            case 3:
                resultado3 = pib1 > pib2 ? 1 : 0;
                printf ("\nTerceiro atributo: PIB\n");
                printf ("Carta 1: %s - PIB: R$%.2f\n", cidade1, pib1);
                printf ("Carta 2: %s - PIB: R$%.2f\n", cidade2, pib2);
                break;
            
            case 4:
                resultado3 = pib_pc1 > pib_pc2 ? 1 : 0;
                printf ("\nTerceiro atributo: PIB PER CAPITA\n");
                printf ("Carta 1: %s - PIB per capita: R$%.2f\n", cidade1, pib_pc1);
                printf ("Carta 2: %s - PIB per capita: R$%.2f\n", cidade2, pib_pc2);
                break;

            case 5:
                resultado3 = pontosturisticos1 > pontosturisticos2 ? 1 : 0;
                printf ("\nTerceiro atributo: PONTOS TURÍSTICOS\n");
                printf ("Carta 1: %s - Pontos Turísticos: %d\n", cidade1, pontosturisticos1);
                printf ("Carta 2: %s - Pontos Turísticos: %d\n", cidade2, pontosturisticos2);
                break;

            case 6:
                resultado3 = dens_pop1 < dens_pop2 ? 1 : 0;
                printf ("\nTerceiro atributo: DENSIDADE POPULACIONAL\n");
                printf ("Carta 1: %s - Densidade Populacional: %f\n", cidade1, dens_pop1);
                printf ("Carta 2: %s - Densidade Populacional: %f\n", cidade2, dens_pop2);
                break;

            case 7:
                resultado3 = superpoder1 > superpoder2 ? 1 : 0;
                printf ("\nTerceiro atributo: SUPER PODER\n");
                printf ("Carta 1: %s - Super Poder: %f\n", cidade1, superpoder1);
                printf ("Carta 2: %s - Super Poder: %f\n", cidade2, superpoder2);
                break;

            default: 
                printf ("Opção Inválida!\n");
                break;
        }
        if (resultado3 == 1)
        {
            pontoCarta1++;
            printf("Ponto para a Carta 1\n");
        }
        else 
        {
            pontoCarta2++;
            printf("Ponto para a Carta 1\n");
        }
       
    
        // Verificação dos resultados das comparações
        printf ("\nTotal de pontos:\n"); 
        printf ("Carta 1: %d ponto(s) - Carta 2: %d ponto(s).\n\n", pontoCarta1, pontoCarta2);
    
        if (pontoCarta1 > pontoCarta2) 
        {
            printf (" ### Carta 1 venceu!! ### \n\n");
        } 
        else if (pontoCarta1 < pontoCarta2)
        {
            printf (" ### Carta 2 venceu!! ### \n\n");
        } 
        else 
        {
            printf ("Deu empate!\n\n");
        }
    }
    return 0;
}