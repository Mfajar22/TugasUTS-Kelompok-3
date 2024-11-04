#include <iostream>
using namespace std;

int main() {
	string nama;
	int golongan, jamKerja;
	int upahPerjam, totalGaji, uangLembur;

	cout << "SNB Corp\n";

	cout << "Masukkan nama anda : ";
	cin >> nama;
	cout << "Masukkan golongan anda : ";
	cin >> golongan;

	if (golongan == 1) {
		upahPerjam = 25000;
	}
	else if (golongan == 2) {
		upahPerjam = 35000;
	}
	else if (golongan == 3) {
		upahPerjam = 50000;
	}
	else {
		cout << "Error : input hanya golongan 1 sampai 3";
		return 0;
	}

	cout << "Masukkan jam kerja anda perminggu : ";
	cin >> jamKerja;

	totalGaji = jamKerja * upahPerjam;

	if (jamKerja > 48) {
		uangLembur = (jamKerja - 48) * 10000;
		totalGaji += uangLembur;
	}

	cout << "Total gaji " << nama << " per minggu : Rp." << totalGaji;
	return 0;
}