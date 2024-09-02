/*
 ** Name:        Calculator Application
 ** Version:     2.0.0
 ** Description: Simple Calculator Application that accept Values from User
 ** Author:      Absallam
 ** Tools:       C++
*/

#include <iostream>

int menu(int& iChoise);
bool add(double& dNum1, double& dNum2, double& dResult);
bool sub(double& dNum1, double& dNum2, double& dResult);
bool divide(double& dNum1, double& dNum2, double& dResult);
bool multiply(double& dNum1, double& dNum2, double& dResult);
void readInputs(double& dNum1, double& bNum2);
void runCalculator();

int main()
{
	std::cout << "\t\t\t\t ********* Welcome to our Application *********\t\t\t\t\n";
	runCalculator();
	return 0;
}

void readInputs(double &dNum1, double& dNum2) {
	dNum1 = dNum2 = 0;
	while(true) {
	    std::cout << "Please Enter 2 Numbers ..\n";
		std::cin >> dNum1 >> dNum2;
		if(std::cin.fail()) {
			std::cout << "Invalid Inputs.. Please Try Again.\n";
			std::cin.clear();
			std::cin.ignore(1000, '\n');
		} else {
			break;
		}
	}
}

int menu() {
    int iChoise = 0;
	while(true) {
		std::cout << "Select one of These Options\n";
		std::cout << "1) Choose 1 to Add 2 Numbers\n";
		std::cout << "2) Choose 2 to sub 2 Numbers\n";
		std::cout << "3) Choose 3 to divide Numbers\n";
		std::cout << "4) Choose 4 to multiply Numbers\n";
		std::cout << "5) Exit.\n";

		std::cout << "Enter Your Choise..\n";
		std::cin >> iChoise;

		if(std::cin.fail()) {
			std::cout << "Invalid Inputs.. Please Try Again.\n";
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			menu();
		} else {
		    break;
		}
	}
	return iChoise;
}

bool add(double& dNum1, double& dNum2, double& dResult) {
	dResult = dNum1 + dNum2;
	return true;
}
bool sub(double& dNum1, double& dNum2, double& dResult) {
	dResult = dNum1 - dNum2;
	return true;
}
bool divide(double& dNum1, double& dNum2, double& dResult) {
	if(dNum2 == 0.0) {
		std::cout << "Can not Divide by Zero.\n";
		return false;
	} else {
		dResult = dNum1 / dNum2;
		return true;
	}
}
bool multiply(double& dNum1, double& dNum2, double& dResult) {
	dResult = dNum1 * dNum2;
	return true;
}
void runCalculator() {
	double dNum1, dNum2, dResult = 0;
	int iChoise;
	bool bFinished = false;

	while(!bFinished) {
		readInputs(dNum1, dNum2);
		iChoise = menu();

		switch(iChoise) {
		case 1: {
			bFinished = add(dNum1, dNum2, dResult);
			break;
		}
		case 2: {
			bFinished = sub(dNum1, dNum2, dResult);
			break;
		}
		case 3: {
			bFinished = divide(dNum1, dNum2, dResult);
			break;
		}
		case 4: {
			bFinished = multiply(dNum1, dNum2, dResult);
			break;
		}
		case 5: {
			continue;
		}
		default : {
			std::cout << "Invalid Inputs.. Please Try Again..\n";
		}
		}
		if(bFinished == true) {
			std::cout << "Result: " << dResult << '\n';
		}
	}
}