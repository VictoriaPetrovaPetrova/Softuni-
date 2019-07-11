#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;

    for(int i = 0; i < n; i++){
        int number;
        cin >> number;

        if(number % 2 == 0){
            counter1++;
        }
        if(number % 3 == 0){
            counter2++;
        }
        if (number % 4 == 0){
            counter3++;
        }
    }

    double p1 = counter1 * 1.0 * 100 / n;
    double p2 = counter2 * 1.0 * 100 / n;
    double p3 = counter3 * 1.0 * 100 / n;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;

return 0;

}
