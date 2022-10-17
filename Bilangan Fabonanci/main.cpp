#include <iostream>

using namespace std;

int main()
{
    int x;
    int fn;
    int fn1;
    int fn2;

    cout << "Program Deret Fibonanci " << endl;
    cout << "Masukkan Nilai ke-n :";
    cin >> x;

    fn = fn1 + fn2;
    fn1 = 1;
    fn2 = 0;
    cout << fn1 << endl;
    for (int y = 1; y < x; y++){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        cout << fn << endl;
    }










    return 0;
}
