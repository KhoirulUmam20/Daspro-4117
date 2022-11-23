#include <iostream>

using namespace std;

int main()
{
    cout << "no 4." << endl;
    int c;
    int sum = 0;
    float average;
    for (c = 1; c <= 20; c++){
        cout << c << endl;
        sum = sum + c;
    }
    cout << "jumlah =" << sum << endl;
    average = sum/20;
    cout << "rata-rata =" << average <<endl;

    return 0;
}
