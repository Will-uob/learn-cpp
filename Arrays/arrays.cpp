// Whenever a problem requires a group of same type variables clubbed together
#include <iostream>
using namespace std;

int main() {
    int marks[5];
    marks[0] = 96;
    marks[1] = 92;
    marks[2] = 78;
    marks[3] = 54;
    marks[4] = 86;

    int marks2[] = { 96, 92, 78, 54, 86};

    for(int i=0;i<5;i++) {
        cout<< marks[i] <<endl;  //for printing the i'th element
    }

    char keys[6] = {'b','c','d','a','b','b'};
    cout << marks[2] << endl;

    return 0;
}