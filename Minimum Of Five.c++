#include <iostream>
using namespace std;

int main() {

    int n, mn;

    cin >> mn;

    for(int i = 1; i < 5; i++) {
        cin >> n;
        if(n < mn)
            mn = n;
    }

    cout << mn;

    return 0;
}
