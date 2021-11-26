#include<iostream>
using namespace std;

int main(){
    int x;
    int a = 0;
    int b = 0;
    while (x != 0){
        cout << "Enter an integer: ";
        cin >> x;
        if(x % 2 == 1){
            a++;
        }else{
            b++;
        }
    }
    cout << "#Even numbers = " << b - 1 << endl;
    cout << "#Odd numbers = " << a;
    return 0;
}
