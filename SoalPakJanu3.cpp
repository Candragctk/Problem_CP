#include <iostream>

using namespace std;

int main(){
	int x[6], n=5, i, k, t=0, mid, hasil;

	for (i=1;i<=n;i++){
		x[i]=i*i+i%5/3;
		cout<<x[i]<<" ";
	}
	mid = (1+n)/2;
	for(k=1;k<=n;k++){
		switch(k){
			case 1 : {
				hasil = x[mid/2]/4;
				break;
			}
			case 2 : {
				hasil = x[mid]/2;
				break;
			}
			case 3 : {
				hasil = x[(mid+n)*3/4];
				break;
			}
			default : {
				hasil = k*5+4;
				break;
			}
		}
		t += hasil;
	}
	cout<<" \n"<<t;
	return 0;
}