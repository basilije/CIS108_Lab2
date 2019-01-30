#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// entering a book title
	cout << "Enter the book title: ";
	string book_title;
	getline(cin, book_title);

	// entering an author
	cout << "Enter the author: ";
	string author;
	getline(cin, author);

	// entering a publish year
	cout << "Enter the publish year: ";
	int publish_year;
	cin >> publish_year;

	// entering a number of pages
	cout << "Enter the total number of pages: ";
	int number_of_pages;
	cin >> number_of_pages;

	// defining the current year
	constexpr int current_year = 2019;

	// printing the sentence that depends of a publish year
	if (current_year - publish_year < 10)
		cout << "This book is younger than ten years old.";
	else
		cout << "This book is at least ten years old.";
	cout << endl;

	// printing the sentence that depends of a number of pages
	if (number_of_pages < 100)
		cout << "This book is a short book.";
	else if (number_of_pages < 300) 
		cout << "This book is an average book.";
	else
		cout << "This book is a long book.";
	cout << endl << endl;

	return 0;
}
