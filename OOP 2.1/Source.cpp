#include "Bill.h"
#include <iostream>
using namespace std;

int main()
{
	Bill z (1, 1);
	Bill a (1, 1);
	cout << z++ << endl;
	cout << z << endl;
	cout << ++z << endl;
	cout << z << endl;

	Bill x;
	cout << "Input point  " << endl;
	cin >> x;

	cout << "Cost = " << x.Cost() << endl;
	cin.get();
	return 0;
}