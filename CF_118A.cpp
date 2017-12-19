#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main() {
	string tex;
	cin>>tex;
	for(int i=0;i<tex.length();i++){
		if (tex[i] == 'A' || tex[i] == 'a' || tex[i] == 'O' || tex[i] == 'o' || tex[i] == 'Y' || tex[i] == 'y' || tex[i] == 'E' || tex[i] == 'e' || tex[i] == 'U' || tex[i] == 'u' || tex[i] == 'I' || tex[i] == 'i'){
			tex.erase(i,1);
			i--;
		}
		else {
			tex[i] = tolower(tex[i]);
		}
	}
	
	for(int i=0;i<tex.length();i++){
		cout<<"."<<tex[i];
	}
	cout<<endl;
	return 0;
}