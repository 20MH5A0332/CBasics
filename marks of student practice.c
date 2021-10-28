#include<stdio.h>
void main()
{
	//variable daclaration
	int phy,che,mat,eng,tot;
	
	//initiolization
	phy=72;
	che=84;
	mat=55;
	eng=85;
	
	//calculation
	tot=phy+che+mat+eng;
	
	//output
	printf("Marks in physics\t\t= %d \n",phy);
	printf("Marks in chemistry\t\t= %d\n",che);
	printf("Marks in mathematics\t\t= %d\n",mat);
	printf("Marks in english\t\t= %d\n",eng);
	printf("Total marks of student\t\t= %d\n",tot);
}
