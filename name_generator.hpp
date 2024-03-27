#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <cstdlib>
#include <algorithm>

class nameGenerator {
public:
    // REQUIRES: CatNames.txt exists
    // EFFECTS: Opens the CatNames.txt file and reads it into the vector
    nameGenerator();

    // EFFECTS: Generates a cat name from CatNames.txt and returns
    std::string generateCatName();

    // REQUIRES: firstAlphabet is a valid upper-case char(A-B)
    // EFFECTS: Generates a cat name from CatNames.txt and returns
    std::string generateCatName(char firstAlphabet);

private:
    std::vector<std::string> catNames;

    //REQUIRES: firstLetter is a valid upper-case char(A-B)
    //EFFECTS: returns true if first letter in input matches firstLetter, false otherwise
    bool alphabetMatch(std::string input, char firstLetter);
};

//EFFECTS: generates and returns a random int between lower and upper bounds
int random_int(int lower, int upper);


