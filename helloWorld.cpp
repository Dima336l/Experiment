#include <iostream>
using namespace std;

string printHelloWorld() {
    return "Hello World!";
}

string printGoodbyeWorld() {
    return "Goodbye World!";
}

int main() {
    cout << printGoodbyeWorld();
    return 0;
}