#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int matriz [10][2];
float vetor[10];
int op;
void exibirProduto(){
	for(int i=0;i<10;i++){
		
		for(int j=0;j<1;j++){
			printf("Produto %d: ID = %d ",i+1,matriz[i][j]);
			printf("Quantidade = %d ",matriz[i][j+1]);
		}
		printf("Preco = %.2f",vetor[i]);
	printf("\n");
	}
}
void Preencherdados(){
	for(int i=0;i<10;i++){
		for(int j=0;j<2;j++){
			printf("digita ai a posicao [%d] [%d]: ",i+1,j+1);
			scanf("%d",&matriz[i][j]);
			
		}
		printf("Digite a terceira coluna: ");
		scanf("%f",&vetor[i]);
	}
}
void VenderProduto(){
	printf("Insira o ID do produto: ");
	scanf()
}
void Menu(){
	do{
	printf("Selecione a opcao que deseja realizar: \n1.Exibir Produtos\n2.Vender Produtos\n0.Sair\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			exibirProduto();
			break;
		case 2: 
			VenderProduto();
			break;
		case 0:
			break;
		default:
			printf("Opcao invalida! Tente novamente!\n");
	}
	}while(op!=0);
	printf("Adeus!");
}
int main(){
	Preencherdados();
	do{
		Menu();
	}while(op!=0);
		
}
