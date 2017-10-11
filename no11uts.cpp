#include <iostream>
using namespace std;

int main(){
	int bonus;
	cin>>bonus;
	if (bonus > 6000){
		cout<<"Mendapatkan bonus Rp. 20.000.000"<<endl;
	}
	else if (bonus > 3000 && bonus <= 6000){
		cout<<"Mendapatkan bonus Rp. 10.000.000"<<endl;
	}
	else if (bonus > 1000 && bonus <= 3000){
		cout<<"Mendapatkan bonus Rp. 5.000.000"<<endl;
	}
	else if (bonus < 3000){
		cout<<"Mendapatkan bonus Rp. 2.500.000"<<endl;
	}
	else {
		cout<<"tidak dapat bonus"<<endl;
	}

	return 0;
}