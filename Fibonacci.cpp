#include<iostream>
    using namespace std;
    int main()
    {
       int n, first = 0, second = 1, fibo=0;
       cout << "Masukkan banyaknya bilangan: ";
       cin >> n;
       cout << "banyak fibonacci " << n << endl;
       for ( int i = 0 ; i < n ; i++ )
       {
          if ( i <= 1 )
             fibo = i;
          else
          {
             fibo = first + second;
             first = second;
             second = fibo;
          }
          cout << fibo <<" ";
       }
       return 0;
    }