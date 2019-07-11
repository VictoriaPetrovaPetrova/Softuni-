#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    int sum = 0;

    int maxNumber = INT_MIN;

    for (int i = 0; i < n; i++){
        int number;
        cin >> number;

        sum += number;

        if( number > maxNumber){
            maxNumber = number;
        }
    }

    sum -= maxNumber;

    if(sum == maxNumber){
        cout << "Yes" << endl;
        cout << "Sum = " << sum << endl;
    } else {
        cout << "No" << endl;
        cout << "Diff = " << abs(maxNumber - sum) << endl;
    }

return 0;

}
