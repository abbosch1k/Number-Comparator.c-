#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << "First is greater";
    else if (a < b)
        cout << "Second is greater";
    else
        cout << "Equal";

    return 0;
}
