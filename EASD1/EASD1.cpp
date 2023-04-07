// 1.	Karena algoritma menyediakan langkah langkah terstruktur dan terurut secara logis untuk menyelesaikan masalah pada pengcodingan

// 2.	a. Struktur data linear
//		b. Struktur data non linear

// 3.	Waktu eksekusi, besar memori yang digunakan, banyaknya fungsi yang dipakai

// 4.	insertion sort, dikarenakan algoritma ini bekerja dengan cara membandingkan beberapa elemen
//		dalam daftar kemudian dimasukkan ke posisi yang tepat dalam daftar secara urut

// 5.	a. Quadratic = selection sort, insertion sort, bubble sort
//		b. Loglinear = merge sort dan quick sort

//6

#include <iostream>
using namespace std;

void input(int arr[], int n) {
	cout << "Enter" << n << "Number :\n";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
}

void selectionSort(int arr[], int n) {
	for (int AF = 0; AF <= n - 2; AF++) {
		int min_index = AF;
		for (int i = AF + 1; i < n; i++) {
			if (arr[i] < arr[min_index]) {
				min_index = i;
			}
		}
		int temp = arr[AF];
		arr[AF] = arr[min_index];
		arr[min_index] = temp;
	}
}

void display(int arr[], int n) {
	cout << "Data terurut :\n";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

