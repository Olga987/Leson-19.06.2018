
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
	//cout << "Я загадал число" << endl;
	//bool ugadal = false;
	//int userNumber;
	//do
	//{
	//	cout << "popitka N"<< ++popitka << endl;
	//	cout << "Введите свое:";
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
		//	//if (i == 77) // если нужно 77
		//	//	break;
		//	
		//}




		//int n = 20;
		//cout << "Угадайте число" << endl;
		//bool ugadal = false;
		//int userNumber;

		//do
		//{
		//	cout << "Введите свое:";
		//	cin >> userNumber;

		//	if (n == userNumber){
		//		ugadal = true;
		//	cout << "Угадал" << endl;
		//	}
		//	else 
		//		cout << "Не угадал" << endl;
		//} while (!ugadal);
		//



		//int n = 20,a=0;
		//cout << "Угадайте число" << endl;
		//cout << "Введите свое:";
		//cin >> a;
		//while (a!=n)
		//{
		//	cout << a++ << endl;
		//}



		//int n= 20, a = 0,popitka=0;
		//cout << "Угадайте число" << endl;
		//for (int i = 0; i < 5; i++)
		//{
		//	cout << "popitka N" << ++popitka << endl;
		//	cout << "Введите свое:";
		//	cin >> a;
		//	if(n==a)
		//		cout << "Угадал" << endl<<endl;
		//	else if (n != a)
		//		cout << "Не угадал" << endl<<endl;
		//}



	//int popitka = 5;
	//int counter = 0;
	//while (popitka-- != 0)
	//{
	//	if (popitka == 1)
	//		cout << "Отгадал с последней попытки";
	//	else
	//		cout << "Отгадал с попытки" << ++counter << endl;
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
	//			cout << "Угадал с попытки: " << counter << endl;
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
	//			cout << "Сколько?:" << endl;
	//				cin >> amount;
	//				cout << amount * 340<<endl;
	//		}
	//		if (choise == 2) {
	//			cout << "Сколько?:" << endl;
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
	//		cout << "Сколько?:" << endl;
	//		cin >> amount;
	//		cout << amount * 340 << endl;
	//	}
	//			break;
	//	case 2: {
	//		cout << "Сколько?:" << endl;
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
		cout << "Угадал" << endl;
		cout << "Отгадал с попытки: " << i<<endl;
		break;
	}
	i++;



}

}