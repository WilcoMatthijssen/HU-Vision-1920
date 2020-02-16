#include <iostream>
using namespace std;
typedef unsigned char Intensity;
int main() {
	Intensity A = 10;
	Intensity B = 20;

	cout << "Amount of bytes used to store A " << sizeof(A) << " With the type being " << typeid(A).name() << endl;
	cout << "Amount of bytes used to store B " << sizeof(B) << " With the type being " << typeid(A).name() << endl;
	cout << "Amount of bytes used to store A + B " << sizeof(A + B) << " With the type being " << typeid(A + B).name() << endl;
}