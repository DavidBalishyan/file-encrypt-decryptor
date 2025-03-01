#include <iostream>
#include <fstream>

using namespace std;

// Function to encrypt a file
void encryptFile(const string &inputFile, const string &encryptedFile, char key) {
    ifstream inFile(inputFile, ios::binary);
    ofstream outFile(encryptedFile, ios::binary);

    if (!inFile || !outFile) {
        cerr << "Error opening files!" << endl;
        return;
    }

    char ch;
    while (inFile.get(ch)) {
        ch ^= key; // XOR operation
        outFile.put(ch);
    }

    inFile.close();
    outFile.close();
    cout << "Encryption complete. Encrypted file: " << encryptedFile << endl;
}
