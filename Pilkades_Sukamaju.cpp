#include <iostream>
using namespace std;

int main(){
	int n, pilih, x[10], max, juara;
	cin>>n;
	for (int i=1;i<=n;i++){
		x[i] = 0;
	}
	max = x[1];
	juara = 1;
	for (int i=1;i<=n;i++){
		cin>>pilih;
		x[pilih] += 1;
	}

	for (int i=2;i<=n;i++){
		if (max < x[i]){
			max = x[i];
			juara = i;
		}
	}
	cout<<"Pemenang kepala desa adalah calon no : "<<juara<<endl;
	return 0;
}
