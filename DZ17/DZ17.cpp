#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>


//�������� ������� � 17

//���������� ������� ���������� �������
template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}

// ����� ������� � �������
template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}


//������ 1. ������� ����. ���� �����
double mean(double num1, double num2) {
	return (num1 + num2) / 2;
}

//������ 2. ������� �������������� ���� ����� �������.
double mean_arr(int arr[], const int length) {
	int sum = 0;
	for (int i = 0; i < length; i++)
		sum += arr[i] / length;
	return sum;
}

//������ 3. ����� �������� ����� N �� 0 �� M ������������.
void powers(const int N, const int M) {
	for (int i = 0; i <= M; i++)
		std::cout << N << '^' << i << " = " << pow(N, i) << std::endl;
}

//������ 4. ������ ������������� �������� � ������� �� �������������.
void positive_arr(int arr[], const int length) {
	for (int i = 0; i < length; i++)
		if (arr[i] < 0)
			arr[i] *= (-1);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//������ 1. ������� �������������� ���� �����.
	std::cout << "������ 1.\n������� ��� ����� -> ";
	std::cin >> n >> m;
	std::cout << "������� �������������� ���� ����� = " << mean(n, m) << "\n\n";

	//������ 2. ������� �������������� ���� ��������� �������.
	std::cout << "������ 2.\n������: ";
	const int size = 10;
	int arr[size];
	fill_arr(arr, size, 10, 31);//���������� ������� ���������� �������
	print_arr(arr, size);// ����� ������� � �������
	std::cout << "������� ����. ���� ��������� �������: " << mean_arr(arr, size) << "\n\n";
	
	//������ 3. ����� �������� ����� N �� 0 �� M ������������.
	std::cout << "������ 3.\n������� ����� � �������: ";
	int N, M;
	std::cin >> N >> M;
	std::cout << "������� ����� " << N << " �� 0 �� " << M << ":\n";
	powers(N, M);
	std::cout << std::endl;

	//������ 4. ������ ������������� �������� � ������� �� �������������.
	std::cout << "������ 4.\n����������� ������:\n";
	const int size4 = 10;
	int arr4[size4];
	fill_arr(arr4, size4, -10, 11);
	print_arr(arr4, size4);

	positive_arr(arr4, size4);
	std::cout << "�������� ������:\n";
	print_arr(arr4, size4);

	return 0;
}