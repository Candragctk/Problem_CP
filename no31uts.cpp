#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n;
	double jumlah = 0.00;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		jumlah += i/(pow(2, i));
	}
	cout<<jumlah<<endl;
	return 0;
}