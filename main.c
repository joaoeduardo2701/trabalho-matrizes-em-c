#include <stdio.h>
#include <locale.h>

void menu(){
	printf("Escolha a opera��o que deseja efetuar em sua matriz: \n");
	printf("[ 1 ] Adi��o\n");
	printf("[ 2 ] Subtra��o\n");
	printf("[ 3 ] Multiplica��o\n");
	printf("[ 4 ] Matriz Transposta\n");
	printf("-> ");
}

int main() {
	setlocale(LC_ALL, "Portuguese"); // Mudando para o idioma portugu�s
	
	printf("Professor: Marcelo Goulart\n");
	printf("Alunos: Erick, Gabriel, Gustavo, Jamile Fran�a, Jo�o Eduardo,\nJo�o Vitor Campi, Lucas, Vitor Ribeiro\n");
	printf("Turma: 0102N\n");
	
	int linhasA, colunasA;
	
	printf("Digite o tamanho da matriz A(ex: 3 3): ");
	scanf("%d %d", &linhasA, &colunasA);
	
    int matrizA[linhasA][colunasA], i, j, escolha_usuario;
	
    // Loop para inserir os elementos da matriz A
    for (i = 0; i < linhasA; i++) {
        for (j = 0; j < colunasA; j++) {
            printf("Digite o elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    
    // Mostrar a matriz A inserida pelo usu�rio
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
	
    // Mostrar a matriz B inserida pelo usu�rio
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
	
	switch(escolha_usuario){
		case 1:
			if(linhasA == colunasA && linhasB == colunasB){
				printf("A soma das matrizes A e B �:\n");
			
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
				printf("N�o � poss�vel somar duas matrizes que n�o s�o do mesmo tamanho");
			}
			
		    
			break;
		case 2:
			if(linhasA == colunasA && linhasB == colunasB){
				printf("A subra��o das matrizes A e B �:\n");
				
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
		case 3:
			printf("Multiplica��o ");
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
			printf("Por favor insira uma op��o v�lida!\n");
			break;
	}
	
    return 0;
}
