#include "lista.h"
#include <stdlib.h>
#include <stdio.h>


Lista* lista_cria(void){
    return NULL;
}

Lista* lista_insere(Lista* l, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->valor = i;
    novo->prox = l;
    return novo;
}

Lista* inserir_final(Lista* l, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->valor = i;
    novo->prox = NULL;
    if (l == NULL)
    {
        return novo;
    }
    Lista* p;
    for (p = l; p->prox != NULL; p = p->prox)
    {
        p->prox = novo;
    }
    return l;
}

void remover_final(Lista* l){
    Lista* p;
    Lista* t;
    p = l;
    while (p->prox != NULL)
    {
        t = p;
        p = p->prox;
    }
    t->prox = NULL;
    free(p);
}

void lista_imprime(Lista* l){
    Lista* p;
    for (p = l; p != NULL; p = p->prox)
    {
        printf("info = %d\n", p->valor);
    }
}

void lista_libera(Lista* l){
    Lista* p;
    Lista* t;
    p = l;
    while (p != NULL)
    {
        t = p->prox;
        free(p);
        p = t;
    }
}

  
   