#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    int maxDiff = 0;
    int sum = 0;
    int prevSum = 0;

    for(int i = 0; i < n; i++){
        int number1, number2;
        cin >> number1 >> number2;

        sum = number1 + number2;

        if(i  == 0){
            prevSum = sum;
        }
        else if(sum != prevSum){
            int difference = abs(sum - prevSum);

            if(difference > maxDiff){
                maxDiff = difference;
            }
        }

        prevSum = sum;
    }

    if(maxDiff == 0){
        cout << "Yes, value=" << sum << endl;
    } else {
        cout << "No, maxdiff=" << maxDiff << endl;
    }

return 0;

}
