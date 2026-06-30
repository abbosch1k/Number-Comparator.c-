#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(0));

    char grades[] = {'A','B','C','D','F'};

    cout << grades[rand()%5];

    return 0;
}
