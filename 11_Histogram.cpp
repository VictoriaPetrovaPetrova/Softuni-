#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;
    int counter4 = 0;
    int counter5 = 0;

    for(int i = 0; i < n; i++){
        int number;
        cin >> number;

        if(number < 200){
            counter1++;
        } else if(number < 400){
            counter2++;
        } else if (number < 600){
            counter3++;
        } else if (number < 800){
            counter4++;
        } else if (number >= 800){
            counter5++;
        }
    }

    double p1 = counter1 * 1.0 * 100 / n;
    double p2 = counter2 * 1.0 * 100 / n;
    double p3 = counter3 * 1.0 * 100 / n;
    double p4 = counter4 * 1.0 * 100 / n;
    double p5 = counter5 * 1.0 * 100 / n;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << p1 << "%" << endl;
    cout << p2 << "%" << endl;
    cout << p3 << "%" << endl;
    cout << p4 << "%" << endl;
    cout << p5 << "%" << endl;

return 0;

}


