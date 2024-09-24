#include "lista.h"

int main(){
    Lista* l;
    l = lista_cria();
    l = lista_insere(l, 23);
    l = lista_insere(l, 45);
    l = lista_insere(l, 67);
    l = lista_insere(l, 89);
    l = inserir_final(l, 100);
    lista_imprime(l);
    remover_final(l);
    lista_imprime(l);
    lista_libera(l);
    return 0;
}