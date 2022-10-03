#include <iostream>

using namespace std;

int main()
{
    cout << "1. bilangan genap antara 25-50, bilangan sesuai " << endl;
   int a = a;
   cout << "masukan angka : ";
   cin >> a;
   if  (a % 2 == 0 && 25<=a && a<=50) {
     cout << "bilangan sesuai ";
   }
     else {
            cout << "bilangan tidak sesuai";
    }


cout << " \n2. bilangan ganjil antara lebih dari 13 atau kurang dari 5" << endl;
int b;
cout << "\nmasukan angka :" ;
cin >> b ;
if ( b % 2 == 1 &&  b < 5 || b > 13) {
    cout << "bilangan sesuai";
}
else {
    cout << "bilangan tidak sesuai";
}


cout << "\n3.bilangan genap antara 25-50 atau bilangan ganjil antara 3-15" << endl;
int c;
cout << "masukan angka :" ;
cin >> c;
if (c % 2 == 0 && 25 < c < 50 || c % 2 == 1 && 3 < c < 15 ) {
    cout << "bilangan sesuai" << endl;
}
else {
    cout << "bilangan tidak sesuai" << endl;
}

// tugas tambahan //
cout << "masukan jurusan anda :" << endl;
int d;
cin >> d;
if (d == 1){
    cout << "teknik informatika";
}
else if (d == 2){
    cout << "sistem informasi";
}
else if (d == 3) {
    cout << "dkv";
}
else {
    cout << "jurusan anda tidak diketahui";
}





    return 0;
}
