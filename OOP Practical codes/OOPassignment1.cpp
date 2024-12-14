#include <iostream>
using namespace std;
class Complex
{
	int real;
	int imag;
public:
	Complex()
	{
		real=0;
		imag=0;
		cout<<"Default constructor value:"<<real<<"+"<<imag<<"i"<<endl;
	}
	Complex operator+(Complex b)
	{
		Complex temp;
		temp.real=real+b.real;
		temp.imag=imag+b.imag;
		cout<<"Addition is: "<<temp.real<<"+"<<temp.imag<<"i"<<endl;
		return temp;
	}
	Complex operator*(Complex b)
	{
		Complex temp;
		temp.real=(real*b.real)-(imag*b.imag);
		temp.imag=(real*b.imag)+(imag*b.real);
		cout<<"Multiplication is: "<<temp.real<<"+"<<temp.imag<<"i"<<endl;
		return temp;
	}
friend ostream &operator<<(ostream &output,Complex &m);
friend istream &operator>>(istream &input,Complex &m);
};
ostream &operator<<(ostream &output, Complex &m){
	output<<"\n"<<m.real<<"+"<<m.imag<<"i"<<endl;
	return output;
}
istream &operator>>(istream &input, Complex &m){
	input>>m.real>>m.imag;
	return input;
}


int main()
{
	Complex a;
	cout<<"Enter 1st Complex number: "<<endl;
	cin>>a;
	Complex b;
	cout<<"Enter 2nd Complex number: "<<endl;
	cin>>b;
	cout<<"1st complex number: "<<a<<endl;
	cout<<"2nd complex number: "<<b<<endl;
	Complex c=a+b;
	Complex d=a*b;
	return 0;
}