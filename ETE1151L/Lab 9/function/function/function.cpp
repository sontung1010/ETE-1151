// function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Name:			Tung Do 
// Course:			ETE1151L-02
// Assignment:		Project 08
// Due date:		10/30/2019
// Description: 
//		write code to put out polynomial using struct and function

#include <iostream>
#include <string>
using namespace std;

// polynomial order 2 with coefficients of a, b and c 
struct poly2_t {
	double a;
	double b;
	double c;
};

// polynomial order 4 with coefficients of a, b, c, d, and e
struct poly4_t {
	double a;
	double b;
	double c;
	double d;
	double e;
};

poly2_t read_poly2(string s1) {
	poly2_t p;
	cout << "Enter coefficient of Polynomial " << s1 << ": ";
	cin >> p.a >> p.b >> p.c;
	return p;
}

void print_poly2(string s1, poly2_t p) {
	cout << s1;
	cout << "(" << p.a << ")x^2 + (" << p.b << ")x + (" << p.c << ")\n";
}

poly2_t sum_poly2(poly2_t p1, poly2_t p2) {
	poly2_t ans;
	ans.a = p1.a + p2.a;
	ans.b = p1.b + p2.b;
	ans.c = p1.c + p2.c;
	return ans;
} // poly2_t sum_poly2()

poly4_t read_poly4(string s2) {
	poly4_t p;
	cout << "Enter coefficient of Polynomial " << s2 << ": ";
	cin >> p.a >> p.b >> p.c >> p.d >> p.e;
	return p;
}

void print_poly4(string s2, poly4_t p) {
	cout << s2;
	cout << "(" << p.a << ")x^4 + (" << p.b << ")x^3 + (" << p.c << ")x^2 + (" << p.d << ")x + (" << p.e << ")\n";
} // 1)print polynomial of order 4 similar to print_poly2

poly2_t diff_poly2(poly2_t p1, poly2_t p2) {
	poly2_t ans;
	ans.a = p1.a - p2.a;
	ans.b = p1.b - p2.b;
	ans.c = p1.c - p2.c;
	return ans;
} // 2)write function diff_poly2 to find difference of two polynomials

poly4_t mult_poly2(poly2_t p1, poly2_t p2) {
	poly4_t ans;
	ans.a = p1.a * p2.a;
	ans.b = (p1.a * p2.b) + (p2.a * p1.b);
	ans.c = (p1.a * p2.c) + (p1.b * p2.b) + (p2.a * p1.c);
	ans.d = (p1.b * p2.c) + (p2.b * p1.c);
	ans.e = p1.c * p2.c;
	return ans;
} // 3)write function mult_poly2 to find product of two polynomials of order 2 resulting in a polynomial of order 4

double eval_poly2(poly2_t p, double x) {
	double ans;
	ans = (p.a * x * x) + (p.b * x) + p.c;
	return ans;
} // 4) Evaluate polynomial of order 2

double eval_poly4(poly4_t p, double x) {
	double ans;
	ans = (p.a * x * x * x * x) + (p.b * x * x * x) + (p.c * x * x) + (p.d * x) + p.e;
	return ans;
} // 5) Evaluate polynomial of order 4

int main()
{
	cout << "TUNG DO\n\n";

	poly2_t f1;
	poly2_t f2;
	poly2_t sum;
	poly4_t prod;
	poly2_t diff;
	double ans1;
	double ans2;
	double ans3;
	double ans4;
	double ans5;
	double x;

	cout << "Part 1: Read coefficients of Polynomial 1\n";
	f1 = read_poly2("1");
	cout << "\n";

	cout << "Part 2: Read coefficients of Polynomial 2\n";
	f2 = read_poly2("2");
	cout << "\n";

	cout << "Part 3: Read value of x\n";
	cout << "Enter value of x to evaluate the polynomials: ";
	cin >> x;
	cout << "\n";

	cout << "Part 4: Print polynomials and value of x\n";
	print_poly2("f1 (x) = ", f1);
	print_poly2("f2 (x) = ", f2);
	cout << "Value of x = " << x << "\n\n";

	cout << "Part 5: Print sum, difference and product\n";
	sum = sum_poly2(f1, f2);
	print_poly2("sum(x) = ", sum);
	diff = diff_poly2(f1, f2);
	print_poly2("diff(x) = ", diff);
	prod = mult_poly2(f1, f2);
	print_poly4("prod(x) = ", prod);
	cout << "\n";

	cout << "Part 6: Evaluate polynomials\n";
	ans1 = eval_poly2(f1, x);
	cout << "f1(" << x << ") = " << ans1 << "\n";
	ans2 = eval_poly2(f2, x);
	cout << "f2(" << x << ") = " << ans2 << "\n";
	ans3 = eval_poly2(sum, x);
	cout << "sum(" << x << ") = " << ans3 << "\n";
	ans4 = eval_poly2(diff, x);
	cout << "diff(" << x << ") = " << ans4 << "\n";
	ans5 = eval_poly4(prod, x);
	cout << "prod(" << x << ") = " << ans5 << "\n";


	system("pause");
	return 0;
}

