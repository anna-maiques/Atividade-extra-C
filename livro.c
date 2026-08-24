#include <stdio.h>
#include <string.h>

typedef struct {
    char titulo[100];
    int disponivel;
} Livro;

void emprestarLivro(Livro* livro) { // Recebe o endereço de um livro ^-^
    livro->disponivel = 0;    // Altera o status para emprestado -_- 
}

void mostrarLivro(Livro* livro) { //mostra as coisas -~-
    printf("Livro: %s\n", livro->titulo);
    if (livro->disponivel == 1) {
        printf("Status: Disponivel\n");
    } else {
        printf("Status: Emprestado\n");
    }
}


int main() {

    Livro livro;// Cria um livro yayyy
    strcpy(livro.titulo, "Percy Jackson e o Ladrao de Raios");// Coloca o titulo ;)
    livro.disponivel = 1; // O livro sempre começa disponivel ^---^
    
    printf("Antes do emprestimo:\n"); // Mostra o livro antes do emprestimo 
    mostrarLivro(&livro);

    emprestarLivro(&livro);// Envia o endereço do livro para a funçao :) 

    printf("\nDepois do emprestimo:\n");
    mostrarLivro(&livro);

    return 0;
}
