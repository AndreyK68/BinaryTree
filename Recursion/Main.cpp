//Recursion, Factorial, Power
#include<iostream>
using namespace std;
//#define FACTORIAL_RECURSION
#define POWER_RECURSION

#ifdef POWER_RECURSION
double power = 1;
void Power(int stepen,float m)
{
	if (stepen==0)return;
	//cout << stepen << endl;
	power = power * m;
	Power(stepen - 1,m); // ����������� �����
}
void main()
{
	setlocale(LC_ALL, "Russian");
	float a;
	float m;
	int n;
	cout << "������� ���������: "; cin >> m;
	cout << "������� ������� �����: "; cin >> a;
	int p = a;
	float c = a - p;
	n = a * a;
	n = sqrt(n);
	Power(n,m);
	
	//cout << c << endl;
	//cout << p << endl;
	cout << endl;
	if (c!=0)
	{
		cout << "� �� ��������� �����������, ���� ���������" << endl;
		cout << "� ������� �������. ��� ����� ��������� ��: " << p << endl;
	}
	if (a<0)
	{
		cout << "���������: " << 1/power << endl;
	}
	else
	{
		cout << "���������: " << power << endl;
	}
	
}
#endif // POWER_RECURSION

#ifdef FACTORIAL_RECURSION
unsigned long long Factorial = 1;
void elevator(int level)
{
	if (level == 0) return;
	if (level > 60) return;
	if (level < 0) return;
	//cout << level << endl;
	Factorial = Factorial * level;
	elevator(level - 1); // ����������� �����
}
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << "���������: ";
	int n;
	cout << "������� �����: "; cin >> n;
	elevator(n);
	cout << endl;
	if (n > 60)
	{
		Factorial = 0;
		cout << "�����, ������� �� ���� �����." << endl;
		cout << "������ ������ ��������??? - �� ������!" << endl;
	}
	else
	{			
	if (n < 0)
	{
		//cout << "���������: --" << endl;
		cout << "�� ������ ���������� �� ������������� ������! ��� ��������!" << endl;
	}
	else
	{
		cout << "���������: " << Factorial << endl;
	}
	}
	cout << endl;
}
#endif // FACTORIAL_RECURSION