#include <iostream>
using namespace std;

int main(){
	int f[100], x;
	double luas;
	for (x=0;x<5+1;x++){
		if (x<4){
			f[x] = 2*x;
		}
		else {
			f[x] = x*x;
		}
	} 
	luas = ((3-0)*(f[0]+f[3])/2.00) + ((5-4)*(f[4]+f[5])/2.00); 
	cout<<"Luas Trapesium adalah : "<<luas<<endl;;

	return 0;
}
