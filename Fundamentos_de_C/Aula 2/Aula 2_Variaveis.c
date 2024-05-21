void exemplo01_aula02(){
const float pi = 3.14;
float raio = 5, area;

    area = pi * raio * raio;

    printf("A area da circuferência é %.2f", area);
}

void exemplo01_aula02_interativo(){
const float pi = 3.14;
float raio, area;

    printf("Informe o valor do raio: ");
    scanf("%f", raio);

    area = pi * raio * raio;
    printf("A area da circuferencia é %.2f", area)
}
