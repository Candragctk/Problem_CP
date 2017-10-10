#include <iostream>
#include <stdlib.h>    
using namespace std;

int main(){
	float max=-1, max2=-1, x[100];
	int i,n;
	cout<<"Banyak data :";
	cin>>n;
	for (i=1;i<=n;i++){
		// x[i] = rand();
		// if (max<x[i]){
			// max2 = max;
			max = x[i];
		}
		// else if (max2 <= x[i] && x[i] <= max ){
			// max2 = x[i];
		}
	}
	cout<<endl;
	cout<<"IPK terbesar = "<<max<<endl;
	cout<<"IPK terbesar kedua = "<<max2<<endl;

	return 0;
}