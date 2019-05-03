#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	string INPUT_FILE_PATH = "input.txt";      //Путь к текстовому файлу с заголовками http (https) (HTML - файлу)
	string OUTPUT_FILE_PATH = "output.txt";     //Путь к файлу

	ifstream  in_file;     // поток для чтения
	ofstream  out_file;    // поток для записи

	in_file.open(INPUT_FILE_PATH);      // окрываем файл для чтения
	out_file.open(OUTPUT_FILE_PATH);    // окрываем файл для записи

	string str;

	if (!in_file.is_open())
	{
		cout << "Файл не открыт\n\n";
		return -1;
	}
	else
	{
		cout << "Все ОК! Файл открыт!\n\n";

		/*НАЧАЛО ЧТЕНИЯ ФАЙЛА*/

		while (in_file)
		{

			// встроенная функция getline(), принимает поток для чтения и переменную, в которую надо считать текст:
			getline(in_file, str);

			/*Если функция find найдет совпадение, но она вернет нам позицию первого симсола
			  совпадаемого слова.
			*/

			int pos = str.find('http');

			if (pos > 0)
			{
				cout << str << endl;
				out_file << str << endl;

			}

		}
		/*КОНЕЦ ЧТЕНИЯ ФАЙЛА*/

		return 1;
	}

	in_file.close();   // закрываем файл 
	out_file.close();  // закрываем файл

}