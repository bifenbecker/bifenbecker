#include <iostream>

using namespace std;

struct complex {
	float re;
	float im;

};
complex read() {
	complex x;
	cout << "Enter a complex number: " << endl;
	cin >> x.re;
	cin >> x.im;
	return x;
};
void print(complex c) {
	cout << endl << c.re;
	if (c.im < 0) {
		cout << c.im << "i ";
	}
	else {
		cout << "+" << c.im << "i ";
	}
}
complex add(complex a,complex b) {
	complex c;
	c.re = a.re + b.re;
	c.im = a.im + b.im;
	return c;
}
int main()
{
	
	complex x1,x2;
	x1 =  read();
	x2 = read();
	print(add(x1, x2));
	return 0;
}

