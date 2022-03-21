#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    int A, B;

    while(cin >> A >> B){
        if(A>B)
            cout << A << endl; // se o maior for o A
        else
            cout << B << endl; // se não for o A então é o B
    }
    return 0;
}