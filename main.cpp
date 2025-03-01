#include <iostream>
#include <fstream>
#include "functions/load.hpp"


int main() {
    std::string inputFile, encryptedFile = "encrypted.bin", decryptedFile = "decrypted.txt";
    char key = 'K'; // Encryption key

    std::cout << "Enter the file to decript: ";
    std::cin >> inputFile;

    // Encrypt the file
    encryptFile(inputFile, encryptedFile, key);

    // Decrypt the file
    decryptFile(encryptedFile, decryptedFile, key);

    return 0;
}
