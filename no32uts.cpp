#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int bar, uang, n=0;
	cout<<"Masukkan harga barang : ";
	cin>>bar;
	cout<<"Masukkan pecahan uang";
	cin>>uang;
	if (bar > uang){
	    cout<<"Dasar kere"<<endl;
	}
	else {
    	while (uang > 10000){
    		uang -= 10000;
    		n+=1;
    	}
    	cout<<"\n"<<n<<" buah 10.000an"<<endl;
    	n=0;
    	
    	while (uang > 5000){
    		uang -= 5000;
    		n+=1;
    	}
    	cout<<n<<" buah 5.000an"<<endl;
    	n=0;
    
    	while (uang > 2000){
    		uang -= 2000;
    		n+=1;
    	}
    	cout<<n<<" buah 2.000an"<<endl;
    	n=0;
    
    	while (uang > 1000){
    		uang -= 1000;
    		n+=1;
    	}
    	cout<<n<<" buah 1.000an"<<endl;
    	n=0;
    
    	while (uang > 500){
    		uang -= 500;
    		n+=1;
    	}
    	cout<<n<<" buah 500an"<<endl;
    	n=0;
    
    	while (uang > 100){
    		uang -= 100;
    		n+=1;
    	}
    	cout<<n<<" buah 100an"<<endl;
    	n=0;
    
    	while (uang > 50){
    		uang -= 50;
    		n+=1;
    	}
    	cout<<n<<" buah 50an"<<endl;
    	n=0;
	}
    cout<<"kembaliannya adalah : "<<uang<<" Rupiah"<<endl;
	return 0;
}