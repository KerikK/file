//N3
#include <iostream>
#include <fstream>
#include <vector>
#include <Windows.h>

using namespace std;

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream fin("in.txt");
    ofstream fout("out.txt");
    vector<string> lines;
    string line;

   //*тут чомусь помилка і я не розумію чому
   // (Серьезность	Код	Описание	Проект	Файл	Строка	Состояние подавления	Подробности, Ошибка(активно)	E0020	идентификатор "getline" не определен	fileN3_dz	D : \project\fileN3_dz\fileN3_dz\fileN3_dz.cpp	20)
 
    while (getline(fin, line)) { 
        lines.push_back(line);
    }

  
    for (size_t i = 0; i < lines.size() - 1; i++) {
        fout << lines[i] << endl;
    }

    fin.close();
    fout.close();
    return 0;
}



   