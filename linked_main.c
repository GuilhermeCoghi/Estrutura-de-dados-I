#include<stdio.h>
#include<stdlib.h>
#include "linked_list.h"
int main(){

    LinkedList *Lista = List_Create();

/* ADD NO INICIO FUNCIONANDO:
/*
    printf("Adicionando pelo Inicio:\n");
    Add_First(Lista, 2);
    print(Lista);
    Add_First(Lista, 0);
    print(Lista);
    Add_First(Lista, 0);
    print(Lista);
    Add_First(Lista, 2);
    print(Lista);
*/
    add(Lista, 2);
    printf("\n");
*/
    printf("Adicionando pelo Fim\n");
    add_Last(Lista, 2);
    print(Lista);
    add(Lista, 0);
    add_Last(Lista, 0);
    print(Lista);
    add(Lista, 2);
    add_Last(Lista, 2);
    print(Lista);
    add(Lista, 2);
    add_Last(Lista, 2);
    print(Lista);

    return 0;
}