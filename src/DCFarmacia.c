/*
 ============================================================================
 Name        : DCFarmacia.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Produto.h"
#include <string.h>

void cadastraRemedio(ProdutoList *l);
void removeRemedio(ProdutoList *l);


int main(void) {
    ProdutoList l;
    initList(&l);
    
    printf("Bem vindo ao sistema DCFarmacia! Aqui você terá controle sobre o que está  acontecendo com seu estoque farmaceutico\n\n\n-----------------------------------------------------\n\n");
    int op;
    do{
        printf("Menu\n\n1 - Cadastro Usuario\n2 - Editar Usuario\n3 - Remover Usuario\n4 - Cadastrar Remedio\n5 - Editar Remedio\n6 - Remover Remedio\n0 - Sair");
        printf("\n\nOp: "); scanf("%d",&op);
        switch (op) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                cadastraRemedio(&l);
                break;
            case 5:
                break;
            case 6:
                break;
            case 0:
                printf("\n\nObrigado pela preferência!");
                break;
                
        }
    }while(op!=0);
    
    
    return EXIT_SUCCESS;
}

void cadastraRemedio(ProdutoList *l){
    Produto p;
    printf("\n\n\nCadastro de remédio\n--------------------------------------------------------------");
    int id;
    printf("\nID: "); scanf("%d%*c",&id);
    p.idProduto=id;
    

    printf("Descricao: "); gets(p.desc);
    
    float preco;
    printf("Preco: "); scanf("%f",&preco);
    p.preco=preco;
    
    int qtd;
    do{
        printf("Qtd: "); scanf("%d",&qtd);
    }while (qtd<1);
    
    int i;
    for(i=0;i<qtd;i++){
        Produto pNovo=p;
        pNovo.idProduto+=i;
        if(add(l, pNovo))
            printf("\n\nProduto cadastrado com sucesso!");
        else {
            printf("\n\nErro no cadastro do produto!");
        }
    }
    
}

void removeRemedio(ProdutoList *l){
    
}


