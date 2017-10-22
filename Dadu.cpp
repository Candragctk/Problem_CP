#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=3;i++){
		if(i != n && i != 7-n){
			cout<<i<<" ";
		}
	}
	for(int i=6;i>=4;i--){
		if(i != n && i != 7-n){
			cout<<i<<" ";
		}
	}
	return 0;
}