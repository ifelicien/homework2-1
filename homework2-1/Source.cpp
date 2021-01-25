#include <iostream>
#include <iomanip>
using namespace std;

double purchaseInput(void);
double paymentInput(void);
double userChange(double,double);
double calcmath(double);
double display(double);


int main() {
	double purchase, pmt, changeReturn;

	purchase = purchaseInput();
	pmt = paymentInput();

	changeReturn = userChange(purchase, pmt);
	//calcMath(changeReturn);

	display(changeReturn);

	return 0;
}

// ask for purchase amount and return value
double purchaseInput(void) {
	double purchaseAmt;

	cout << "Please enter the total purchase amount: ";
	cin >> purchaseAmt;

	return purchaseAmt;
}

// ask for payment amount and return value
double paymentInput(void) {
	double payment;

	cout << "Enter the amount paid by customer.....: ";
	cin >> payment;

	return payment;
}

//
double userChange(double purchase, double pmt) {
	
	double change = pmt - purchase;

	cout << "\nTotal Purchase Amount: $" << purchase << endl;
	cout << "Payment..............: $" << pmt << endl;

	cout << "\nChange : " << change << "\n" << endl;

	int twenties = (int)change % 20;

	return change;
}

double display(double change) {
	double difference = change;

	int twenties = difference / 20;
	difference = difference - (twenties * 20);
	int tens = difference / 10;
	difference = difference - (tens * 10);
	int fives = difference / 5;
	difference = difference - (fives * 5);
	int ones = difference / 1;
	difference = difference - (ones * 1);
	int quarters = difference / .25;
	difference = difference - (quarters * .25);
	int dimes = difference / .10;
	difference = difference - (dimes * .10);
	int nickels = difference / .05;
	difference = difference - (nickels * .05);
	int pennies = difference / .01;
	difference = difference - (pennies * .01);


	cout << "Twenties: " << twenties << "($" <<twenties * 20 << ")" << endl;
	cout << "Tens....: " << tens << "($" << tens * 10 << ")" << endl;
	cout << "Fives...: " << fives << "($" << fives * 5 << ")" << endl;
	cout << "Ones....: " << ones << "($" << ones * 1 << ")" << endl;
	cout << "Quarters: " << quarters << "($" << quarters * .25 << ")" << endl;
	cout << std::fixed;
	cout << "Dimes...: " << dimes << "($" << setprecision(2) << dimes * .10 << ")" << endl;
	cout << "Nickels.: " << nickels <<  "($" << std::setprecision(2) << nickels * .05 << ")" << endl;
	cout << "Pennies.: " << pennies << "($" << std ::setprecision(2) << pennies * .01 << ")" << endl;

	return 0;
}