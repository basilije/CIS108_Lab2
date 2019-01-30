#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//entering an age
	cout << "Enter your age: "; 
	int age;
	cin >> age;

	int age_after_ten_years = age + 10; //calculating an age in ten years
	cout << "In ten years you will be " << age_after_ten_years << " old." << endl; //printing an age in ten years

	//entering a fahrenheit temperature
	cout << "Enter temperature in degrees in fahrenheit: "; 
	double fahrenheit_temperature;
	cin >> fahrenheit_temperature;

	double celsius_degree_temperature = (fahrenheit_temperature - 32) * 5 / 9; //calculating a celsius temperature
	cout << "The temperature in degrees celsius is " << celsius_degree_temperature << endl; //printing a celsius temperature

	return 0;
}

