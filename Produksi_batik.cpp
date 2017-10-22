#include <iostream>
using namespace std;

int main(){
	int a,b,c,p=0;
	cin>>a>>b>>c;
	while(a>=2 && b>=3 && c>=2){
		a -=2;
		b -=3;
		c -=2;
		p +=1;
	}
	cout<<p<<endl;
	return 0;
}