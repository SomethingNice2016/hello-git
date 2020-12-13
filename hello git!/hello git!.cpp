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

void sort(int* criterion(), )

void words_length(string* words, int* lengths, int len) {
	for (int i = 0; i < len; i++) {
		lengths[i] = words[i].length();
	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int len;
	cout << "Введите количество слов";
	cin >> len;
	string* arr_word = new string[len];
	input_word(arr_word, len);
	cout << len << endl;
	for (int i = 0; i < len; i++) {
		cout <<"word_o " << arr_word[i] << endl;
	}
	int* lenghts = new int[len];
	words_length(arr_word, lenghts, len);
	for (int i = 0; i < len; i++) {
		cout << "word_l " << lenghts[i] << endl;
	}

	return 0;
}

