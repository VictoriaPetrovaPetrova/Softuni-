#include <iostream>
#include <cfloat>

using namespace std;

int main(){

    int n;
    cin >> n;

    double oddSum = 0.0;
    double oddMin = DBL_MAX;
    double oddMax = -DBL_MAX;

    double evenSum = 0.0;
    double evenMin = DBL_MAX;
    double evenMax = -DBL_MAX;

    for(int i = 1; i <= n; i++){
        double number;
        cin >> number;

        if (i % 2 == 1){
            oddSum += number;
            if(number < oddMin){
                oddMin = number;
            }
            if(number > oddMax){
                oddMax = number;
            }
        } else if( i % 2 == 0){
            evenSum += number;
            if(number < evenMin){
                evenMin = number;
            }
            if(number > evenMax){
                evenMax = number;
            }
        }

    }
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "OddSum=" << oddSum << "," << endl;
    if (oddMin == DBL_MAX){
        cout << "OddMin=" << "No," << endl;
    } else {
        cout << "OddMin=" << oddMin << "," << endl;
    }
     if (oddMax == -DBL_MAX){
        cout << "OddMax=" << "No," << endl;
    } else {
        cout << "OddMax=" << oddMax << "," << endl;
    }

     cout << "EvenSum=" << evenSum << "," << endl;
    if (evenMin == DBL_MAX){
        cout << "EvenMin=" << "No," << endl;
    } else {
        cout << "EvenMin=" << evenMin << "," << endl;
    }
     if (evenMax == -DBL_MAX){
        cout << "EvenMax=" << "No" << endl;
    } else {
        cout << "EvenMax=" << evenMax << endl;
    }

return 0;

}
