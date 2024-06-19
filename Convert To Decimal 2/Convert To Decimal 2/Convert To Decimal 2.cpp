#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short int t;
    cin >> t;
    long long int n;
    long long int temp;
    for (short int i = 0; i < t; i++)
    {
        cin >> n;
        temp = n;
        long summation = 0;
        int power = 0;
        while (temp > 0)
        {
            int digit = temp % 2;
            if (digit != 0)
            {
                summation += pow(2, power);
                power++;
            }
            temp /= 2;
        }
        cout << summation << endl;
    }
}
