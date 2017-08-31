#include <stdio.h>
#include <conio.h>
struct productos {
	int cant_sale;
	float price_unit;
	float importe;
};

struct provedores{
	char nombre[40];
	char telephone[10];
	char direction [20];
	productos producto;
};
int cant_provedo;
void pedir_datos(){
	provedores provedor;
	productos produc;
	int a;
	printf("CUANTOS PROVEEDORES DESEA AGREGAR \n");
	scanf("%d",&cant_provedo);
	fflush(stdin);
	for (a=1;a<=cant_provedo;a++){
		printf("ESCRIBA EL NOMBRE DEL PROVEDOR \n");
			fgets(provedor.nombre,41,stdin);
			fflush(stdin);
		printf("ESCRIBA EL TELEFONO DEL PROVEDOR \n");		
			fgets(provedor.telephone,10,stdin);
			fflush(stdin);
			
		printf("INGRESE LA CANTIDAD VENDIDA \n");		
			scanf("%d",&provedor.producto.cant_sale);
			fflush(stdin);
			
		printf("INGRESE EL PRECIO UNITARIO \n");		
			scanf("%f",&provedor.producto.price_unit);
			fflush(stdin);
			
		getch();
	}	
	}

void mostrar(){
	provedores provedor;
	productos produc;
	int a;
	printf(" NOMBRE              TELEFONO \n");
	for (a=1;a<=cant_provedo;a++){	
	printf("%s  \n",provedor.nombre );
	printf("%s \n",provedor.telephone);
	printf("%s \n",provedor.producto.cant_sale);
	printf("%f \n",produc.importe=produc.cant_sale*produc.price_unit);
	getch();
}
}
char productos[50];
int main(int argc, char** argv) {
		pedir_datos();
		mostrar();
	return 0;
}
