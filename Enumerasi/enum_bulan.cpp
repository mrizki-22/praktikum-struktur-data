#include <iostream>

enum Bulan {
  Januari,
  Februari,
  Maret,
  April,
  Mei,
  Juni,
  Juli,
  Agustus,
  September,
  Oktober,
  November,
  Desember
};

int main() {
  Bulan bulanSekarang = April;
  std::cout << "Bulan sekarang adalah " << bulanSekarang << std::endl;
  return 0;
}

