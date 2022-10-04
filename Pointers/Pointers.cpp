// ������������ ������
#include <iostream>
#include <cstdlib>
#include <ctime>
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = begin + rand() % end;
}
template <typename T>
void show_arr(T arr[], const int length) {
	std::cout << '[';
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b]\n";
}
void my_swap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void Pswap(int* pn, int* pm) {
	int tmp = *pn;
	*pn = *pm;
	*pm = tmp;
}
template <typename T>
void sum_arr(T *arr, const int length, T* variable) {
	*variable = 0;
	for (int i = 0; i < length; i++)
		*variable += *(arr+i);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n = 10, m=20;
	//������� � ���������
	/*
	std::cout << "n = " << n << " m = " << m << '\n';//10 20
	//my_swap(n, m); // �� �������� ��� ��� ��������� ��� �����
	Pswap(&n, &m);// �������� ��� ��� ����������� ������ ����������
	std::cout << "n = " << n << " m = " << m << '\n';
	*/
	//��������� �� ����������
	/*
	std::cout<<"����� n = " << &n << '\n';// ����� ������ ����������
	int* pn;// ���������� ��������� �� ��� int
	pn = &n;// �� ���������� ��������� �� ����� ���������� n
	// ����� ������ ��� = int*pn = &n;
	std::cout << "����� n = " << pn << '\n';//����� �������� ��������� pn
	std::cout << "n = " << n << '\n';
	std::cout << "n = " << *pn << '\n';//����� �������� n � ������� ������������� ��������� pn
	*pn = 15;//������ �������� n � ������� ������������� ���������� pn
	std::cout << "����� n = " << n << '\n';
	std::cout << "������ m = " << &m << '\n';
	pn = &m;//�������������� ��������� �� ����� ���������� n
	std::cout << "����� m = " << pn << '\n';
	int* pm = &m;
	*/
	//��������� �� �������
	/*
	const int size = 5;
	int arr[size]{ 10,20,30,40,50 };
	int* parr2 = &arr[2];
	std::cout << "�������� ������� � �������� 2 = " << *parr2 << '\n';
	std::cout << parr2 << '\n';
	parr2++;//
	std::cout << "�������� ������� � �������� 2 = " << *parr2 << '\n';
	std::cout << parr2 << '\n';
	parr2 -= 2;
	std::cout << "�������� ������� � �������� 2 = " << *parr2 << '\n';
	std::cout << parr2 << '\n';
	parr2 = arr;// ���������� ��������� parr2 �� ������ ������� ������� arr
	std::cout << arr << '\n';
	std::cout << *parr2 << '\n';
	std::cout << "������: \n";
	for (int i = 0; i < size; i++)
		std::cout << *(parr2 + i) << " ";//arr[i]= *(arr+i)
	std::cout << '\n';
	*/
	//������ 1. ����� � ����������
	/*
	std::cout << "������1.\n";
	const int size1 = 5;
	int arr1[size1];
	fill_arr(arr1, size1, 1, 11);
	show_arr(arr1, size1);
	sum_arr(arr1, size1, &n);
	std::cout << "����� ��������� ������� = " << n << '\n';
	*/
	//������ 2.
	return 0;
}