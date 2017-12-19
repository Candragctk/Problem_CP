#include <iostream>

using namespace std;
int main() {
	int p[1005], v[1005], t[1005], n, tes=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i]>>v[i]>>t[i];
	}
	
	for(int i=1;i<=n;i++){
		if (p[i]+v[i]+t[i] > 1) {
			tes++;
		}
	}
	cout<<tes<<endl;
	return 0;
}