// struct example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct product_t {
	int weight;
	double price;
};

// ask user for product and price, return new object 
product_t get_product() {
	
	product_t p;
	cout << "Enter product's weight: ";
	cin >> p.weight;

	cout << "Enter product's price: ";
	cin >> p.price;

	return p;
}		// product_t get_product()

product_t get_product(string s) {

	product_t p;
	cout << "Enter " << s << " 's weight: ";
	cin >> p.weight;

	cout << "Enter " << s << " 's price: ";
	cin >> p.price;

	return p;
}		// product_t get_product()

// write function change_product()
// change weight of the product by weight_x
// change price of the product by price_y
product_t change_product(product_t p, int weight_x, double price_y) {
	product_t new_p;

	new_p.weight = p.weight + weight_x;
	new_p.price = p.price + price_y;

	return new_p;
}

// print content of the object
// it does not return anything. To say that we do not return anything we use the word void
void print_product(product_t p) {
	cout << "product weight = " << p.weight << "\n";
	cout << "product price = " << p.price << "\n";
}	// void print_product 

int main()
{
	product_t apple;
	product_t orange;

	apple = get_product();
	print_product(apple);


	apple = get_product("APPLE");
	print_product(apple);

	cout << "======================================\n";
	orange = get_product();
	print_product(orange);

	product_t melon;
	cout << "enter melon's weight: ";
	cin >> melon.weight;
	cout << "enter melon's price: ";
	cin >> melon.price;
	
	print_product(melon);

	cout << "=======================change melon's weight by 5 and price by 2.10=================\n";
	melon = change_product(melon, 5, 2.10);
	print_product(melon);


	system("pause");
	return 0;
}


