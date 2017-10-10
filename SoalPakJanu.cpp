#include <iostream>
#include <conio.h>
using namespace std;

main() {
	int i, j, n, sum=0;
	bool pot;
	cin>>n;
	for (i=1;i<=n;i++){
		j = i;
		pot = true;
		while(j>1) {
			if (j%2 == 1){
				pot=false;
				j /= 2;
			}
		}
		if (pot == true){
			sum += 1;
		}
	}
	cout<<sum<<endl;
}