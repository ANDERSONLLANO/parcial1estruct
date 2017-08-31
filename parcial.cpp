#include <iostream>

/**/
	int fibonaci(int num){
		if(num==0||num==1){
			return 1;
		}else{
			return fibonaci(num-1)+fibonaci(num-2);
		}
		
	}

int main() {

	int filas,i,j,num;
	int columnas;
	int fibo[50][50];
	printf("ingrese un valor para la fila \n");
	scanf("%d",&filas);
	printf("ingrese un valor para la columnas \n");
	scanf("%d",&columnas);
	num=filas*columnas;
	for (i=0;i<=filas;i++){
		for (j=0;j<=columnas;j++){
    
			printf("%d ",fibo[i][j]);
			printf("%d",num);
		}
	}
	system("pause");
	return 0;
}
