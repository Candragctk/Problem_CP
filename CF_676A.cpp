#include <iostream>
#include <cmath>

using namespace std;
int main() {
	int n, a[105], max;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	max = abs(a[n]-a[1]);
	for (int i=1;i<=n;i++){
		if (max < abs(a[1]-a[i])){
			max = abs(a[1]-a[i]);
		}
		else if (max < abs(a[n]-a[i])){
			max = abs(a[n]-a[i]);
		}
	}

	cout<<max<<endl;
	return 0;
}