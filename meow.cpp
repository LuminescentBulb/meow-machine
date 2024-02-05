#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char * argv[]) {
    cout << "meow" << endl;
    if (argc == 2) {
        for (int i = 0; i < stoi(argv[1]); i++) {
            cout << "MEOW MEOW " << i + 1 << endl;
        }
    }
}