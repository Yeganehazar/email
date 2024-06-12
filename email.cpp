#include <iostream>
#include <regex>
#include <string>

using namespace std;


struct Email {
    string address;
};


bool isValidEmail(const string& email) {
    
    const regex pattern(R"((\w+)(\.{1}\w+)*@(\w+)(\.\w+)+)");
    return regex_match(email, pattern);
}

int main() {
    Email email;

    
    cout << "Enter your email address: ";
    cin >> email.address;

    
    if (isValidEmail(email.address)) {
        cout << "The email address " << email.address << " is valid." << endl;
    } else {
        cout << "The email address " << email.address << " is not valid." << endl;
    }

    return 0;
}
