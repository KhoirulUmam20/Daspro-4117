#include <iostream>

using namespace std;

int main()
{
    cout << "1.Sebutkan bilangan kelipatan 5, kurang dari atau sama dengan 50! " << endl;
    int a = 0;
    do {
        if (a % 5 == 0)
        cout << a << endl;
        a++;
    }
    while (a <= 50);
    cout << endl;
    return 0;
}
