#include <iostream>

using namespace std;

int main(){
	int m, n, fpb, kpk;
	cin>>m>>n;
    kpk = m*n;
	while(m>0 && n>0){
		if (m>n){
			m -= n;
		}
		else {
			n -= m;
		}
	}

	if (m == 0){
		fpb = n;
		cout<<"FPB nya adalah : "<<fpb<<endl;
	}
	else {
		fpb = m;
		cout<<"FPB nya adalah : "<<fpb<<endl;
	}
	kpk /= fpb;
	cout<<"KPK nya adalah : "<<kpk<<endl;
	return 0;
}
