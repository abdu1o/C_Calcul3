#include <iostream>
using namespace std;

//(1)---------------------------------
//int main()
//{
//	int weight, height, sex;
//
//	cout << "Enter ur weight & height: ";
//	cin >> weight >> height;
//
//	cout << "Male or female? \n [1/2] \n";
//	cin >> sex;
//
//	int id_weight_m = height - 100;
//	int id_weight_f = height - 110;
//
//
//	if (sex == 1 && id_weight_m < weight)
//	{
//		cout << "U need to drop " << weight - id_weight_m << " kg";
//	}
//	else if (sex == 2 && id_weight_f < weight)
//	{
//		cout << "U need to drop " << weight - id_weight_f << " kg";
//	}
//	else if (sex == 1  or sex == 2 && id_weight_f >= weight)
//	{
//		cout << "U don`t need to drop weight ";
//	}
//	else
//	{
//		cout << "Error input";
//	}
//}
//------------------------------------


//(2)---------------------------------
//int main()
//{
//	int day, month, year;
//	bool correct_date = false;
//
//	cout << "Enter date [day month year]: ";
//	cin >> day >> month >> year;
//
//	switch (month)
//	{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//
//		if (day <= 31)
//		{
//			correct_date = true;
//		}
//		break;
//
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//
//		if (day <= 30)
//		{
//			correct_date = true;
//		}
//		break;
//
//	case 2:
//
//		if (day <= 29 && year % 4 == 0 or day <= 28 && year % 4 != 0)
//		{
//			correct_date = true;
//		}
//		break;
//	}
//
//	if (correct_date == false)
//	{
//		cout << "Wrong date!";
//	}
//	else
//	{
//		if (day == 31 && month == 12)
//		{
//			day = 1;
//			month = 1;
//			year += 1;
//		}
//		else if (day == 31 && (month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10))
//		{
//			month++;
//			day = 1;
//		}
//		else if (day == 30 && (month == 4 or month == 6 or month == 9 or month == 11))
//		{
//			month++;
//			day = 1;
//		}
//		else if (month == 2 && (day == 28 or day == 29))
//		{
//			month++;
//			day = 1;
//		}
//		else
//		{
//			day++;
//		}
//	}
//	cout << "Next date: " << day << "." << month << "." << year;
//}
//------------------------------------


//(3)---------------------------------
//int main()
//{
//	double cels;
//
//	cout << "Enter temperature (celsius): ";
//	cin >> cels;
//
//	if (cels >= 25)
//	{
//		cout << "It`s hot \nTemperature tomorrow: " << cels + 1.5 << " \n";
//		cout << "Wind speed: " << (cels * 15) / 100 << " km/h \n";
//		cout << "Chance of precipitation: " << cels / 500 * 100 << "% \n";
//		cout << "Temperature of water : " << cels - 8.5 << "\n";
//
//	}
//	else if (cels >= 15)
//	{
//		cout << "It`s warm \nTemperature tomorrow: " << cels + 1.5 << " \n";
//		cout << "Wind speed: " << (cels * 20) / 100 << " km/h \n";
//		cout << "Chance of precipitation: " << cels / 200 * 100 << "% \n";
//		cout << "Temperature of water : " << cels - 5.5 << "\n";
//	}
//	else if (cels >= 0)
//	{
//		cout << "It`s cold \nTemperature tomorrow: " << cels + 1.5 << " \n";
//		cout << "Wind speed: " << (cels * 40) / 100 << " km/h \n";
//		cout << "Chance of precipitation: " << cels / 15 * 100 << "% \n";
//		cout << "Temperature of water : " << cels - (cels / 2) << "\n";
//	}
//	else if (cels < 0 or cels > 40 )
//	{
//		cout << "It`s terrible";
//	}
//	else
//	{
//		cout << "Error input";
//	}
//}
//------------------------------------


//(4)---------------------------------
//int main()
//{
//
//	int chicks, price;
//	double egg_price;
//
//	cout << "Enter price for 1 chicken and amount of chickens: ";
//	cin >> price >> chicks;
//	cout << "Enter price for 1 egg: ";
//	cin >> egg_price;
//
//	int egg_day = 2 * chicks;
//	egg_price = egg_price - (egg_price * 10 / 100);
//
//	int day_income = egg_day * egg_price;
//
//	int chick_price = chicks * price;
//	
//	cout << "Valera need " << chick_price / day_income << " days";
//}
//------------------------------------