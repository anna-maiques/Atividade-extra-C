#include <stdio.h>
#include <string.h>

typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

// Funcao pro desconto ;)
// Produto* é ponteiro para uma estrutura Produto
void aplicarDesconto(Produto* p, float desc) {
    //calcula desconto :)
    p->preco = p->preco - (p->preco * desc / 100);
}

int main() {
//Cria o produto yayyyy
    Produto prod = {1, "Bolsa", 150.0};

    printf("Preco antes: %.2f\n", prod.preco); // preco original '-'

    aplicarDesconto(&prod, 25.0); //recebe o endereço e aplica um desconto ^-^

    printf("Preco depois: %.2f\n", prod.preco);

    return 0;
}
