#include <iostream>

using namespace std;

int main()
{
    cout << "no 5." << endl;
int d,e ;
for (d = 0; d <= 1000; d++){
    cout << "masukkan nilai anda :" ; cin >> e ;
    if(e == -99){
        cout << "keluar karena break" << endl;
        break;
    }
}
    return 0;
}
