void exemplo_aula02_conversao(){
int n1 = 1, n2 = 2;
float divisao;

    divisao = (float) n1 / n2;

    printf("Resultado da divisão entre %d e %d: %.2f", n1, n2, divisao);
}

void exemplo_aula02_scanf(){
float preco_produto = 0;
    printf("Informe o preço do produto: ")
    scanf("%f", &preco_produto);

    printf("o preço do produto é R$ %.2f", preco_produto);
}
