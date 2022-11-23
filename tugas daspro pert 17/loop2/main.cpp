#include <iostream>

using namespace std;

int main()
{
     cout << "no 2." << endl;
    int a ;
    for (a = 1; a<=100; a++){
        if (a % 2 == 1){
            continue;
        }
        cout <<"nilai genap adalah ="<< a << endl;
    }
    return 0;
}
