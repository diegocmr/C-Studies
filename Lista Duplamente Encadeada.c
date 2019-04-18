#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

struct lista
{
    int info;
    struct lista* ant;
    struct lista* prox;
};

typedef struct lista duplamente_encadeada;

duplamente_encadeada* cria_lista()
{
    duplamente_encadeada* p = (duplamente_encadeada*) malloc (sizeof(duplamente_encadeada));
    p->prox=NULL;
    return NULL;
}

duplamente_encadeada* insere_lista(char c, duplamente_encadeada* prox)
{
    duplamente_encadeada* p = (duplamente_encadeada*) malloc (sizeof(duplamente_encadeada));
    p->prox=prox;
    p->info=c;
    prox->ant=p;
    
    return p;
}

void troca(duplamente_encadeada* p)
{
    char c;
    fflush(stdin);
    c=getch();
    
    while (c==37)
    {
        if (p->ant=!NULL)
        {
        printf("ESQ<=\t%c\t=>DIR", p->ant);    
        }
        c=getch();
        system("cls");
    }
    
        while (c==39)
    {
        if (p->prox=!NULL)
        {
        printf("ESQ<=\t%c\t=>DIR", p->prox)    ;
        }
        c=getch();
        system("cls");
    }
    
        while (c==27)
        {
            return;
        }
}


int main()
{
        char c;
        duplamente_encadeada* p;
        
        setlocale (LC_ALL, "");
        printf("Digite os números a serem gravados, ENTER para confirmar lista, ESC para sair.\n");
        p=cria_lista();
        
        fflush(stdin);
        c=getch();
        while (c=!13)
        {
            printf("\n%c",c);
            p=insere_lista(c,p);
            fflush(stdin);
            c=getch();
        }
        
        troca(p);
        
        return 10;
        
        
        
}


