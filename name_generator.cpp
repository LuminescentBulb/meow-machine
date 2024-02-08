#include "name_generator.hpp"

using namespace std;

std::vector<std::string> catNames;

void loadNameFile() {
    ifstream inputFile("CatNames.txt");
    string input;
    while(getline(inputFile, input)) {
        catNames.push_back(input);
    }
    inputFile.close();
}

bool alphabetMatch(string input, char firstLetter) {
    return input.at(0) == firstLetter;
}

int random_int(int lower, int upper) {
    srand((unsigned) time(NULL));
    return (lower + (rand() % (upper - lower + 1)));
}

string generateCatName() {
    int random = random_int(0, catNames.size() - 1);
    return catNames[random];
}

string generateCatName(char firstAlphabet) {
    vector<string> validCatNames;
    bool keepReading = true;
    auto iterator = find_if(catNames.begin(), catNames.end(),
                    [&firstAlphabet](string input) 
                    {return input.at(0) == firstAlphabet;});
    int index = iterator - catNames.begin();
    int lower = index;
    while (keepReading) {
        if (alphabetMatch(catNames[index], firstAlphabet)) {
            validCatNames.push_back(catNames[index]);
            index ++;
        }
        else {
            break;
        }
    }
    int random = random_int(lower, index);
    return catNames[random];
}