/*
 * Produto.c
 *
 *  Created on: 28/05/2012
 *      Author: caio
 */

#include "Produto.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

void initList(ProdutoList *l){
    l->firstNode=NULL;
    l->currentNode=NULL;
}

bool add(ProdutoList* l,Produto n){
    if(l->firstNode==NULL){
        PNode* e=(PNode *)malloc(sizeof(PNode));
        if(e==NULL)
            return false;
        else {
            e->p_value=n;
            e->next=NULL;
            
            l->firstNode=e;
            l->currentNode=e;
        }
    } else {
        PNode* e=(PNode *)malloc(sizeof(PNode));
        if(e==NULL)
            return false;
        else {
            e->p_value=n;
            e->next=NULL;
            
            l->currentNode->next=e;
            l->currentNode=e;
        }
        
    }
    
    return true;
}

PNode* get(ProdutoList l,int pos){
    int i=0;
    PNode* currentElement=l.firstNode;
    while(i<pos && currentElement!=NULL){
        currentElement=currentElement->next;
        i++;
    }
    
    return currentElement;
}

int size(ProdutoList l){
    int i=0;
    PNode* currentElement=l.firstNode;
    while(currentElement!=NULL){
        currentElement=currentElement->next;
        i++;
    }
    
    return i;
}

void removeAtPos(ProdutoList* l,int pos){
    int i=0;
    PNode* currentElement=l->firstNode;
    PNode* lastElement=NULL;
    while(currentElement!=NULL){
        if(i==pos){
            lastElement->next=currentElement->next;
            
            free(currentElement);
            
            return; 
            
            
        }        
        lastElement=currentElement;
        
        currentElement=currentElement->next;
        i++;
    }
}

void printProduto(Produto p){
    printf("\n\nID: %d\nDescricao: %s\nPreco: %f",p.idProduto,p.desc,p.preco);
}

void listaProdutos(ProdutoList l){
    PNode *current=l.firstNode;
    while (current!=NULL) {
        printProduto(current->p_value);
        current=current->next;
        system("pause");
    }
}


