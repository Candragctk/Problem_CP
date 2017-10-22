#include <iostream>
using namespace std;

int main(){
	int n,m,k=0;
	cin>>n>>m;
	while(m>=4){
		m -= 4;
		k +=1 ;
	}
	while(n>=4){
		n -= 4;
		k +=1 ;
	}
	if (n>=2 && m>=2 ){
		m-=2;
		n-=2;
		k +=1;
	}
	
	cout<<k<<endl;
	return 0;
}