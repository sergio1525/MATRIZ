#include<stdio.h>//multiplicación de matrices
#include<stdlib.h>
int matriz[3][3];
int sub[3][1];
int igual[3][3];
int a,b;
int main()
{
	printf("MULTIPLICACION DE MATRICES\n");
	printf("LA PRIMERA MATRIZ ES DE 3X3\n");
	for(a=0; a<3; a++)//matriz_fila1
	for(b=0; b<3; b++)//matriz_columna1
{
	printf("INTRODUCE LOS VALORES DE LA PRIMERA MATRIZ [%d][%d] :", a,b);
	scanf("%d",&matriz[a][b]);
}
	system("cls");

	printf("LA SEGUNDA MATRIZ ES DE 3X1\n");
	for(a=0; a<3; a++)//sub_fila2
	for(b=0; b<1; b++)//sub_columna2
{
	printf("INTRODUCE LOS VALORES DE LA SEGUNDA MATRIZ [%d] [%d] :", a,b);
	scanf("%d",&sub[a][b]);
}
	system("cls");

		igual[0][0]=sub[0][0]*matriz[0][0];
		igual[1][0]=sub[0][0]*matriz[1][0];
		igual[2][0]=sub[0][0]*matriz[2][0];

		igual[0][1]=sub[1][0]*matriz[0][1];
		igual[1][1]=sub[1][0]*matriz[1][1];
		igual[2][1]=sub[1][0]*matriz[2][1];

		igual[0][2]=sub[2][0]*matriz[0][2];
		igual[1][2]=sub[2][0]*matriz[1][2];
		igual[2][2]=sub[2][0]*matriz[2][2];
		
	printf("EL RESULTADO DE LA MULTIPLICACION ES:\n");
	for(a=0; a<3; a++){
	for(b=0; b<3; b++){
        printf("% d ",igual[a] [b]);
	}
        printf("\n");
	}
	system("PAUSE");
}



