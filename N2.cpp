//N2


#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

string SO = "áâãäæçéêëìíïğñòôõö÷øùúüÁÂÃÄÆÇÉÊËÌÍÏĞÑÒÔÕÖ×ØÙÚÜ";
string GL = "àåıèîóşÿûÀÅİÈÎÓŞßÛ";
string NU = "1234567890";

bool sea(char xd, const string& arr) {
	return arr.find(xd) != string::npos;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ifstream N("file3.txt");
	ofstream out("stat.txt");
	if (!N) return -1;

	int sym = 0,
		str = 0,
		glas = 0,
		sogl = 0,
		numb = 0;
	string line;

	while (getline(N, line)) {
		str++;
		for (char xd : line) {
			if (isalpha(xd)) sym++;
			if (sea(xd, GL)) glas++;
			else if (sea(xd, SO)) sogl++;
			if (isdigit(xd)) numb++;
		}
	}
	out << "Ñèìâîëè: " << sym << "\nĞÿäêè: " << str << "\nÃîëîñí³: " << glas
		<< "\nÏğèãîëîñí³: " << sogl << "\nÖèôğè: " << numb << endl;


	return 0;
}