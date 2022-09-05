#include<iostream>

using namespace std;

int main()
{
	int x, y, z;
	x = 5;
	y = 6;
	cout << "Without swapt"<< endl;
	cout << x<< endl;
	cout << y<< endl;
	z = x;
	x = y;
	y = z;
	cout << "With swapt" << endl;
	cout << x << endl;
	cout << y << endl;

	return 0;
}