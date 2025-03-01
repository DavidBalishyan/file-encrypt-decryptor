#include <iostream>
#include <fstream>

using namespace std;

// Function to decrypt a file
void decryptFile(const string &encryptedFile, const string &decryptedFile, char key)
{
    ifstream inFile(encryptedFile, ios::binary);
    ofstream outFile(decryptedFile, ios::binary);

    if (!inFile || !outFile)
    {
        cerr << "Error opening files!" << endl;
        return;
    }

    char ch;
    while (inFile.get(ch))
    {
        ch ^= key; // XOR operation (same as encryption)
        outFile.put(ch);
    }

    inFile.close();
    outFile.close();
    cout << "Decryption complete. Decrypted file: " << decryptedFile << endl;
}