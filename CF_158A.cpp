#include <iostream>

using namespace std;
int main() {
	int k, n, a[105], tes;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	tes=0;
	if (k>= 1 && k<=n && n <= 50){
		for(int i=1;i<=n;i++){
			if (a[i]>=a[k] && a[i]>0){
				tes+=1;
			}
		}
	}
	cout<<tes<<endl;
		
	return 0;
}