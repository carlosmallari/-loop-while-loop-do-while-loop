#include <iostream>
using namespace std;

int main() {
    string name;
    int times;

    //Input from user
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "How many times do you want to print your name? ";
    cin >> times;

    //USING LOOP
    cout << "\n*--- Using FOR loop ---*\n";
    for (int i = 0; i < times; i++) {
        cout << name << endl;
    }
    //USING WHILE LOOP
    cout << "\n*--- Using WHILE loop ---*\n";
    int j = 0;
    while (j < times) {
        cout << name << endl;
        j++;
    }
    //USING DO WHILE LOOP
    cout << "\n*--- Using DO-WHILE loop ---*\n";
    int k = 0;
    if (times > 0) {
        do {
            cout << name << endl;
            k++;
        } while (k < times);
    }

    return 0;
}
