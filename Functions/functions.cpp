// Functions consist of:
// a type
// a name
// parameters
// statements
#include<iostream>
using namespace std;

int squareNumbers(int x){ // Declares function "squareNumbers" that takes in parameter of x.
    int y=x*x; //creates int variable equating to x squared
    return y; //returns the value of y when the function is called
}

int main(){ 
    int input = 9; 
    int output = squareNumbers(input);
    cout << "Squared number" << " " << output << endl;
    //the function is called, resulting in the int variable "output" equating input squared
    return 0;
}
