//подібне бачив в https://github.com/ulasdilek/file-comparator.git

//N1



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file1("file1.txt"), file2("file2.txt");

    if (!file1.is_open() || !file2.is_open()) {
        cout << "Error files!" << endl;
        return 1;
    }

    string line1, line2;
    int line_number = 0;
    bool files_are_equal = true;

    while (getline(file1, line1) && getline(file2, line2)) {
        line_number++;
        if (line1 != line2) {
            files_are_equal = false;
            cout << "Line " << line_number << " differs:" << endl;
            cout << "File1: " << line1 << endl;
            cout << "File2: " << line2 << endl;
        }
    }

   
    if (getline(file1, line1) || getline(file2, line2)) {
        files_are_equal = false;
        cout << "Files have different number of lines." << endl;
    }

    if (files_are_equal) {
        cout << "Files are identical." << endl;
    }

    file1.close();
    file2.close();
    return 0;
}



