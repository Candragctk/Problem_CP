#include <iostream>
using namespace std;

int main(){
	int a[25], b[25], c[25], count=0, n;
	cin>>n;
	for (int i=0;i<n;i++){
		cout<<"Masukkan nilai A : ";
		cin>>a[i];
	}

	for (int i=0;i<n;i++){
		cout<<"Masukkan nilai B : ";
		cin>>b[i];
	}

	for (int i=0;i<n;i++){
		if (a[i]>b[i]){
			c[i] = a[i];
			count += 1;
		}
		else if (a[i]<b[i]){
			c[i] = b[i];
			count -= 1;
		}
		else {
			c[i] = a[i];
		}
	}

	for (int i=0;i<n;i++){
		cout<<c[i]<<" ";
	}

	if (count > 0){
		cout<<"Pemenangnya adalah A"<<endl;
	}
	else if (count < 0){
		cout<<"Pemenangnya adalah B"<<endl;
	}
	else{
		cout<<"SEIMBANG"<<endl;
	}

	return 0;
}
