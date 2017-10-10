#include <iostream>
using namespace std;

int main()
{
    int low, high, i, flag;

    cout << "Masukkan 2 bilangan(intervals): ";
    cin >> low >> high;

    cout << "Bilangan prima antara " << low << " dan " << high << " adalah: ";

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << low << " ";

        ++low;
    }

    return 0;
}
