#include <iostream>

using namespace std;

int main()
{
   int i, angka, min , max ;
for (i = 0; i <= angka; i++){
    cout << "masukkan nilai anda :" ; cin >> angka ;
    if(angka == -99){
        break;
    }
    else if (i == 1){
        min = angka;
        max = angka;
    }
    else if (min > angka){
    min = angka;
    }

    else if(max < angka){
        max = angka;
    }
}
    cout << "nilai max =" << max << endl;
    cout << "nilai min =" << min << endl;

    return 0;
}
