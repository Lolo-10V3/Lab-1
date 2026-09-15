#include <iostream>

using namespace std;    

int main(){

	double base , tsales , crate , tsalary;
	cout << "Enter the base salary: "<<endl;
	cin >> base;
	cout << "Enter the total sales: "<<endl;
	cin >> tsales;
	cout << "Enter the commission rate: "<<endl;
	cin >> crate;
	tsalary = base + (tsales * crate);
	cout << "The total salary is: " << tsalary << endl;

}
