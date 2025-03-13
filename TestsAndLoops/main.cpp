#include <iostream>

using namespace std; // don't forget using namespace std

bool accept3(){
    int tries = 1;
    while (tries < 4){
        cout << "Do you want to proceed (y or n?)\n" << endl;
        char answer = 0;
        cin >> answer;

        switch(answer){
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                cout << "Sorry, I don't understand that.\n" << endl;
                ++tries;
        }
    }
    cout << "I'll take that as a no.\n" << endl;
    return false;
}

int main(){
    accept3();
    return 0;
}