#include <iostream>

using namespace std;

int main(){
	int m, n,lcm;
	cin>>m>>n;
	lcm = m*n;
	while(m>0 && n>0){
		if (m>n){
			m -= n;
		}
		else {
			n -= m;
		}
	}

	if (m == 0){
		cout<<n<<endl;
	}
	else {
		cout<<m<<endl;
	}
	return 0;
}