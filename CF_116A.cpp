#include <iostream>

using namespace std;
int main() {
	int n, plus, min, temp, max=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>min>>plus;
		if (i == 1){
			temp = min;
		}
		else {
			temp -= min;
		}
		temp += plus;
		if (temp > max){
			max = temp;
		} 
	}
	cout<<max<<endl;
	return 0;
}