#include<iostream>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello controls!" << endl;
	int t;
	cout << "������� ����������� �������"; cin >> t;
	if (t > 0)
	{
		cout << "�� ����� �����"<<endl;
	}
	else
		{
			cout << "�� ����� �������"<< endl;
		}

}