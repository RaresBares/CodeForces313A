#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {

    string str;
    cin >> str;

    string last = str;
    last.resize(last.length() - 1);
    string plast = str;
    plast.erase(plast.length() -2, 1);


    if (plast == "-0") {
        plast = "0";
    }

    if (last == "-0") {
        last = "0";
    }




    int ilast = stoi(last);
    int iplast = stoi(plast);

    if (ilast < stoi(str) && ilast < stoi(str)) {
        cout << stoi(str);
    } else {
    if (ilast >= iplast) {

        cout << ilast;
    } else {
        cout << iplast;
    }
}
    return 0;
}
