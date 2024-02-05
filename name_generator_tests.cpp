#include "name_generator.hpp"

using namespace std;

//Declare functions here
void test_non_alphabet();
void test_alphabet();
void test_random();


int main() {
    //Call functions here
    loadNameFile();
    test_non_alphabet();
    test_alphabet();
    //test_random();
    
}

//Write test functions here
void test_non_alphabet() {
    cout << generateCatName() << endl;
    cout << "NON-ALPHABET GENERATION PASS!" << endl;
}

void test_alphabet() {
    for (int i = 0; i < 10; i++) {
        char alphabet = 'a' + i;
        alphabet = toupper(alphabet);
        cout << generateCatName(alphabet) << endl;
    }
    cout << "ALPHABET GENERATION PASS!" << endl;
}

void test_random() {
    int lower = 3000;
    int index = 6000;
    int random = lower + (rand() % (index - lower + 1));
    cout << random << endl;
}