#include <iostream>

using namespace std;
int main() {
	int t, a[21], b[21];
	cin>>t;
	for (int i=1;i<=t;i++){
		cin>>a[i]>>b[i];
		if (a[i] % b[i] == 0 || b[i] % a[i] == 0){
			cout<<"Sim"<<endl;
		}
		else {
			cout<<"Nao"<<endl;
		}
	}
	
	return 0;
}