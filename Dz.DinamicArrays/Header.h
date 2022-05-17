#pragma once

using namespace std;

template <typename T>
void free_memory(T*& ar);

template <typename T>
void Random(T*& ar, int& size);

template <typename T>
void insert_element(T*& ar, int& size, T number, int index);

template <typename T>
void delete_element(T*& ar, int& size, int index);

template <typename T>
void addcin(T*& ar, int& size);

template <typename T>
void fill_array(T*& ar, int& size, T num);

template <typename T>
void delete_element(T*& ar, int& size, int index)
{
	size--;
	T* br = new int[size - 1];

	for (int i = 0; i < index; i++)
	{
		br[i] = ar[i];
	}
	for (int i = index; i < size; i++)
	{
		br[i] = ar[i + 1];
	}

	delete[] ar;

	ar = br;

	for (int i = 0; i < size; i++)
	{
		cout << ar[i] << ", ";
	}
}

template <typename T>
void insert_element(T*& ar, int& size, T number, int index)
{
	size++;
	T* temp = new T[size];
	if (index <= size && index > 0)
	{
		for (int i = 0; i < index; i++) {

			temp[i] = ar[i];
		}
		temp[index] = number;
		for (int i = index; i < size; i++)
		{
			temp[i + 1] = ar[i];
		}
	}
	else if (index <= 0)
	{
		temp[0] = number;
		for (int i = 0; i < size; i++)
		{
			temp[i + 1] = ar[i];
		}
	}
	else
	{
		for (int i = 0; i < size - 1; i++)
		{
			temp[i] = ar[i];
		}
		temp[size - 1] = number;
	}

	free_memory(ar);
	ar = temp;

	for (int i = 0; i < size; i++)
	{
		cout << ar[i] << ", ";
	}
}

template <typename T>
void addcin(T*& ar, int& size)
{
	T* temp = new T[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter array element by index " << i << " - ";
		cin >> temp[i];
	}

	free_memory(ar);

	ar = temp;
	for (int i = 0; i < size; i++)
	{
		cout << ar[i] << ", ";
	}

}

template <typename T>
void fill_array(T*& ar, int& size, T num = 0)
{
	T* temp = new T[size];
	for (int i = 0; i < size; i++)
	{
		temp[i] = num;
	}
	free_memory(ar);
	ar = temp;
	for (int i = 0; i < size; i++)
	{
		cout << ar[i] << ", ";
	}
}

template <typename T>
void Random(T*& ar, int& size)
{
	for (int i = 0; i < size; i++)
	{
		ar[i] = rand() % 100;
		cout << ar[i] << ", ";
	}
}

template <typename T>
void free_memory(T*& ar)
{
	delete[] ar;
}