// homework due 10.28.2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Name:			Tung Do		
// Course:			ETE1151-02
// Assignment:		Homework 4
// Due date:		10/28/2019
// Description: 
//		write code to use print_product(product_t p, string s)

#include <iostream>
#include <string>
using namespace std;

struct product_t {
	double weight;
	double price;
};

product_t get_product(string s) {

	product_t p;
	cout << "Enter " << s << "'s weight: ";
	cin >> p.weight;

	cout << "Enter " << s << "'s price: ";
	cin >> p.price;

	return p;
}		// product_t get_product()

product_t change_product(product_t p, int weight_x, double price_y) {
	product_t new_p;

	new_p.weight = p.weight + weight_x;
	new_p.price = p.price + price_y;

	return new_p;
}

void print_product(product_t p, string s) {
	cout << s << "'s weight = " << p.weight << "\n";
	cout << s << "'s price = " << p.price << "\n";
}	// void print_product 

int main()
{
	product_t apple;
	product_t orange;
	product_t melon;

	cout << "TUNG DO\n\n";

	apple = get_product("apple");
	print_product(apple, "apple");

	cout << "======================================\n";
	orange = get_product("orange");
	print_product(orange, "orange");

	cout << "======================================\n";
	melon = get_product("melon");
	print_product(melon, "melon");

	cout << "=======================change melon's weight by 5 and price by 2.10=================\n";
	melon = change_product(melon, 5, 2.10);
	print_product(melon, "melon");

	system("pause");
	return 0;
}