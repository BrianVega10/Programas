#include<iostream>
using namespace std;
int main(){
	float pi=3.1416;
	float v,l,r,a,o;
	cout<<"\nVolumen de un cilindro.";
	cout<<"\nIngrese el valor del radio de la base:";
	cin>>r;
	cout<<"\nIngrese la altura del cilindro:";
	cin>>a;
	l=r*r;
	v=pi*l;
	o=v*a;
	cout<<"\nEl volumen del cilindro es:"<<o;
	return 0;
	
}
