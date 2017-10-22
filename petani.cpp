#include <iostream>
using namespace std;

int main(){
	int n, k,a[100], x=0;
	cin>>n>>k;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]>=k){
			x+=1;
		}
	}
	cout<<x<<endl;
	return 0;
}