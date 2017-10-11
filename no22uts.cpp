#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a;
	double b,c;
	cin>>a;
	b = a+2;
	if (b > 4){
		c = pow(b, 5.00);
	}
	else {
		c = log(a+b);
	}
	cout<<a<<" "<<c<<endl;

	return 0;
}