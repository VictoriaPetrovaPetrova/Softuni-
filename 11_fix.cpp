#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    double totalEven = 0;
    double totalOdd = 0;
    double minEven = 0;
    double maxEven = 0;
    double minOdd = 0;
    double maxOdd = 0;
    for(int i = 0; i <= n; i++)
    {
        int num;
        cin >> num;
        if(i % 2 == 0)
        {
            totalEven += num;
            if(num < minEven)
            {
                minEven = num;
            }
            if(num > maxEven)
            {
                maxEven = num;
            }
            else
            {
                to_string(minEven) = "No";
                to_string(maxEven) = "No";


            }
        }
        else
        {
            totalOdd += num;
            if(num < minOdd)
            {
                minOdd = num;
            }
            else if(num > maxOdd)
            {
                maxOdd = num;
            }
            else
            {
                to_string(minOdd) = "No";
                to_string(maxOdd) = "No";
                minOdd = "No";

            }
        }

    }
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << "OddSum= " << totalOdd << "," << endl;
    cout << "OddMin=" << minOdd << "," << endl;
    cout << "OddMax= " << maxOdd << "," << endl;
    cout << "EvenSum= " << totalEven << "," << endl;
    cout << "EvenMin= " << minEven << "," << endl;
    cout << "EvenMax= " << maxEven << endl;
    return 0;
}
