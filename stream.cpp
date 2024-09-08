#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    ostringstream oss;

    string name = "Alice";
    int age = 30;
    string city = "New York";

    oss << "Name: " << name << ", Age: " << age << ", City: " << city;

    string result = oss.str();
    cout << result << endl;

   return 0;
}