#include "Bill.h"
#include <sstream>

Bill::Bill()
{
	first = 0;
	second = 0;
}

Bill::Bill(int f = 0, double s = 0)
{
	if (f > 0 && s > 0)
	{
		first = f;
		second = s;
	}
	else
	{
		first = 0;
		second = 0;
	}
}

Bill::Bill(const Bill& r)
{
	first = r.first;
	second = r.second;
}

Bill::~Bill()
{ }

double Bill::Cost()
{
	return first * second;
}

Bill& Bill::operator = (const Bill& r)
{
	first = r.first;
	second = r.second;

	return *this;
}

istream& operator >> (istream& input, Bill& m)
{
	cout << " first = "; input >> m.first;
	cout << " second = "; input >> m.second;
	cout << endl;

	return input;
}

ostream& operator << (ostream& output, const Bill& l)
{
	output << string(l);
	return output;
}

Bill::operator string() const
{
	stringstream p;
	p << " first = " << first << endl;
	p << " second = " << second << endl;
	return p.str();
}

Bill& Bill::operator ++()
{
	first++;
	return *this;
}

Bill Bill::operator ++(int)
{
	Bill t(*this);
	second++;
	return t;
}

Bill& Bill::operator --()
{
	first--;
	return *this;
}

Bill Bill::operator --(int)
{
	Bill t(*this);
	second--;
	return t;
}