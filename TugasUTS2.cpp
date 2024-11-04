#include <iostream>
using namespace std;

int main() {
	int jumlahMotor, jumlahMobil;
	int jamMasuk, jamKeluar, lamaParkir;
	int tarifMobil = 5000;
	int tarifMotor = 2000;
	int totalBiaya;

	cout << "Masukkan jumlah motor : ";
	cin >> jumlahMotor;
	cout << "Masukkan jumlah mobil : ";
	cin >> jumlahMobil;

	cout << "Input jam masuk (format 24 jam) : ";
	cin >> jamMasuk;
	cout << "Input jam keluar (format 24 jam) : ";
	cin >> jamKeluar;

	if (jamKeluar >= jamMasuk) {
		lamaParkir = jamKeluar - jamMasuk;
	}
	else {
		lamaParkir = (24 - jamMasuk) + jamKeluar;
	}

	totalBiaya = (jumlahMobil * tarifMobil * lamaParkir) + (jumlahMotor * tarifMotor * lamaParkir);
	cout << "\nTotal biaya parkir : Rp. " << totalBiaya << " (" << lamaParkir << "jam)";
	return 0;
}
