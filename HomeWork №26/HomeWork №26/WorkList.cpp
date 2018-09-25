#include <iostream>
#include <conio.h>
#include<iomanip>
#include<ctime>
#include <string>
#include <windows.h>
using namespace std;

void SetColor(int col)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), col);
}
void SetPos(int x, int y)
{
	COORD c;
	c.X = x;
	c.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

bool MenuPrg;
int m_pos = 0, Choise = 0;
int m_pos1 = 0, Choise1 = 0;
void MiniExel_4();

struct date
{
	int day;
	int mounth;
	int year;
	void Date(int b)
	{
		int y;
		if (b == 5)
			y = 5;
		else if (b == 9)
			y = 9;
		while (true)
		{
			SetPos(52, y); cin >> day;
			if (cin.good())
			{
				if (day > 0 && day <= 31)
				{
					cin.ignore(10, '\n');
					SetPos(54, y); cout << " / ";
					cin >> mounth;
					if (mounth > 0 && mounth <= 12)
					{
						cin.ignore(10, '\n');
						SetPos(59, y); cout << " / ";
						cin >> year;
						if (year > 1750 && year <= 2100)
						{
							cin.ignore(10, '\n');
							for (size_t i = 0; i < 6; i++)
							{
								for (size_t j = 0; j < 38; j++)
								{
									SetPos(38 + j, 12 + i); cout << " ";
								}
							}
							break;
						}
					}
				}
			}
			MiniExel_4();
			cin.clear();
			for (size_t i = 0; i < 20; i++)
			{
				SetPos(52 + i, y); cout << " ";
			}
			cin.ignore(10, '\n');
		}
	}
	void Show(int a)
	{
		if (a == 5)
		{
			SetPos(52, 5); cout << day << " / " << mounth << " / " << year;
		}
		else if (a == 9)
		{
			SetPos(52, 9); cout << day << " / " << mounth << " / " << year;
		}
	}
};
struct Ñompany
{
	string Name_Comp;
	string Branch;
};
class Employee
{
	public:
	string Name;
	string Surname;
	int Income;
	int Number()
	{
		while (true)
		{
			SetPos(52, 8); cin >> Income;
			if (cin.good())
			{
				cin.ignore(10, '\n');
				for (size_t i = 0; i < 6; i++)
				{
					for (size_t j = 0; j < 37; j++)
					{
						SetPos(38 + j, 12 + i); cout << " ";
					}
				}
				break;
			}
			MiniExel_4();
			cin.clear();
			for (size_t i = 0; i < 20; i++)
			{
				SetPos(52 + i, 8); cout << " ";
			}
			cin.ignore(10, '\n');
		}
		return Income;
	}
	date Work;
	date Birthday;
	Ñompany Comp;
};

void choice2(Employee *&ptr, int *&size);
void MenuProg(Employee *&ptr, int *&size);

int HeightMaps = 22; int WidhtMaps = 37; int X_Pos_MiniExel = 38;
void Exel()
{
	char symMaps;
	SetPos(0, 0); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 0)
		{
			symMaps = 201;
			cout << symMaps;
		}
		if (i == WidhtMaps - 1)
		{
			symMaps = 187;
			cout << symMaps;
		}
		else if (i == 8)
		{
			symMaps = 203;
			cout << symMaps;
		}
		else if (i == 24)
		{
			symMaps = 203;
			cout << symMaps;
		}
		else
		{
			symMaps = 205;
			cout << symMaps;
		}
	}
	SetPos(0, HeightMaps); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 0)
		{
			symMaps = 200;
			cout << symMaps;
		}

		if (i == WidhtMaps - 1)
		{
			symMaps = 188;
			cout << symMaps;
		}
		else if (i == 13)
		{
			symMaps = 202;
			cout << symMaps;
		}
		else if (i == 22)
		{
			symMaps = 202;
			cout << symMaps;
		}
		else
		{
			symMaps = 205;
			cout << symMaps;
		}
	}
	SetPos(1, 2); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 8)
		{
			symMaps = 202;
			cout << symMaps;
		}
		else if (i == 24)
		{
			symMaps = 202;
			cout << symMaps;
		}
		else if (i == 3)
		{
			symMaps = 203;
			cout << symMaps;
		}
		else if (i == 23)
		{
			symMaps = 203;
			cout << symMaps;
		}
		else
		{

			symMaps = 205;
			cout << symMaps;
		}
	}
	SetPos(1, 20); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 13)
		{
			symMaps = 203;
			cout << symMaps;
		}
		else if (i == 22)
		{
			symMaps = 203;
			cout << symMaps;
		}
		else if (i == 3)
		{
			symMaps = 202;
			cout << symMaps;
		}
		else if (i == 23)
		{
			symMaps = 202;
			cout << symMaps;
		}
		else
		{
			symMaps = 205;
			cout << symMaps;
		}
	}
	for (int i = 3; i < 20; i++)
	{

		SetPos(4, i); symMaps = 186; cout << symMaps;

	}
	for (int i = 3; i < 20; i++)
	{

		SetPos(24, i); symMaps = 186; cout << symMaps;

	}
	for (int i = 1; i < HeightMaps; i++)
	{
		SetPos(0, i);
		if (i == 2)
		{
			symMaps = 204; cout << symMaps;
		}
		else if (i == 20)
		{
			symMaps = 204; cout << symMaps;
		}
		else
		{
			symMaps = 186; cout << symMaps;
		}
	}
	for (int i = 1; i < HeightMaps; i++)
	{
		SetPos(WidhtMaps, i);
		if (i == 2)
		{
			symMaps = 185; cout << symMaps;
		}
		else if (i == 20)
		{
			symMaps = 185; cout << symMaps;
		}
		else
		{
			symMaps = 186; cout << symMaps;
		}
	}
}
void PrintInfoCont()
{
	if (Choise == 0)
	{
		SetColor(10); SetPos(49, 1); cout << "ADD NEW EMPLOYEE"; SetColor(7);
	}
	else if (Choise == 1)
	{
		SetPos(39, 1); SetColor(14); cout << " CONFIRM THE IMPROVEMENT OF SALARY"; SetColor(7);
	}
	else if (Choise == 3)
	{
		SetPos(44, 1); SetColor(14); cout << "INFORMATION ABOUT EMPLOYEE"; SetColor(7);
	}
	SetPos(40, 3); cout << "NAME: ";
	SetPos(40, 4); cout << "SURNAME: ";
	SetPos(40, 5); cout << "BIRTHDAY: ";
	SetPos(40, 6); cout << "COMPANY: ";
	SetPos(40, 7); cout << "DIRECTION: ";
	SetPos(40, 8); cout << "INCOME: ";
	SetPos(40, 9); cout << "EMPLOYED: ";

}
void Instruction()
{
	SetColor(10); SetPos(10, 24); cout << "USER INSTRUCTIONS"; SetColor(7);
	SetPos(2, 26); cout << "ACTION: ENTER";
	SetPos(22, 26); cout << "BACK: ESC";

}
void MiniExel_4()
{
	SetPos(51, 13); SetColor(12); cout << "ERROR DATA  " << endl; SetColor(7);
	SetPos(42, 15); cout << "INCORRECT IMPORTANCE OF VALUES" << endl;
	SetPos(52, 16); cout << "TRY AGAIN" << endl;
	char symMaps;
	SetPos(X_Pos_MiniExel, 12); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 0)
		{
			symMaps = 201;
			cout << symMaps;
		}
		if (i == WidhtMaps - 1)
		{
			symMaps = 187;
			cout << symMaps;
		}
		else
		{
			symMaps = 205;
			cout << symMaps;
		}
	}
	SetPos(X_Pos_MiniExel, 17); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 0)
		{
			symMaps = 200;
			cout << symMaps;
		}

		if (i == WidhtMaps - 1)
		{
			symMaps = 188;
			cout << symMaps;
		}
		else
		{
			symMaps = 205;
			cout << symMaps;
		}
	}
	SetPos(X_Pos_MiniExel, 14); for (int i = 0; i < WidhtMaps; i++)
	{

		symMaps = 205;
		cout << symMaps;
	}
	for (int i = 13; i < 17; i++)
	{
		SetPos(X_Pos_MiniExel, i);
		if (i == 11)
		{
			symMaps = 204; cout << symMaps;
		}

		else
		{
			symMaps = 186; cout << symMaps;
		}
	}
	for (int i = 13; i < 17; i++)
	{
		SetPos(WidhtMaps + X_Pos_MiniExel, i);
		if (i == 11)
		{
			symMaps = 185; cout << symMaps;
		}
		else
		{
			symMaps = 186; cout << symMaps;
		}
	}
}
void MiniExel_2()
{
	Instruction();
	char symMaps;
	SetPos(0, 23); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 0)
		{
			symMaps = 201;
			cout << symMaps;
		}
		if (i == WidhtMaps - 1)
		{
			symMaps = 187;
			cout << symMaps;
		}
		else
		{
			symMaps = 205;
			cout << symMaps;
		}
	}
	SetPos(0, 27); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 0)
		{
			symMaps = 200;
			cout << symMaps;
		}

		if (i == WidhtMaps - 1)
		{
			symMaps = 188;
			cout << symMaps;
		}
		else if (i == 18)
		{
			symMaps = 202;
			cout << symMaps;
		}
		else
		{
			symMaps = 205;
			cout << symMaps;
		}
	}
	SetPos(1, 25); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 18)
		{
			symMaps = 203;
			cout << symMaps;
		}
		else
		{

			symMaps = 205;
			cout << symMaps;
		}
	}
	for (int i = 24; i < 27; i++)
	{
		SetPos(0, i);
		if (i == 2)
		{
			symMaps = 204; cout << symMaps;
		}
		else if (i == 25)
		{
			symMaps = 204; cout << symMaps;
		}
		else
		{
			symMaps = 186; cout << symMaps;
		}
	}
	for (int i = 24; i < 27; i++)
	{
		SetPos(WidhtMaps, i);
		if (i == 2)
		{
			symMaps = 185; cout << symMaps;
		}
		else if (i == 25)
		{
			symMaps = 185; cout << symMaps;
		}
		else
		{
			symMaps = 186; cout << symMaps;
		}
	}
}
void MiniExel()
{
	PrintInfoCont();
	char symMaps;
	SetPos(X_Pos_MiniExel, 0); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 0)
		{
			symMaps = 201;
			cout << symMaps;
		}
		if (i == WidhtMaps - 1)
		{
			symMaps = 187;
			cout << symMaps;
		}
		else
		{
			symMaps = 205;
			cout << symMaps;
		}
	}
	SetPos(X_Pos_MiniExel, 11); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 0)
		{
			symMaps = 200;
			cout << symMaps;
		}

		if (i == WidhtMaps - 1)
		{
			symMaps = 188;
			cout << symMaps;
		}
		else if (i == 10)
		{
			symMaps = 202;
			cout << symMaps;
		}
		else
		{
			symMaps = 205;
			cout << symMaps;
		}
	}
	SetPos(X_Pos_MiniExel, 2); for (int i = 0; i < WidhtMaps; i++)
	{
		if (i == 11)
		{
			symMaps = 203;
			cout << symMaps;
		}
		else
		{

			symMaps = 205;
			cout << symMaps;
		}
	}
	for (int i = 1; i < 11; i++)
	{
		SetPos(X_Pos_MiniExel, i);
		if (i == 2)
		{
			symMaps = 204; cout << symMaps;
		}
		else if (i == 20)
		{
			symMaps = 204; cout << symMaps;
		}
		else
		{
			symMaps = 186; cout << symMaps;
		}
	}
	for (int i = 1; i < 11; i++)
	{
		SetPos(WidhtMaps + X_Pos_MiniExel, i);
		if (i == 2)
		{
			symMaps = 185; cout << symMaps;
		}
		else if (i == 20)
		{
			symMaps = 185; cout << symMaps;
		}
		else
		{
			symMaps = 186; cout << symMaps;
		}
	}
}

void PrintNum(int *size)
{
	for (size_t i = 0; i < *size; i++)
	{
		SetPos(2, 4 + i); cout << i + 1;
	}
}
void PrintIncome(Employee *&ptr, int *size)
{
	SetColor(11); SetPos(2, 3); cout << (char)252;
	SetPos(6, 3); cout << "NAME AND SURNAME";
	SetPos(28, 3); cout << "INCOME"; SetColor(7);
	for (size_t i = 0; i < *size; i++)
	{
		SetPos(26, 4 + i); cout << ptr[i].Income << " " << (char)36;
	}
}
void ShowChar_2(Employee *ptr, int *size)
{
	PrintNum(size);
	PrintIncome(ptr, size);
	for (size_t i = 0; i < *size; i++)
	{
		if (i == m_pos1)
		{
			SetPos(6, 4 + i); SetColor(240);
			cout << ptr[i].Name << " ";
			cout << ptr[i].Surname << " "; SetColor(7);
		}
		else
		{
			SetPos(6, 4 + i);
			cout << ptr[i].Name << " ";
			cout << ptr[i].Surname << " ";
		}

	}
	choice2(ptr, size);
}
void ShowChar(Employee *ptr, int *size)
{
	PrintNum(size);
	PrintIncome(ptr, size);
	for (size_t i = 0; i < *size; i++)
	{
		SetPos(6, 4 + i);
		cout << ptr[i].Name << " ";
		cout << ptr[i].Surname << " ";
	}
}
void AddEmplyee(Employee *&ptr, int *&size)
{
	MiniExel();
	*size += 1;
	Employee *temp = new Employee[*size];
	for (size_t i = 0; i < *size - 1; i++)
	{
		temp[i] = ptr[i];
	}
	int i = *size - 1; 
		SetPos(52, 3); cin >> temp[i].Name;
		SetPos(52, 4); cin >> temp[i].Surname;
		SetPos(52, 5); temp[i].Birthday.Date(5);
		SetPos(52, 6); cin >> temp[i].Comp.Name_Comp;
		SetPos(52, 7); cin >> temp[i].Comp.Branch;
		SetPos(52, 8); temp[i].Number();
		SetPos(52, 9); temp[i].Work.Date(9);
	delete[] ptr;
	ptr = temp;
	MenuProg(ptr, size);
}
void Change(Employee *&ptr, int *size, int &Choise1)
{
	MiniExel();
	SetPos(52, 8); ptr[Choise1].Number();
	Choise1 = 0;
	MenuProg(ptr, size);
}
void DeleteEmplyee(Employee *&ptr, int *&size, int &Choise1)
{
	Employee *temp = new Employee[*size];
	for (size_t i = 0; i < Choise1; i++)
	{
		temp[i] = ptr[i];
	}
	for (size_t i = Choise1; i < *size - 1; i++)
	{
		temp[i] = ptr[i + 1];
	}
	*size -= 1;
	delete[]ptr;
	ptr = temp;
	Choise1 = 0;
	MenuProg(ptr, size);
}
void FullInfo(Employee *ptr, int *size, int &Choise1)
{
	MiniExel();
	SetPos(52, 3); cout << ptr[Choise1].Name;
	SetPos(52, 4); cout << ptr[Choise1].Surname;
	SetPos(52, 5); ptr[Choise1].Birthday.Show(5);
	SetPos(52, 6); cout << ptr[Choise1].Comp.Name_Comp;
	SetPos(52, 7); cout << ptr[Choise1].Comp.Branch;
	SetPos(52, 8); cout << ptr[Choise1].Income;
	SetPos(52, 9); ptr[Choise1].Work.Show(9);
	choice2(ptr, size);
}
void costsEmploe(Employee *ptr, int *size)
{
	MiniExel_2();
	for (size_t i = 0; i < 30; i++)
	{
		SetPos(1 + i, 24); cout << " ";
		SetPos(1 + i, 26); cout << " ";
	}
	int costs = 0;
	for (size_t i = 0; i < *size; i++)
	{
		costs += ptr[i].Income;
	}
	SetPos(15, 24); SetColor(14); cout << "REPORT";
	SetPos(2, 26); cout << "EXPENDITURE ON SALARY: "; SetColor(7); cout << costs << " " << (char)36;
}
void choice2(Employee *&ptr, int *&size)
{
	MiniExel_2();
	while (true)
	{
		int ch = _getch();
		switch (ch)
		{
		case 72:
			if (m_pos1 - 1 >= 0) { m_pos1 -= 1; }
			if (Choise1 > 0) { Choise1 -= 1; }
			ShowChar_2(ptr, size);
			break;
		case 80:
			if (m_pos1 + 1 <= *size - 1) { m_pos1 += 1; }
			if (Choise1 < *size - 1) { Choise1 += 1; }
			ShowChar_2(ptr, size);
			break;
		case 13: {
			if (Choise == 1)
			{
				m_pos1 = 0; Change(ptr, size, Choise1);
			}
			else if (Choise == 2)
			{
				m_pos1 = 0; DeleteEmplyee(ptr, size, Choise1);
			}
			else if (Choise == 3)
			{
				for (size_t i = 0; i < 9; i++)
				{
					for (size_t j = 0; j < 20; j++)
					{
						SetPos(52 + j, 3 + i); cout << " ";
					}
				}
				FullInfo(ptr, size, Choise1);
			}
		} break;
		case 27: m_pos1 = 0; Choise1 = 0; MenuProg(ptr, size); break;
		}
	}
}
void choice(int size_Menu, Employee *ptr, int *&size)
{
	while (true)
	{
		int ch = _getch();
		switch (ch)
		{
		case 72:
			if (m_pos  < 3) { continue; }
			else
			{
				MenuPrg = false;
				m_pos -= 3;
				Choise -= 3;
			}
			MenuProg(ptr, size);
			break;
		case 80:
			if (m_pos  > 2) { continue; }
			else
			{
				MenuPrg = true;
				m_pos += 3;
				Choise += 3;
			}
			MenuProg(ptr, size);
			break;
		case 77:
			if (MenuPrg)
			{
				if (m_pos + 1 < size_Menu) { ++m_pos; }
				if (Choise < size_Menu - 1) { Choise += 1; }
			}
			if (m_pos + 1 < size_Menu / 2) { ++m_pos; }
			if (Choise < size_Menu / 2 - 1) { Choise += 1; }
			MenuProg(ptr, size);
			break;
		case 75:
			if (MenuPrg)
			{
				if (m_pos - 1 > 2) { --m_pos; }
				if (Choise > 3) { Choise -= 1; }
			}
			else
			{
				if (m_pos - 1 >= 0) { --m_pos; }
				if (Choise > 0) { Choise -= 1; }
			}
			MenuProg(ptr, size);
			break;
		case 13: {
			if (Choise == 0)
			{
				AddEmplyee(ptr, size);
			}
			else if (Choise == 5)
			{
				delete[] ptr;
				exit('0');
			}
			if (*size > 0)
			{
				if (Choise == 1)
				{
					ShowChar_2(ptr, size);
				}
				else if (Choise == 2)
				{
					ShowChar_2(ptr, size);
				}
				else if (Choise == 3)
				{
					ShowChar_2(ptr, size);
				}
				else if (Choise == 4)
				{
					costsEmploe(ptr, size);
				}
			}
			else
			{
				SetColor(12); SetPos(9, 9); cout << "LIST OF EMPTY WORKERS";
				SetPos(10, 10); cout << "EMPLOYEE THE FIRST"; SetColor(8);
			}
		} break;
		}
	}
}
void MenuProg(Employee *&ptr, int *&size)
{
	system("cls");
	Exel();
	ShowChar(ptr, size);
	const int size_Menu = 6;
	char Menu1[size_Menu][20] = { { "ADD NEW" },{ "CHANGE EXISTING" },{ "REMOVE OLD" },{ "FULL INFO" },{ "SALARY" },{ "GO OUT" } };
	if (!MenuPrg)
	{
		SetPos(1, 1);
		for (size_t i = 0; i < size_Menu / 2; i++)
		{
			if (i == m_pos) { SetColor(10); cout << " " << Menu1[i]; SetColor(8); }
			else { cout << " " << Menu1[i]; }
		}
		SetPos(1, 21);
		for (size_t i = size_Menu / 2; i < size_Menu; i++)
		{
			cout << "   " << Menu1[i];
		}
	}
	else if (MenuPrg)
	{
		SetPos(1, 1);
		for (size_t i = 0; i < size_Menu / 2; i++)
		{
			cout << " " << Menu1[i];
		}
		SetPos(1, 21);
		for (size_t i = size_Menu / 2; i < size_Menu; i++)
		{
			if (i == m_pos)
			{
				SetColor(10); cout << "   " << Menu1[i]; SetColor(8);
			}
			else
			{
				cout << "   " << Menu1[i];
			}
		}
	}
	choice(size_Menu, ptr, size);
}
void main()
{
	system("MODE CON: COLS=76 LINES=28");
	srand(time(0));
	int *size = new int; *size = 0;
	Employee *ptr = new Employee[*size];
	MenuProg(*&ptr, size);
	system("pause>nul");
}