#include <iostream>
#include <conio.h>
using namespace std;

int x[15] = {80, 69, 77, 82, 79, 71, 82, 65, 77, 65, 78, 49, 79, 75, 69};

main(){
	char t;
	int i, j, n=15;
	for (i=0;i<n;i++){
		t= x[i];
		cout<<t;
	}
	getch();
}
