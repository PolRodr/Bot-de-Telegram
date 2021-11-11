#include <iostream>
#include <cmath>
#include <vector>
using namespace std;



int main ()
{	
	int a;
	cin >> a;
	vector <int> v(a);
	for(int b=0; b < a; ++b) {
		cin >> v[b]; }
		int suma=0;
	for(int c=0; c < a; ++c) {
		suma+=v[c];


	}
	cout << suma << endl;

}


// llegir vector n i sumar totes les posicions del vector i penjar al github