#include <stdio.h>
	/* ----------------------------------------------------------------------
	 Aidan A. && 
	 "Project 2"  Ver - 3.2
	 Dec 7th, 2020
	 
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
	double unitCost = 0;
	int productAmount = 0;
	int productID = 0;
	const double resistorCost = .5;
	const double capacitorCost = .75;
    const double transistorCost = .75;
	const double icCost = 1.25;
	//--------------
	const double smallResistorDiscount = .05;
	const double smallCapacitorDiscount = .05;
    const double smallTransistorDiscount = .025;
	const double smallICDiscount = .025;
	//--------------
	const double mediumResistorDiscount = .075;
	const double mediumCapacitorDiscount = .075;
    const double mediumTransistorDiscount = .05;
	const double mediumICDiscount = .05;
	//--------------
	const double largeResistorDiscount = .1;
	const double largeCapacitorDiscount = .1;
    const double largeTransistorDiscount = .1;
	const double largeICDiscount = .1;
	//--------------
	double discount = 0;
	double totalCost = 0;
	double grandTotalCost = 0;
	
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
	printf("		|"); printf("		|"); printf("      0-299    |"); printf("     300-499   |"); printf("      500+    |");
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
	printf("Please enter the code of the item you'd like: "); // code
	scanf("%d", &productID);
	printf("Please enter the amount you'd like to purchase: "); // amnt of produce
	scanf("%d", &productAmount);
	if(productID == 0)
	{
		unitCost = resistorCost; // The price for each Resistor is $0.50
	}
	else if(productID == 1)
	{
		unitCost = capacitorCost; // The price for each Capacitor is $0.75
	}
	else if(productID == 2)
	{
		unitCost = transistorCost; // The price for each transistor is $0.75
	}
	else if(productID == 3)
	{
		unitCost = icCost; // The price for each IC is $1.25 
	}	
	// =========================================[Calcs]==================================================================
	
	totalCost = unitCost * productAmount;
	
	//0 	Resistor 	5% 	7.5% 	10%
	//1 	Capacitor 	5% 	7.5% 	10%
	//2 	Transistor 	2.5% 	5% 	10%
	//3 	Integrated Circuits 	2.5% 	5% 	10%
	
	if(productAmount < 300) //----------------------- 0 -299
	{
		if(productID == 0)
		{
			discount = smallResistorDiscount; 
		}
		else if(productID == 1)
		{
			discount = smallCapacitorDiscount; 
		}
		else if(productID == 2)
		{
			discount = smallTransistorDiscount; 
		}
		else if(productID == 3)
		{
			discount = smallICDiscount;  
		}	
	}
	else if(productAmount > 299 && productAmount < 500) //-------------------------------300 - 499 
	{
		if(productID == 0)
		{
			discount = mediumResistorDiscount; 
		}
		else if(productID == 1)
		{
			discount = mediumCapacitorDiscount; 
		}
		else if(productID == 2)
		{
			discount = mediumTransistorDiscount; 
		}
		else if(productID == 3)
		{
			discount = mediumICDiscount; 
		}	
	}
	else if(productAmount > 500) //------------------------------( 500 + )
	{
		if(productID == 0)
		{
			discount = largeResistorDiscount; 
		}
		else if(productID == 1)
		{
			discount = largeCapacitorDiscount; 
		}
		else if(productID == 2)
		{
			discount = largeTransistorDiscount; 
		}
		else if(productID == 3)
		{
			discount = largeICDiscount; 
		}	
	}
	
	grandTotalCost = totalCost - (totalCost * discount);
	
	// ----------------------------------[Prgrm Output]---------------------------------
	
	printf("Your total is %f, you get a discount of %f, your grand total is %f\n", totalCost, discount, grandTotalCost);
		
	return 0;
}
