#include <iostream>
#include <math.h>
using namespace std;

bool checkarm(int n)
{
    if (n == 0)
    {
        return false;
    }
    int length = (to_string(n)).length();
    int no = n;
    int digitsum = 0;
    while (n != 0)
    {
        int digit = n % 10;
        digitsum += pow(digit, length);
        n = n / 10;
    }

    if (digitsum == no)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (checkarm(i))
        {
            cout << i << endl;
        }
    }
    return 0;
}