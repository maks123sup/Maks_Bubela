#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "How much do you earn?";
    cin >> a;
    if (a<1000){
        cout << "Work more!!!" << endl;
    }
    else if (a>999){
        if (a<1000000){
            cout << "Good" << endl;
        }
    }
    else if (a>999999){
        cout << "You are a millionaire" <<endl;
    }
    cout << "But you done";
}
