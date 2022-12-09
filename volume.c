#include <stdio.h>

int main()
{
  // Deklarasikan variabel untuk panjang, lebar, dan tinggi kolam
  float panjang, lebar, tinggi;

  // Input panjang, lebar, dan tinggi kolam dari user
  printf("Masukkan panjang kolam (dalam meter): ");
  scanf("%f", &panjang);
  printf("Masukkan lebar kolam (dalam meter): ");
  scanf("%f", &lebar);
  printf("Masukkan tinggi kolam (dalam meter): ");
  scanf("%f", &tinggi);

  // Hitung volume kolam
  float volume = panjang * lebar * tinggi;

  // Hitung jumlah air yang diperlukan
  float jumlah_air = volume * 1000; // 1 meter kubik = 1000 liter

  // Tampilkan hasil
  printf("Volume kolam: %.2f meter kubik\n", volume);
  printf("Jumlah air yang diperlukan: %.2f liter\n", jumlah_air);

  return 0;
}
