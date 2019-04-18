#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


    struct lista
    {
        int info;
        struct lista* prox;
    };

typedef struct lista Lista;

Lista* lst_cria()
{
    return NULL;
}

Lista* lst_insere (Lista* l, int i)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo -> info = i;
    novo -> prox = l;
    return novo;
}

void lst_imprime (Lista* l)
{
    do{
        printf ("%d\t",l->info);
        l=l->prox;
    }while (l != NULL);
}

int main ()
{
Lista* l;
l=lst_cria();
l=lst_insere(l,23);
l=lst_insere(l,45);
lst_imprime(l);

system ("PAUSE");
}


