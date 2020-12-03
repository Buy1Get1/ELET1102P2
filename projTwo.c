#include <stdio.h>
	/* ----------------------------------------------------------------------
	 Aidan A. && 
	"Project 2"  Ver - 0.1
	Nov 23rd, 2020
	 
	print table
	prompt the user for the quantity, component number and unit cost,
	read in the quantity, component number and unit cost,
	display the original price and discount offered along with the 
	total discounted price

 
Display the total price from all the elements purchased.
Item Number 	Description 	

Discount 
0 -299
	Discount
300 - 499 	Discount
( 500 + )
0 	Resistor 	5% 	7.5% 	10%
1 	Capacitor 	5% 	7.5% 	10%
2 	Transistor 	2.5% 	5% 	10%
3 	Integrated Circuits 	2.5% 	5% 	10%

The price for each Resistor is $0.50
The price for each Capacitor is $0.75
The price for each transistor is $0.75
The price for each IC is $1.25 
	};-------------------------------------------------------------------------------*/

int main(void)
{			
	//THE HEAP!!
	const int masterLength = 80;
	
	
	
	// =========================================[Data Table]============================================================
	for(int i = 0; i < masterLength; i++)
	{
		printf("-");
	}
	printf("\n| ");  // my dividers --v
	printf("		|"); printf("		|"); printf("		|"); printf("		|"); printf("		|"); 
	printf("\n| ");
	printf(" Item Number  |"); printf("  Description  |"); printf("    Discount   |"); printf("    Discount   |"); printf("    Discount  |"); 
	printf("\n| ");													   //0-299						300-499				500+
	printf("		|"); printf("		|"); printf("      0-299    |"); printf("     300-499   |"); printf("      500+    |"); s
	for(int i = 0; i < masterLength; i++) // another one
	{
		printf("-");
	}
	printf("\n| ");
	printf("     0        |"); printf("   Resistor    |"); printf("    5 Percent  |"); printf("   7.5 Percent |"); printf("   10 Percent |");
	for(int i = 0; i < masterLength; i++) // https://www.youtube.com/watch?v=jEI3N9kIyP4
	{
		printf("-");
	}
	printf("\n| ");
	printf("     1        |"); printf("   Capacitor   |"); printf("   5 Percent   |"); printf("   7.5 Percent |"); printf("   10 Percent |");
	for(int i = 0; i < masterLength; i++) // https://www.youtube.com/watch?v=jEI3N9kIyP4
	{
		printf("-");
	}
	printf("\n| ");
	printf("     2        |"); printf("   Transistor  |"); printf("   2.5 Percent |"); printf("   5 Percent   |"); printf("   10 Percent |");
	for(int i = 0; i < masterLength; i++) // https://www.youtube.com/watch?v=jEI3N9kIyP4
	{
		printf("-");
	}
	printf("\n| ");
	printf("     3        |"); printf("      IC's     |"); printf("   2.5 Percent |"); printf("   5 Percent   |"); printf("   10 Percent |");
	for(int i = 0; i < masterLength; i++) // https://www.youtube.com/watch?v=jEI3N9kIyP4
	{
		printf("-");
	}
	// -------------------------------------------[User Input]-----------------------------------------------------------
	printf("\n");
	printf("\n");
	printf("Please enter the code of the thing u want: ");
	scanf("%d", productID);
	printf("Please enter the code of the thing u want: ");
	scanf("%d", conspAmnt);
	printf("Please enter the code of the thing u want: ");
	scanf("%d", );
	
	
//printf("Resistor");s
//printf("Capacitor");
//printf("Transistor");
//Integrated Circuits
           	
		
	return 0;
}
