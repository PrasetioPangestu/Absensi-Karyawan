#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


string tentukanShiftKerja(double jamAbsensi) {
    if (jamAbsensi >= 08.00 && jamAbsensi < 16.00) {
        return "Shift Pagi";
    } else if (jamAbsensi >= 16.00 && jamAbsensi < 24.00) {
        return "Shift Malam";
    } else {
        return "Jam absensi tidak valid";
    }
}

int main() {
    cout << "Selamat datang di aplikasi Absensi Karyawan"<< endl;

  string hari;
  int jamAbsensi;
    cout << "Masukkan hari absensi (e.g., Senin): ";
      cin >> hari;
    cout << "Masukkan jam absensi (08.00-24.00): ";
      cin >> std::setprecision(2) >> jamAbsensi;

    cout << "Data Anda" << endl;

    string shiftKerja = tentukanShiftKerja(jamAbsensi);
      cout << "Hari : " << hari << endl;
      cout << "Jam Absensi :" << jamAbsensi << endl;
      cout << "Shift Kerja : " << shiftKerja << endl;

    cin.ignore();
    cin.get();
    return 0;
}
