#include <iostream>
#include <string>
#include <fstream>
#include "name_generator.hpp"
using namespace std;

int main(int argc, char * argv[]) {
    nameGenerator generator;
    cout << "meow" << endl;
    if (argc == 2) {
        string name = argv[1];
        cout << name << "'s cat name is: " << generator.generateCatName(name.at(0)) << endl;
    }
}