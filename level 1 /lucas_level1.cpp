#include <iostream>
#include <string>

using namespace std;

bool check_pass(const string& input) {
    const string secret = "opensesame67";
    return input == secret;
}

int main() {
    string input;
    cout << "Enter password: ";
    getline(cin, input);

    if(check_pass(input)) {
        cout << "Access granted\n";
        return 0;
    }
    cout << "Access denied\n";
    return 1;
}
