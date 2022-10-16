#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>

int prog_one_task_one() {
	std::string Surname;
	std::string Name;
	std::string Mname;
	unsigned long long int Pnumber;

	std::cout << "Enter your surname: \n";
	std::cin >> Surname;

	std::cout << "Enter your name: \n";
	std::cin >> Name;

	std::cout << "Enter your middle name(if you don't have it, type None): \n";
	std::cin >> Mname;

	std::cout << "Enter your phone number: \n";
	std::cin >> Pnumber;

	std::cout << "Thank you for registering to phone book! Your data: " << Surname << " " << Name << " " << Mname << " " << Pnumber << std::endl;

	return 0;
}


int prog_two_task_one() {
	double x;
	double y;

	std::cout << "Enter x: \n";
	std::cin >> x;

	std::cout << "Enter y: \n";
	std::cin >> y;

	double b = (x + (y / (5 + sqrt(x)))) / (abs(y + x) + x * (1 / 3));
	double a = cos(tan(1 / b)) * cos(tan(1 / b));

	std::cout << "Result: " << a;
	return 0;
}


int prog_one_task_two() {
	std::string NameOfMovie;
	std::string Genre;
	long int date;
	long float Budget;

	std::cout << "Enter Name of Movie: \n";
	std::cin >> NameOfMovie;

	std::cout << "Enter Genre of Movie: \n";
	std::cin >> Genre;

	std::cout << "Enter the budget of your movie: \n";
	std::cin >> Budget;

	std::cout << "Enter the date of annoucment: \n";
	std::cin >> date;

	std::cout << "Thank you for describing the movie! Your data: " << NameOfMovie << " " << Genre << " " << Budget << " " << date << std::endl;

	return 0;
}


int prog_two_task_two() {
	double x;
	double y;

	std::cout << "Enter x: \n";
	std::cin >> x;

	std::cout << "Enter y: \n";
	std::cin >> y;

	double b = (2 * cos(x - (M_PI / 6)))/((1/x) + sin(y) * sin(y));
	double a = pow(exp(x), b-1) + tan(x) * tan(x);

	std::cout << "Result: " << a;
	return 0;
}


int prog_one_task_three() {
	std::string Surname;
	int numberOfRoom;
	int date;
	float cost;
	

	std::cout << "Enter your surname: \n";
	std::cin >> Surname;

	std::cout << "Enter a number of your room: \n";
	std::cin >> numberOfRoom;

	std::cout << "Enter the date, when you moved in: \n";
	std::cin >> date;

	std::cout << "Enter the cost of your room: \n";
	std::cin >> cost;

	std::cout << "Thank you for entering your data! Your data: " << Surname << " " << numberOfRoom << " " << date << " " << cost << std::endl;

	return 0;
}


int prog_two_task_three() {
	double a;
	double b;

	std::cout << "Enter a: \n";
	std::cin >> a;

	std::cout << "Enter b: \n";
	std::cin >> b;


	double z = abs(b - 15.1);
	double y = (pow(exp(b), -a) + ((z + 10 * 10 * 10) / (sin(z))) / (cos(M_PI) + log10(b)));

	std::cout << "Result: " << a << std::endl;
	return 0;
}
int main() {
	prog_one_task_one();
	prog_two_task_one();
	prog_one_task_two();
	prog_two_task_two();
	prog_one_task_three();
	prog_two_task_three();
}