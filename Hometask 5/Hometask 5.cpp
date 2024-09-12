#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{

	/*
	// Random number generator
	srand(time(0));
	rand();

	const short SIZE = 10;
	int grades[SIZE];
	int min = 1; // Minimum number for array
	int max = 12; // Maximum number for array
	int k = max - min + 1;


	for (int i = 0; i < SIZE; i++) { // Filling array with random number between 1 (min) and 12 (max)
		grades[i] = rand() % k + min;
	}

	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << "Element # " << i << ": ";
		cout << grades[i] << "\n";
	}
	*/
	
	// ---

	/*
	// Random number generator
	srand(time(0));
	rand();

	const short SIZE = 20;
	int grades[SIZE];
	int min = 1; // Minimum number for array
	int max = 1000; // Maximum number for array
	int k = max - min + 1;


	for (int i = 0; i < SIZE; i++) { // Filling array with random number between 1 (min) and 12 (max)
		grades[i] = rand() % k + min;
	}

	for (int i = 0; i < SIZE; i++) // Showing array if index is even number
	{
		if (i % 2 == 0) {
			cout << "Element # " << i << ": ";
			cout << grades[i] << "\n";
		}
	}
	*/

	// ---

	/*
	// Random number generator
	srand(time(0));
	rand();

	const short SIZE = 10;
	int grades[SIZE];
	int min = -20; // Minimum number for array
	int max = 20; // Maximum number for array
	int k = max - min + 1;


	for (int i = 0; i < SIZE; i++) { // Filling array with random number between 1 (min) and 12 (max)
		grades[i] = rand() % k + min;
	}

	// int amount, sum, mean;

	int amount = 0;
	int sum = 0;
	int mean = 0;

	for (int i = 0; i < SIZE; i++) // Determine Amount / Sum / Arithmetic mean of positive numbers in array
	{
		if (grades[i] != 0 && grades[i] > 0) {
			sum += grades[i];
			mean += grades[i];
			amount++;
		}
	}

	cout << "Amount of positive numbers: " << amount << "\n";
	cout << "Sum of positive numbers: " << sum << "\n";

	mean /= SIZE;
	cout << "Arithmetic mean of positive numbers: " << mean << "\n";
	*/

	// ---
	
	/*
	// Random number generator
	srand(time(0));
	rand();

	const short SIZE = 100;
	int grades[SIZE];
	int min = 0; // Minimum number for array
	int max = 100; // Maximum number for array
	int k = max - min + 1;


	for (int i = 0; i < SIZE; i++) { // Filling array with random number between min and max
		grades[i] = rand() % k + min;
	}

	int user_input;
	int count = 0;
	cout << "Please, input a number to find it in array (0-100): ";
	cin >> user_input;

	for (int i = 0; i < SIZE; i++)
	{
		if (grades[i] == user_input) {
			count++;
		}
	}

	cout << "Amount of number found in array: " << count << "\n";
	*/
	
	// ---
	
	/*
	// Random number generator
	srand(time(0));
	rand();

	const short SIZE = 20;
	int grades[SIZE];
	int min = -10; // Minimum number for array
	int max = 30; // Maximum number for array
	int k = max - min + 1;


	for (int i = 0; i < SIZE; i++) { // Filling array with random number between 1 (min) and 12 (max)
		grades[i] = rand() % k + min;
	}

	// int amount, sum, mean;

	int sum = 0;
	int temp = 0;

	for (int i = 0; i < SIZE; i++) // Determine Sum of numbers in array after first positive number
	{
		if (grades[i] != 0 && grades[i] > 0) {
			temp = i;
			sum = grades[i];
			for (temp; temp < SIZE; temp++)
			{
				sum += grades[temp];
			}
		}
	}

	cout << "Sum of positive numbers: " << sum << "\n";
	*/
	
	// ---
	
	/*
	// Random number generator
	srand(time(0));
	rand();

	const short SIZE = 20;
	int grades[SIZE];
	int min = -10; // Minimum number for array
	int max = 100; // Maximum number for array
	int k = max - min + 1;


	for (int i = 0; i < SIZE; i++) { // Filling array with random number between min and max
		grades[i] = rand() % k + min;
	}

	// int min, max;

	int array_min = grades[0];
	int array_max = grades[0];

	for (int i = 0; i < SIZE; i++) // Determine minimum and maximum value in an array
	{
		if (grades[i] < array_min) {
			array_min = grades[i];
		}
		if (grades[i] > array_max) {
			array_max = grades[i];
		}
	}
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << grades[i] << ", ";
	}
	
	cout << "\n";

	cout << "Minimum number in array: " << array_min << "\n";
	cout << "Maximum number in array: " << array_max << "\n";
	*/
}