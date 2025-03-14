#include <iostream>

using namespace std;

/*
// This code is used for finding the value in of a char
void intval(){
    for (char c; cin >> c;)
        cout << "The value of '" << c << "' is" << int{c} << '\n';
}
*/

int main(){
    char c;
    cout << "Enter characters to find out their int value:\n";

    while (cin >> c){
        cout << "The value of '" << c << "' is " << int(c) << '\n';
    }

    return 0;
}