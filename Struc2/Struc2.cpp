#include <iostream>
using namespace std;

struct DetailAlamat {
	string Desa;
	string Kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;

	cout << "Alamat Mahasiswa : ";
	cout << "\t Nama Desa : ";
	cin >> mhs.alamat.Desa;
	cout << "\t Nama Kota : ";
	cin >> mhs.alamat.Kota;

	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n NIM : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n Alamat : ";
	cout << "\t \n Desa : " << mhs.alamat.Desa;
	cout << "\t \n Kota : " << mhs.alamat.Kota;
	cout << "\n Umur : " << mhs.umur;
}