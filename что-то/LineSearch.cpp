#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "[";
	for (int i{}; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
};

// �������� ����� ������� ��������� �������� � ������.
template <typename T>
int search_index(T arr[], const int length, T value, int begin = 0) {
	for (int i{begin}; i < length; i++)
		if (arr[i] == value)
			return i;
	return -1;
}; 

// �������� ����� ���������� ��������� �������� � ������.
template <typename T>
int search_last_index(T arr[], const int length, T value) {
	for (int i = length - 1; length >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

template <typename T>
int search_last_index(T arr[], const int length, T value, int begin) {
	for (int i = begin; length >= 0; i--)
		if (arr[i] == value)
			return i;
	return -1;
}

void subword(char word[], const int length, char sym) {
	int index = search_index(word, length, sym);
	if (index != -1) {
		for (int i = index; i < length; i++)
			std::cout << word[i];
		std::cout << "\n";
	}
	else
		std::cout << "������";
}

int main() {
	// �������� �����.
	setlocale(LC_ALL, "Russian");
	int n;
	/*
	
	srand(time(NULL));

	const int size{ 10 };

	int arr[size]{};

	for (int i{}; i < size; i++)
		arr[i] = rand() % 11;

	std::cout << "������: \n";
	print_arr(arr, size);
	int index;
	std::cout << "������� ����� -> ";
	std::cin >> n;

	// index = search_index(arr, size, n);
	
	index = search_last_index(arr, size, n, 5);

	if (index != -1)
		std::cout << "������ = " << index << "\n\n";
	else
		std::cout << "����� ��� � �������.";
		*/
	
	// ������� "��������"
	std::cout << "�����:\n";
	const int word_size = 8;
	char word[word_size]{ 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n'};
	for (int i{}; i < word_size; i++)
		std::cout << word[i];
	std::cout << "\n������� ������ -> ";
	char sym;
	std::cin >> sym;
	std::cout << "��������:\n";
	subword(word, word_size, sym);


	return 0;
}