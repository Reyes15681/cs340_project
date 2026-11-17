// Level 1: simple string check.
// The password is compared directly against user input.
// Build: g++ -O0 prasen_level1.cpp -o level1_O0   (repeat for -O1, -O2, -O3, -Os)

#include <cstring>
#include <iostream>
#include <string>

using namespace std;

static const char *SECRET = "PASSWORD123123123";

bool check_password(const string &input) {
    return strcmp(input.c_str(), SECRET) == 0;
}

int main(int argc, char *argv[]) {
    string input;

    if (argc > 1) {
        input = argv[1];
    } else {
        cout << "Enter password: ";
        getline(cin, input);
    }

    if (check_password(input)) {
        cout << "Access granted\n";
        return 0;
    }

    cout << "Access denied\n";
    return 1;
}
