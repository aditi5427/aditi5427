#include <iostream>
using namespace std;

int main () {
    int i = 0;
    int n = 5;

    while (++i != 10) {
        cout << n * i;
        cout << endl;
        i++;
    }

}