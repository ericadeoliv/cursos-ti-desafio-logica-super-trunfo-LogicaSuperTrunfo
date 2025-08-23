#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 3 - Menu interativo

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

    int opcao;
     
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

     
    // Menu de escolha pelo usuário para comparação dos atributos
    printf ("\n\n --------- Comparando os atributos ---------\n\n");
    printf ("Qual atributo deseja utilizar para comparar as cartas?\n");
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. PIB\n");
    printf ("4. PIB per capita\n");
    printf ("5. Pontos Turísticos\n");
    printf ("6. Densidade Populacional\n");
    printf ("7. SUPER PODER\n");
    printf ("Digite uma opção: ");
    scanf ("%d", &opcao); 

    // comparação dos atributos por meio da ferramente switch case em conjunto com a estrutura aninhada if-else
    switch (opcao){
        case 1:
            printf ("\nPOPULAÇÃO\n");
            printf ("Carta 1: %s - População: %lu\n", cidade1, populacao1);
            printf ("Carta 2: %s - População: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2)
            {              
                printf ("  ## Carta 1 venceu!! ## \n\n");
            } 
            else if (populacao1 < populacao2)
            {
                printf ("  ## Carta 2 venceu!! ##\n\n");
            } 
            else 
            {
                printf ("Deu empate!! As populações são iguais.\n\n");
            }
            break;
        
        case 2:
            printf ("\nÁREA\n");
            printf ("Carta 1: %s - Área: %.1f\n", cidade1, area1);
            printf ("Carta 2: %s - Área: %.1f\n", cidade2, area2);
            if (area1 > area2) 
            {  
                printf ("   ## Carta 1 venceu!! ##\n\n");
            }
            else if (area1 < area2)
            {
                printf ("  ## Carta 2 venceu!! ##\n\n");
            } 
            else 
            {
                printf ("Deu empate! Os valores das áreas são iguais.\n\n");
            }
            break;

        case 3:
            printf ("\nPIB\n");
            printf ("Carta 1: %s - PIB: R$%.2f\n", cidade1, pib1);
            printf ("Carta 2: %s - PIB: R$%.2f\n", cidade2, pib2);
            if (pib1 > pib2) 
            {  
                 printf ("  ##  Carta 1 venceu!! ## \n\n");
            } 
            else if (pib1 < pib2)
            {
                printf ("  ## Carta 2 venceu!! ## \n\n");
            }
            else 
            {
                printf ("Deu empate! Os valores de PIB são iguais.");
            }
            break;

        case 4:
            printf ("\nPIB PER CAPITA\n");
            printf ("Carta 1: %s - PIB per capita: R$%.2f\n", cidade1, pib_pc1);
            printf ("Carta 2: %s - PIB per capita: R$%.2f\n", cidade2, pib_pc2);
            if (pib_pc1 > pib_pc2) 
            {  
                printf ("  ## Carta 1 venceu!! ##\n\n");
            }
            else if (pib_pc1 < pib_pc2)
            {
                printf ("  ## Carta 2 venceu!! ##\n\n");
            }
            else 
            {
                printf ("Deu empate!! Os valores de PIB per capita são iguais.\n\n");
            }
            break;

        case 5:
            printf ("\nPONTOS TURÍSTICOS\n");
            printf ("Carta 1: %s - Pontos Turísticos: %d\n", cidade1, pontosturisticos1);
            printf ("Carta 2: %s - Pontos Turísticos: %d\n", cidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) 
            {  
                printf ("  ## Carta 1 venceu!! ##\n\n");
            } 
            else if (pontosturisticos1 < pontosturisticos2)
            {
                printf ("  ## Carta 2 venceu!! ##\n\n");
            }
            else 
            {
                printf ("Deu empate!! As quantidades de pontos turísticos são iguais.\n\n");
            }
            break;        

        case 6:            
            printf ("\nDENSIDADE POPULACIONAL\n");
            printf ("Carta 1: %s - Densidade Populacional: %f\n", cidade1, dens_pop1);
            printf ("Carta 2: %s - Densidade Populacional: %f\n", cidade2, dens_pop2);
            if (dens_pop1 < dens_pop2) 
            {  
                printf ("  ## Carta 1 venceu!! ##\n\n");
            } 
            else if (dens_pop1 > dens_pop2)
            {
                printf ("  ## Carta 2 venceu!! ##\n\n");
            } 
            else 
            {
                printf ("Deu empate!! As densidades populacionais são iguais.\n\n");
            }
            break;

        case 7:
           printf ("\nSUPER PODER\n");
           printf ("Carta 1: %s - Super Poder: %f\n", cidade1, superpoder1);
           printf ("Carta 2: %s - Super Poder: %f\n", cidade2, superpoder2);
           if (superpoder1 > superpoder2) 
           {  
                printf ("  ## Carta 1 venceu!! ##\n\n");
           } 
           else if (superpoder1 < superpoder2)
           {
                printf ("  ## Carta 2 venceu!! ##\n\n");
           } 
           else 
           {
                printf ("Deu empate! Os pontos de SUPER PODER o iguais.\n\n");
           }
           break;

        default: 
            printf ("Opção inválida!\n\n");
            break;
    }
    return 0;
}
