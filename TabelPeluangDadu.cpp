#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double f;
	cout<<"*    1    2    3    4   5   6"<<endl;
	for (int i=1.00;i<=6;i++){
	    cout<<i<<"   ";
		for (int j=1.00;j<=6;j++){
			f = (j*j+(i-1))/36.00;
			printf("%.2f ", f);
		}
		cout<<endl;
	}
	return 0;
}
