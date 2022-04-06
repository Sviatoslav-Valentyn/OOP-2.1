#pragma once
#include <iostream>
#include <string>
using namespace std;

class Bill
{
	int first;
	double second;
public:
	Bill(); // ����������� �� ����������
	Bill(int, double); // ����������� �����������
	Bill(const Bill&); //���������
	~Bill();

	int GetFirst() const { return first; };
	double GetSecond() const { return second; };
	void SetFirst(int f) { first = f; };
	void SetSecond(double s) { second = s; };
	double Cost(); 

	Bill& operator = (const Bill&); // ���������
	friend istream& operator >> (istream&, Bill&); //�������� � ���������
	friend ostream& operator << (ostream&, const Bill&); //���� �� �����
	operator string() const; //���������� ���� � ������������ � ������� �����

	Bill& operator ++(); // ���������� ��������� (first)
	Bill operator ++(int); // ����������� ��������� (second)
	Bill& operator --(); // ���������� ��������� (first)
	Bill operator --(int); // ����������� ��������� (second)
};
