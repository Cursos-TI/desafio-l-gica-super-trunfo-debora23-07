#include <stdio.h>

int main (){

char nomecidade, estado, codigo;
int Populacao, Turismo;
float PIB, Area;

//utilizando o printf para o usuário colocar os dados da primeira carta

printf("Insira os seguinte dados da sua primeira carta de Super Trunfo:\n");

    printf("Digite um estado do Brasil: \n");
    scanf("%s", &estado);

    printf("Digite uma cidade deste estado:\n");
    scanf("%s", &nomecidade);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Turismo);

    printf("Digite a populacao do Brasil: \n");
    scanf("%d", &Populacao);

    printf("Digite a area em KM do Brasil: \n");
    scanf("%f", &Area);

    printf("Digite o PIB do Brasil: \n");
    scanf("%f", &PIB);

    float DensidadePopulacional;
    float PIBperCapita;

    DensidadePopulacional = Populacao / Area;
    printf("Densidade Populacional do Brasil: %f \n", DensidadePopulacional);

    PIBperCapita = PIB / Populacao;
    printf("Pib per Capita do Brasil: %f \n", PIBperCapita);

    printf("Digite o código da carta do Brasil: \n");
    scanf("%s", &codigo);

    char NOMECIDADE, ESTADO, CODIGO;
int POPULACAO, TURISMO;
float Pib, AREA;

//utilizando o printf para o usuário colocar os dados da segunda carta

printf("Digite um estado da Espanha: \n");
    scanf("%s", &ESTADO);

    printf("Digite uma cidade deste estado:\n");
    scanf("%s", &NOMECIDADE);

    printf("Digite o código da carta da Espanha: \n");
    scanf("%s", &CODIGO);

printf("Digite o número de pontos turísticos da Espanha: \n");
    scanf("%d", &TURISMO);

printf("Digite a populacao da Espanha: \n");
    scanf("%d", &POPULACAO);

    printf("Digite a area em KM da Espanha: \n");
    scanf("%f", &AREA);

    printf("Digite o PIB da Espanha: \n");
    scanf("%f", &Pib);

    //calculando a densidade populacional e o pib per capita

    float DENSIDADEPOPULACIONAL;
    float PIBPERCAPITA;

    DENSIDADEPOPULACIONAL = POPULACAO / Pib;
    printf("Densidade Populacional da Espanha: %f \n", DENSIDADEPOPULACIONAL);

    PIBPERCAPITA = Pib / POPULACAO;
    printf("Pib per Capita da Espanha: %f \n", PIBPERCAPITA);

    //calculando qual carta ganhará utilizando o que o usuário digitou 

    if (Populacao > POPULACAO) {
        printf("Brasil venceu, pois a sua população é maior!\n Sua população é %d, enquanto a Espanha é %d\n A carta vencedora é Brasil!\n", Populacao, POPULACAO); 
    } else {
        printf("Espanha venceu, pois sua população é maior! \n Sua população é %d, enquanto do Brasil é %d\n A carta vencedora é Espanha!\n", POPULACAO, Populacao);
    }

    

    return 0;
}
