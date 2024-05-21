void exemplo_aula02_formatacao(){
char caractere = 'A';
int numero_inteiro = 78;
float numero_decimal = 45.50;
char nome[10] = "Guilherme"

    printf("Mostrando o caractere: %c\n", caractere);
    printf("Mostrando o caractere: %d\n", numero_inteiro);
    printf("Mostrando o caractere: %f\n", numero_decimal);
    printf("Mostrando o caractere: %s\n", nome);
}

void nome_pessoa(){
char nome[100];
gets(nome);
    printf("%s\n", nome);
}

void exemplo02_aula02_formatacao(){
char caractere;
int numero_inteiro;
float numero_decimal;
char nome[30];
    printf("Mostrar o caractere: ");
    scanf("%c", &caractere);
    ptintf("Mostrar um número inteiro: ");
    scanf("%d" &numero_inteiro);
    printf("Mostrar número decimal: ");
    scanf("%f", &numero_decimal);
    printf("Informe um nome:");
    scanf("%s", &nome);

    printf("\nMostrando o caractere: %c\n", caractere);
    printf("Mostrando o número inteiro: %d\n", numero_inteiro);
    printf("Mostrando o número decimal: %2.f\n", numero_decimal);
    printf("Mostrando o nome: %s\n", nome);
}
