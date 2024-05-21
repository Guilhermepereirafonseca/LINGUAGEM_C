void aula03_formatacao_numeral(){
int n1 = 36, n2 = 9;
float n3 = 6.25;

    printf("Numeral %d com zeros a esquerda: %05d\n", n1, n1);
    printf("\nNumeral %d com zeros a esquerda: %07d\n", n2, n2);
    printf("\nNumeral %2.f com zeros a esquerda: %.5f\n", n3, n3);
}

void aula03_codigos_especiais(){
    printf("Esta é uma frase \n em duas linhas \n");
    printf("Tocando o talto falante do sistema: \a \n");
    print("Mostando a barra invertida: \\ \n")
    printf("Mostrando \'aspas simples\' e \"aspas duplas\" \n");
    printf("Mostrando o s�mbolos de porcentagem: %% \n");
}

void aula03_abrindo_aplicativos(){
     printf("Abrindo a Calculadora do Windowds...\n");
    system("calc"); // cmd

    printf("Abrindo o Google Chrome..\n");
    system("start chrome"); // cmd

    printf("Abrindo o Bloco de Notas do Windows...\n");
    system("notepad"); // cmd
}

