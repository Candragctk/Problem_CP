#include <iostream>

using namespace std;

int max(int x, int y){
	int i,j;
	i = 3*x/10;
	j = x - x/250*y;
	if (i > j){
		return i;
	}
	else {
		return j;
	}
}

int main() {
	int a, b, c, d, misha, vasya;
	cin>>a>>b>>c>>d;
	misha = max(a,c);
	vasya = max(b,d);
	if (misha > vasya){
		cout<<"Misha"<<endl;
	}
	else if (misha < vasya){
		cout<<"Vasya"<<endl;
	}
	else {
		cout<<"Tie"<<endl;
	}
	
	return 0;
}