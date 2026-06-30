#include <iostream>
using namespace std;

int main() {

    int n, mx;

    cin >> mx;

    for(int i = 1; i < 5; i++) {
        cin >> n;
        if(n > mx)
            mx = n;
    }

    cout << mx;

    return 0;
}
