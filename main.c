#include <stdio.h>
#include <locale.h>

void menu(){
	printf("Escolha a operação que deseja efetuar em sua matriz: \n");
	printf("[ 1 ] Adição\n");
	printf("[ 2 ] Subtração\n");
	printf("[ 3 ] Multiplicação\n");
	printf("[ 4 ] Matriz Transposta\n");
	printf("-> ");
}
/*
int **AlocaMatriz(int m, int n){
	int **M;
	int i;
	
	M = (int **)malloc(sizeof(int *)*m);
	
	if(M == NULL){
		printf("Memória insuficiente!\n");
		exit(1);
	}
	
	for(i = 0;i < m; i++){
		M[i] = (int *)malloc(sizeof(int)*n);
		if(M[i] == NULL){
			printf("Memoria insuficiente\n");
			exit(1);
		}
	}
	return M;
}

void LiberaMatriz(int **M, int m){
  	int i;
  	for(i = 0; i < m; i++)
    	free(M[i]);
  	free(M);
}
*/
int main() {
	setlocale(LC_ALL, "Portuguese"); // Mudando para o idioma português
	
	printf("Professor: Marcelo Goulart\n");
	printf("Alunos: Erick, Gabriel, Gustavo, Jamile França, João Eduardo,\nJoão Vitor Campi, Lucas, Vitor Ribeiro\n");
	printf("Turma: 0102N\n");
	
	int linhasA, colunasA;
	
	printf("Digite o tamanho da matriz A(ex: 3 3): ");
	scanf("%d %d", &linhasA, &colunasA);
	
    int matrizA[linhasA][colunasA], i, j, k, escolha_usuario, soma_produto;
	
    // Loop para inserir os elementos da matriz A
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasA; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    // Mostrar a matriz A inserida pelo usuário
    printf("\nMatriz inserida:\n");
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasA; j++) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    int linhasB, colunasB;
    
    printf("Digite o tamanho da matriz B(ex: 3 3): ");
	scanf("%d %d", &linhasB, &colunasB);
	
	
	int matrizB[linhasB][colunasB];
	// Loop para inserir os elementos da matriz B
	for (i = 0; i < linhasB; i++) {
        for (j = 0; j < colunasB; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }
	
    // Mostrar a matriz B inserida pelo usuário
    printf("\nMatriz inserida:\n");
    for (i = 0; i < linhasB; i++) {
        for (j = 0; j < colunasB; j++) {
            printf("%d\t", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\n");
	
	menu();
	
	int matrizresultado[linhasA][colunasA];
	
	scanf("%d", &escolha_usuario);
	
	int matriz_res[colunasA][linhasB];
	switch(escolha_usuario){
		case 1:
			if(linhasA == colunasA && linhasB == colunasB){
				printf("A soma das matrizes A e B é:\n");
			
			for(i = 0;i <= linhasA;i++){
				for(j = 0;j <= colunasB;j++){
					matrizresultado[i][j] = matrizA[i][j] + matrizB[i][j];
				}
			}
			
		    for (i = 0; i < linhasA; i++) {
		        for (j = 0; j < colunasB; j++) {
		            printf("%d\t", matrizresultado[i][j]);
		        }
		        printf("\n");
		    }
		    printf("\n");
			} else {
				printf("Não é possível somar duas matrizes que não são do mesmo tamanho");
			}
			
		    
			break;
		case 2:
			if(linhasA == colunasA && linhasB == colunasB){
				printf("A subração das matrizes A e B é:\n");
				
				for(i = 0;i <= linhasA;i++){
					for(j = 0;j <= colunasB;j++){
						matrizresultado[i][j] = matrizA[i][j] - matrizB[i][j];
					}
				}
				
			    for (i = 0; i < linhasA; i++) {
			        for (j = 0; j < colunasB; j++) {
			            printf("%d\t", matrizresultado[i][j]);
			        }
			        printf("\n");
			    }
			    printf("\n");
			}
		    
			break;
		case 3: // Multiplicação
			
			
			if(colunasA == linhasB){
				for(i = 0; i < linhasA; i++){
					for(j = 0; i < colunasB; i++){
						for(k = 0; k < linhasB; k++){
							matriz_res[i][j] += matrizA[i][k] * matrizB[k][j];
						}
						
					}
				}
				
				printf("Imprimindo a matriz resultado da multiplicação\n");
			    for (i = 0; i < linhasA; i++) {
			        for (j = 0; j < colunasB; j++) {
			            printf("%d\t", matriz_res[i][j]);
			        }
			        printf("\n");
			    }
			    
			    printf("\n");
			}else{
				printf("Não é possível fazer multiplicação de matrizes com a quantidade de valores da coluna A diferentes da linha B\n");
			}
			
			break;
		case 4:
			printf("Matriz Transposta de A:\n");
			
			for (i = 0; i < linhasA; i++) {
		        for (j = 0; j < colunasA; j++) {
		            printf("%d\t", matrizA[j][i]);
		        }
		        printf("\n");
		    }
		    printf("\n");
		    
		    
		    printf("Matriz Transposta de B:\n");
		    for (i = 0; i < linhasB; i++) {
		        for (j = 0; j < colunasB; j++) {
		            printf("%d\t", matrizB[j][i]);
		        }
		        printf("\n");
		    }
		    printf("\n");
			
			break;
		default:
			printf("Por favor insira uma opção válida!\n");
			break;
	}
	
    return 0;
}

