// hello git!.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <fstream>
#include <iostream>
#include <string>
#include <clocale>

using namespace std;

void input_word(string* words, int& len) {	// функція

	for (int i = 0; i < len; i++) {
		cout << "word_" << i + 1 << " = ";
		cin >> words[i];
	}
}
void output_word(string* words, int len) {	

	for (int i = 0; i < len; i++)
		cout << words[i] << " ";
	cout << endl << endl;
}
void file_output_word(string* arr_word, int* arr_lengths, int len, string name) {
	string road = "D:\\";
	road.insert(road.length(), name);
	road.insert(road.length(), ".txt");
	cout << road << endl;
	ofstream fout(road);
	for (int i = 0; i < len; i++) {
		fout << "word_" << i + 1 << " " << arr_word << "\n";
	}
	fout << "\n\n";
	for (int i = 0; i < len; i++) {
		fout << "length_" << i + 1 << " " << arr_lengths << "\n";
	}
	fout.close();
	cout << endl << endl;
}

bool criterion(int param1, int param2){
	return param1 < param2;
}

void swap(string& param1, string& param2) {
	string temp = param1;
	param1 = param2;
	param2 = temp;
}

void sort(bool (*criterion)(int param1, int param2), string* mas, int len) {

	for (int i = 0; i < len-1; i++) {
		for (int j = 0; j < len - i-1; j++) {
			if (criterion(mas[j].length(), mas[j + 1].length())) {
				// меняем элементы местами
				swap(mas[j], mas[j + 1]);
			}
		}
	}
}

void words_length(string* words, int* lengths, int len) {
	for (int i = 0; i < len; i++) {
		lengths[i] = words[i].length();
	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int len;
	cout << "Введите количество слов: ";
	cin >> len;
	string* arr_word = new string[len];
	input_word(arr_word, len);
	cout << len << endl;
	cout << "Начальные данные:" << endl << endl;
	output_word(arr_word, len);
	sort(criterion, arr_word, len);
	cout << "Отсортированые данные:" << endl << endl;
	output_word(arr_word, len);
	int* lenghts = new int[len];
	words_length(arr_word, lenghts, len);
	cout << "Длины слов:" << endl;
	for (int i = 0; i < len; i++) {
		cout<< lenghts[i] << " ";
	}
	string name;
	cout << endl;
	cout << "Введите имя файла: ";
	cin >> name;
	file_output_word(arr_word, lenghts, len, name);
	cout << endl;
	system("pause");
	return 0;
}

