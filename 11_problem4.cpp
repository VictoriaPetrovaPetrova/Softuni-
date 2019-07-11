#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int prevSum = 0;
    int maxDiff = 0;

    for (int i = 0; i < n; i++)
    {
        int first, second;
        cin >> first >> second;

        sum = first + second;

        if (i == 0){
            prevSum = sum;
        }

        else {
            if (sum != prevSum){
                int val = abs(sum - prevSum);

                if (val > maxDiff){
                    maxDiff = val;
                }
            }
        }

        prevSum = sum;
    }

    if (maxDiff == 0)
    {
        cout << "Yes, value=" << sum << endl;
    }
    else
    {
        cout << "No, maxdiff=" << maxDiff << endl;
    }
    return 0;
}
