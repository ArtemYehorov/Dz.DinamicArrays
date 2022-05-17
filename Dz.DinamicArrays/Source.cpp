#include<iostream>
#include"Header.h"

using namespace std;

//template <typename T>
//void free_memory(T*& ar);
//
//template <typename T>
//void Random(T*& ar, int& size);
//
//template <typename T>
//void insert_element(T*& ar, int& size, T number, int index);
//
//template <typename T>
//void delete_element(T*& ar, int size, int index);
//
//template <typename T>
//void addcin(T*& ar, int& size);
//
//template <typename T>
//void fill_array(T*& ar, int& size, T num);

int main()
{
	srand(time(0));

	int index;
	int* ar = new int[5];
	int size;
	cout << "Enter the number of array elements - ";
	cin >> size;

	cout << "How do you want to populate your array? \n1.Random\n2.Enter yourself.\n3.The same number - ";
	int choise;
	cin >> choise;

	if (choise == 1) Random(ar, size);
	else if (choise == 2) addcin(ar, size);
	else
	{
		cout << endl;
		int num;
		cout << "Enter a number to completely fill the array with this number - ";
		cin >> num;
		fill_array(ar, size, num);
	}

	cout << endl;
	cout << "Enter a location to add a new array element - ";
	cin >> index;
	insert_element(ar, size, 10, index);

	cout << endl;
	cout << "Enter the index of the array element to remove it - ";
	cin >> index;
	delete_element(ar, size, index);

}

