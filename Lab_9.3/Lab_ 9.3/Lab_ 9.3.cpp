#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <Windows.h> 

using namespace std;



struct Room
{
	bool booked;
	int num;
	string prizv;
	string inizialy;
	
};


void Create(Room* p, const int N);
void SaveToFile(Room* p, const int N, const char* filename);
void LoadFromFile(Room*& p, int& N, const char* filename);
int BinSearch(Room* p, const int N, const string prizv, const string inizialy);


int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N ;
	cout << "Введіть N: "; cin >> N;

	Room* p = new Room[N];

	
	
	string prizv, inizialy;
	char filename[100];
	int found;

	int menuItem;
	do {
		cout << endl << endl << endl;
		cout << "Виберіть дію:" << endl << endl;
		cout << " [1] - введення даних з клавіатури" << endl;
		cout << " [2] - запис у файл" << endl;
		cout << " [3] - зчитування з файлу" << endl;
		cout << " [4] - бінарний пошук мешканця за прізвищем та ініціалами" << endl;
		cout << " [0] - вихід та завершення роботи програми" << endl << endl;
		cout << "Введіть значення: "; cin >> menuItem;
		cout << endl << endl << endl;
		switch (menuItem)
		{
		case 1:
			Create(p, N);
			break;
		
		case 2:
			cin.get(); 
			cin.sync(); 

			cout << "Введіть ім'я файлу: "; cin.getline(filename, 99);
			SaveToFile(p, N, filename);
			break;

		case 3:
			cin.get(); 
			cin.sync(); 

			cout << "Введіть ім'я файлу: "; cin.getline(filename, 99);
			LoadFromFile(p, N, filename);
			break;
		case 4:
			cout << "Введіть ключі пошуку:" << endl;
			cout << "прізвище:  ";
			cin >> prizv;
			cout << "ініціали:  ";
			cin >> inizialy;

			cin.get();
			cin.sync();

			if ((found = BinSearch(p, N, prizv, inizialy)) != -1)
				cout << "Знайдено мешканця в позиції: " << found + 1 << endl;
			else
				cout << "Шуканого мешканця не знайдено" << endl;
			break;
		
		case 0:
			break;
		default:
			cout << "Ви ввели помилкове значення! "
				"Слід ввести число - номер вибраного пункту меню" << endl;
		}
	} while (menuItem != 0);


}

void Create(Room* p, const int N)
{
	int spec1;
	for (int i = 0; i < N; i++)
	{
		cout << "Кімната № " << i + 1 << ":" << endl;
		cin.get();
		cin.sync();

		cout << " [1] - зайнятий номер [0] - вільний: "; cin >> p[i].booked;
		cout << " кількість місць в номері: "; cin >> p[i].num;

		if (p[i].booked == true)
		{
			cout << " прізвище: "; cin >> p[i].prizv;
			cout << " ініціали: "; cin >> p[i].inizialy;
		}

	}
}

void SaveToFile(Room* p, const int N, const char* filename)
{
	ofstream fout(filename, ios::binary); 
	fout.write((char*)&N, sizeof(N)); 
	for (int i = 0; i < N; i++)
		fout.write((char*)&p[i], sizeof(Room)); 
	fout.close(); 
}

void LoadFromFile(Room*& p, int& N, const char* filename)
{
	delete[] p; 
	ifstream fin(filename, ios::binary); 
	fin.read((char*)&N, sizeof(N)); 
	p = new Room[N]; 
	for (int i = 0; i < N; i++)
		fin.read((char*)&p[i], sizeof(Room)); 
	fin.close(); 
}


void Edit(Room* p, const int N, int i)
{
	cout << "Кімната № " << i  << ":" << endl;
	cin.get();
	cin.sync();

	cout << " [1] - зайнятий номер [0] - вільний: "; cin >> p[i - 1].booked;
	cout << " кількість місць в номері: "; cin >> p[i - 1].num;

	if (p[i].booked == true)
	{
		cout << " прізвище: "; cin >> p[i - 1].prizv;
		cout << " ініціали: "; cin >> p[i - 1].inizialy;
	}
}

int BinSearch(Room* p, const int N, const string prizv, const string inizialy)
{
	int L = 0, R = N - 1, m;
	int mid;
	do {
		m = (L + R) / 2;
		
		if (p[m].prizv == prizv && p[m].inizialy == inizialy)
			return m;

		if (p[m].prizv == prizv && p[m].inizialy != inizialy)
		{
			L = m + 1;
		}
		else
		{
			R = m - 1;
		}
	} while (L <= R);
	return -1;
}
