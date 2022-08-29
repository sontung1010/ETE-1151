// lab 3 invoice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Name:		Tung Do
// Course:		ETE1151L-02
// Assignment:	Project 02
// Due date:	9/18/2019
// Description:	
//		Writing codes to print out an invoice and read data from keyboard 
#include <iostream>

#define NAME1_SIZE		37	
#define COMPANY_ADDRESS_LINE_1_SIZE		37
#define CITY_STATE_COUNTRY_SIZE		37
#define ZIP_CODE_SIZE		37
#define NAME2_SIZE		29
#define ADDRESS_LINE_1_SIZE			29
#define ADDRESS_LINE_2_SIZE			29
#define INVOICE_NUMBER_SIZE		8
#define INVOICE_DATE_SIZE		8
#define PO_NUMBER_SIZE		8
#define DUE_DATE_SIZE		8
#define QUANTITY1_SIZE		8
#define QUANTITY2_SIZE		8
#define ITEM1_DESCRIPTION_SIZE		38
#define ITEM2_DESCRIPTION_SIZE		38
#define ITEM1_UNIT_COST_SIZE		10
#define ITEM2_UNIT_COST_SIZE		10
#define SALES_TAX_RATE_SIZE			10


int main()
{
	char name1[NAME1_SIZE + 1];
	printf("Enter your name here: ");
	gets_s(name1);

	char company_address[COMPANY_ADDRESS_LINE_1_SIZE + 1];
	printf("Enter the Company address here: ");
	gets_s(company_address);

	char city_state_country[CITY_STATE_COUNTRY_SIZE + 1];
	printf("Enter the City, State, Country here: ");
	gets_s(city_state_country);

	char zip[ZIP_CODE_SIZE + 1];
	printf("Enter the Company's zip code here: ");
	gets_s(zip);

	char name2[NAME2_SIZE + 1];
	printf("Enter the customer's name here: ");
	gets_s(name2); 

	char address_line1[ADDRESS_LINE_1_SIZE + 1];
	printf("Enter the customer's address line 1 here: ");
	gets_s(address_line1); 

	char address_line2[ADDRESS_LINE_2_SIZE + 1];
	printf("Enter the customers's address line 2 here: ");
	gets_s(address_line2);


	char invoice_number[INVOICE_NUMBER_SIZE + 1];
	printf("Enter the invoice number here: ");
	gets_s(invoice_number); 

	char invoice_date[INVOICE_DATE_SIZE + 1];
	printf("Enter the invoice date here (mmddyyyy): ");
	gets_s(invoice_date); 

	char PO[PO_NUMBER_SIZE + 1];
	printf("Enter the P.O. number here: ");
	gets_s(PO);

	char due_date[DUE_DATE_SIZE + 1];
	printf("Enter the due date here (mmddyyyy): ");
	gets_s(due_date);

	int quantity1;
	printf("Enter the quantity 1 here: ");
	scanf_s("%5d", &quantity1);
	getchar( );

	char item1_description[ITEM1_DESCRIPTION_SIZE + 1];
	printf("Enter the item 1 description here: "); 
	gets_s(item1_description); 

	double item1_unit_cost;
	printf("Enter item 1's unit cost here: "); 
	scanf_s("%lf", &item1_unit_cost);
	getchar( );

	double amount1;

	int quantity2;
	printf("Enter the quantity 2 here: "); 
	scanf_s("%5d", &quantity2); 
	getchar( );

	char item2_description[ITEM2_DESCRIPTION_SIZE + 1];
	printf("Enter the item 2 description here: "); 
	gets_s(item2_description);

	double item2_unit_cost;
	printf("Enter item 2's unit cost here: "); 
	scanf_s("%lf", &item2_unit_cost); 
	getchar( );

	double amount2;

	double subtotal;

	double sales_tax_rate;
	printf("Enter the sales tax rate here: "); 
	scanf_s("%lf", &sales_tax_rate); 
	getchar( );

	double sales_tax;

	double total;

	amount1 = quantity1 * item1_unit_cost;
	amount2 = quantity2 * item2_unit_cost;
	subtotal = amount1 + amount2;
	sales_tax = (sales_tax_rate * subtotal) / 100;
	total = subtotal + sales_tax;

	

	printf("         1         2         3         4         5         6         7         8\n");
	printf("12345678901234567890123456789012345678901234567890123456789012345678901234567890\n");
	printf("[%-38s]                                 INVOICE\n", name1);
	printf("[%-38s]\n", company_address);
	printf("[%-38s]\n", city_state_country);
	printf("[%-38s]\n", zip);
	printf("\n");
	printf("Bill to                                                     Invoice#  [%8s]\n", invoice_number);
	printf("[Bill to %-30s]                Invoice Date  [%8s]\n", name2, invoice_date);
	printf("[Bill to %-30s]                       P.O.#  [%8s]\n", address_line1, PO);
	printf("[Bill to %-30s]                    Due Date  [%8s]\n", address_line2, due_date);
	printf("\n");
	printf("+=======+========================================+============+================+\n");
	printf("+  QTY  | DESCRIPTION                            | UNIT PRICE |        AMOUNT  |\n");
	printf("+=======+========================================+============+================+\n");
	printf("+%5d  | %-39s| $%9.2lf | $%12.2lf  |\n", quantity1, item1_description, item1_unit_cost, amount1);
	printf("+-------+----------------------------------------+------------+----------------+\n");
	printf("+%5d  | %-39s| $%9.2lf | $%12.2lf  |\n", quantity2, item2_description, item2_unit_cost, amount2);
	printf("+-------+----------------------------------------+------------+----------------+\n");
	printf("                                                     Subtotal | $%12.2lf  |\n", subtotal);
	printf("                                                              +----------------+\n");
	printf("                                               Sales Tax Rate |%13.2lf%%  |\n", sales_tax_rate);
	printf("                                                    Sales Tax | $%12.2lf  |\n", sales_tax);
	printf("                                                              +----------------+\n");
	printf("                                                       TOTAL  | $%12.2lf  |\n", total);
	printf("                                                              +----------------+\n");

	system("pause");
	return 0;
}


