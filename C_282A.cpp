#include <iostream>
#include <string>

using namespace std;
int main() {
	int n, tes=0;
	string tx;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>tx;
		if (tx == "++X" || tx == "X++") {
			tes += 1;
		}
		else if (tx == "--X" || tx == "X--") {
			tes -= 1;
		}
	}
	cout<<tes<<endl;
	return 0;
}