struct lista
{
    int valor;
    struct lista* prox;
};
typedef struct lista Lista;

Lista* lista_cria(void);
Lista* lista_insere(Lista* l, int i);
Lista* inserir_final(Lista* l, int i);
void remover_final(Lista* l);
void lista_imprime(Lista* l);
void lista_libera(Lista* l);

