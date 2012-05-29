/*
 * Usuario.h
 *
 *  Created on: 28/05/2012
 *      Author: caio
 */

#include <stdbool.h>

#ifndef USUARIO_H_
#define USUARIO_H_



typedef struct{
    int idProduto;
    char desc[150];
    float preco;
}Produto;

typedef struct tPElement{
    Produto p_value;
    struct tPElement* next;
} PNode;

typedef struct{
    
    PNode *firstNode;
    PNode *currentNode;
    
}ProdutoList;

void initList(ProdutoList *l);
bool add(ProdutoList *l,Produto n);
PNode *get(ProdutoList l,int pos);
int size(ProdutoList l);
void removeAtPos(ProdutoList *l,int pos);
void listaProdutos(ProdutoList l);

#endif /* USUARIO_H_ */
