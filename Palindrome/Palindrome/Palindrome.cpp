#include <iostream>
using namespace std;
int main()
{
    int number, r = 0;
    cin >> number;
    int check_number = number;
    while (number != 0)
    {
        r = r * 10 + number % 10;
        number = number / 10;
    }
    cout << r << endl;
    if (r == check_number)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}