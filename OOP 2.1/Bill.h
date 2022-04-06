#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bill
{
	int first;
	double second;
public:
	Bill(); // конструктор за умовчанням
	Bill(int, double); // конструктор ініціалізації
	Bill(const Bill&); //копіювання
	~Bill();

	int GetFirst() const { return first; };
	double GetSecond() const { return second; };
	void SetFirst(int f) { first = f; };
	void SetSecond(double s) { second = s; };
	double Cost(); 

	Bill& operator = (const Bill&); // присвоєння
	friend istream& operator >> (istream&, Bill&); //введення з клавіатури
	friend ostream& operator << (ostream&, const Bill&); //вивід на екран
	operator string() const; //приведення типу – перетворення у літерний рядок

	Bill& operator ++(); // префіксний інкремент (first)
	Bill operator ++(int); // постфіксний інкремент (second)
	Bill& operator --(); // префіксний декремент (first)
	Bill operator --(int); // постфіксний декремент (second)
};
