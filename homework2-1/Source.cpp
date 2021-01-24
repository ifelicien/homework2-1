#include <iostream>
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

//ask for payment amount and return value
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

/*double calcMath(double changeReturn){
	double remainder;


}*/

double display(double change) {
	double twenties = (double)change / 20;
	int total = 20 * twenties;
	double tens = change - total;
	
	cout << change;
	cout << (int)twenties;
	cout << (int)tens;
	//cout << "Twenties: " << (int)twenties << "($" <<(int)twenties * 20 << ")" << endl;
	//cout << "Tens....: " << tens << "($" << tens * 10 << ")" << endl;
	//cout << "Fives...: " << abs(fives) << endl;
	//cout << "Ones....: " << abs(ones) << endl;
	//cout << "Quarters: " << abs(quarters) << endl;
	//cout << "Dimes...: " << abs(dimes) << endl;
	//cout << "Nickels.: " << abs(nickels) << endl;
	//cout << "Pennies.: " << abs(pennies) << endl;

	return 0;
}