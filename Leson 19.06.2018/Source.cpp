
#include<iostream>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	//int n = 12;
	//int a;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << i+1 << endl;
	//}
	//cin >> a;





	//
	//
	//int n = 10;
	//while (n > 0)
	//{
	//	cout << n-- << endl;
	//}
	//
	//
	//
	//do
	//{
	//	cout << n++ << endl;
	//} while (n < 10);
	//cin >> n;





	//
	//int n = rand() % 20;
	//cout << "� ������� �����" << endl;
	//bool ugadal = false;
	//int userNumber;
	//do
	//{
	//	cout << "popitka N"<< ++popitka << endl;
	//	cout << "������� ����:";
	//	cin >> userNumber;
	//	if (n == userNumber)
	//		ugadal = true;
	//
	//
	//} while (!ugadal);





		//int n = 100;
		//for (int i = 0; i < n; i++)
		//{
		//	if (i== 77)
		//		continue;
		//	cout << i;

		//	//cout << i;
		//	//if (i == 77) // ���� ����� 77
		//	//	break;
		//	
		//}




		//int n = 20;
		//cout << "�������� �����" << endl;
		//bool ugadal = false;
		//int userNumber;

		//do
		//{
		//	cout << "������� ����:";
		//	cin >> userNumber;

		//	if (n == userNumber){
		//		ugadal = true;
		//	cout << "������" << endl;
		//	}
		//	else 
		//		cout << "�� ������" << endl;
		//} while (!ugadal);
		//



		//int n = 20,a=0;
		//cout << "�������� �����" << endl;
		//cout << "������� ����:";
		//cin >> a;
		//while (a!=n)
		//{
		//	cout << a++ << endl;
		//}



		//int n= 20, a = 0,popitka=0;
		//cout << "�������� �����" << endl;
		//for (int i = 0; i < 5; i++)
		//{
		//	cout << "popitka N" << ++popitka << endl;
		//	cout << "������� ����:";
		//	cin >> a;
		//	if(n==a)
		//		cout << "������" << endl<<endl;
		//	else if (n != a)
		//		cout << "�� ������" << endl<<endl;
		//}



	//int popitka = 5;
	//int counter = 0;
	//while (popitka-- != 0)
	//{
	//	if (popitka == 1)
	//		cout << "������� � ��������� �������";
	//	else
	//		cout << "������� � �������" << ++counter << endl;
	//	break;
	//
	//}



	//int popitka = 5;
	//int counter = 0;
	//int userNumber;
	//int zagadal = 100;
	//while (popitka-- != 0)
	//{
	//	cin >> userNumber;
	//	counter++;
	//	if (userNumber == zagadal)
	//	{
	//		if (popitka == 0)
	//			cout << "SUPER";
	//		else
	//			cout << "������ � �������: " << counter << endl;
	//		break;
	//	}
	//}




	//int amount = 0, choise = 0;
	//	while (true)
	//	{
	//		cout << "1.USD->TNG" << endl;
	//		cout << "2.TNG->USD" << endl;
	//		cout << "3.EXIT" << endl;
	//		cin >> choise;
	//		if (choise == 3)
	//			break;
	//		if (choise == 1) {
	//			cout << "�������?:" << endl;
	//				cin >> amount;
	//				cout << amount * 340<<endl;
	//		}
	//		if (choise == 2) {
	//			cout << "�������?:" << endl;
	//			cin >> amount;
	//			cout << amount / 340 << endl;
	//		}
	//
	//	}







	//int amount = 0,  a = 0;
	//bool exit = false;
	//while (!exit)
	//{
	//	cout << "1.USD->TNG" << endl;
	//	cout << "2.TNG->USD" << endl;
	//	cout << "3.EXIT" << endl;
	//	cin >> a;
	//	switch (a)
	//	{
	//	case 1: {
	//		cout << "�������?:" << endl;
	//		cin >> amount;
	//		cout << amount * 340 << endl;
	//	}
	//			break;
	//	case 2: {
	//		cout << "�������?:" << endl;
	//		cin >> amount;
	//		cout << amount / 340 << endl;
	//	}
	//			break;
	//	case 3: {
	//		exit = true; }
	//		break;
	//		

	//	default:
	//		break;
	//	}
	//}






int number;
cin >> number;
int a;
int i = 0;
while (true)
{
	int n = rand() % 1000;
	if (n == number) {
		cout << "������" << endl;
		cout << "������� � �������: " << i<<endl;
		break;
	}
	i++;



}

}