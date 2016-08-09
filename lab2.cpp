#include <iostream>
#include <string>

using namespace std;

void println(string input) {
    cout << input << endl;
}

int main() {
    
    cout << "Hello World!" << endl;
    
    string str_input;
    cin >> str_input;
    
    cout << "Input was " << str_input << endl;
    
    println( "Convenience function test" );
    return 0;
}