#include<stdlib.h>
#include<stdio.h>
#include<linked_list.h>

int main(){
    if(*lista == NULL)
    {
        novo->proximo = NULL;
        *lista = novo;
     }

    else if(novo->valor < (*lista)->valor){
        novo->proximo = *lista;
        *lista = novo;
    }
    
}
