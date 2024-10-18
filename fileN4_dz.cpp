#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream inputFile("input.txt");

    if (!inputFile.is_open()) {
        cout << "Помилка відкриття файлу!" << endl;
        return 1;
    }

    string line;
    size_t maxLength = 0;
    string longestLine; 

    while (getline(inputFile, line)) {
        if (line.length() > maxLength) {
            maxLength = line.length();
            longestLine = line; 
        }
    }

    if (maxLength > 0) {
        cout << "Довжина найдовшого рядка: " << maxLength << " символів" << endl;
        cout << "Найдовший рядок: " << longestLine << endl; 
    }
    else {
        cout << "Файл порожній!" << endl;
    }

    inputFile.close();
    return 0;
}
