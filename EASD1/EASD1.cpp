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

void input(int FASYA[], int n) {
	cout << "Enter " << n << " Number :\n";
	for (int i = 0; i < n; i++) {
		cin >> FASYA[i];
	}
}

void selectionSort(int FASYA[], int n) {
	for (int AF = 0; AF <= n - 2; AF++) {
		int min_index = AF;
		for (int i = AF + 1; i < n; i++) {
			if (FASYA[i] < FASYA[min_index]) {
				min_index = i;
			}
		}
		int temp = FASYA[AF];
		FASYA[AF] = FASYA[min_index];
		FASYA[min_index] = temp;
	}
}

void display(int FASYA[], int n) {
	cout << "Data terurut :\n";
	for (int i = 0; i < n; i++) {
		cout << FASYA[i] << " ";
	}
	cout << endl;
}

int main() {
	const int MAX = 97;				//77+20-2*15+10+20 = 97
	int FASYA[MAX];
	int n;

	cout << "Masukkan jumlah data : ";
	cin >> n;
	while (n > MAX) {
		cout << "Jumlah data terlalu banyak, masukkan ulang : ";
		cin >> n;
	}
	input(FASYA, n);
	selectionSort(FASYA, n);
	display(FASYA, n);

	return 0;
}
