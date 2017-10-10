#include <iostream>
using namespace std;

int main()
{
    int n,x[100],min=0 , max1, max2;
    cin>>n;
    
    for (int i=0;i<n;i++){
        cin>>x[i];
    }
        
    // jika himpunan kurang dari 1
    if (n<2){
        cout<<"Tidak ada nilai terbesar ke dua"<<endl;
    }
    
    for (int i=0;i<n;i++){
        if (min>x[i]){
            min = x[i];
        }
    }
    
    max1=max2=min;
    for (int i=0;i<n;i++){
        if (max1 < x[i]){
            max2 = max1;
            max1 = x[i];
        }
        // jika x[i] diantara max1 dan max2 maka ....
        else if (max2 <= x[i] && max1 >= x[i]){
            max2 = x[i];
        }
    }    
    cout<<"Bilangan terbesar kedua adalah : "<<max2<<endl;
    return 0;
}
