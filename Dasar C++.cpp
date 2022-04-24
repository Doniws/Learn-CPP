Bahasa Programan C++
Tutorial Belajar C++ Part 5: Struktur Dasar Kode Program C++

1.#include<iostream>

  file header lain seperti #include <fstream> atau #include <cmath> yang akan dibutuhkan saat ingin
  membaca file atau menjalankan function matematika.

(header file) header merupakan suatu file library dengan ekstensi h (*.h), yaitu file bantuan yang digunakan untuk
              menyimpan daftar-daftar fungsi yang akan digunakan di dalam program

Singkatan dari Input/output stream
file iostream berisi kode program agar nantinya kita bisa mengakses perintah input/output seperti cout dan cin


 Dengan kata lain, agar di dalam kode program nanti kita bisa menggunakan perintah cout,
 dipakai untuk memasukkan sebuah file khusus yang memungkinkan
 kita mengakses berbagai fitur tambahan dalam bahasa C++.


2.int main() { }

  Perintah “int” sebelum main() menandakan nilai kembalian atau hasil akhir dari function main().
  Kode int merupakan singkatan dari integer, yakni tipe data angka bulat.

  Struktur main() pada dasarnya merupakan sebuah fungsi (function).
  diawali dan diakhiri dengan tanda kurung kurawal ” { ” dan ” } “
  Di dalam tanda kurung inilah “isi” dari kode program penyusun function main() ditulis.

  Dengan demikian, kode program main() yang saya tulis harus menghasilkan sebuah angka bulat
  (menggunakan perintah return yang akan kita bahas sesaat lagi).


3.std::cout << “Hello World!”;

  Perintah std::cout berguna untuk menampilkan sesuatu ke layar. Perintah ini merupakan bagian dari header iostream,
  sehingga jika kita ingin menggunakannya harus terdapat perintah #include <iostream> di bagian paling awal kode program bahasa C++.

  (Jika ingin menggunakan kode ini harus ada #include<ionstream>

  Teks yang ingin ditampilkan ditulis setelah tanda << dan berada dalam tanda kutip dua, seperti std::cout << “Hello World!”.
  Hasil dari perintah ini, akan tampil teks Hello, World! di layar.

  Di akhir perintah std::cout terdapat tanda titik koma (semi-colon), yakni tanda “;”. Setiap perintah bahasa C++ harus
  diakhiri dengan tanda ini, kecuali beberapa perintah khusus. Lupa menambahkan tanda titik koma di akhir sebuah perintah
  merupakan error yang sangat sering terjadi.(Jika Tidak Programm akan error)

perintah std::cout terdiri dari 2 bagian, yakni: namespace std, dan perintah cout.
Namespace adalah fitur penamaan yang biasa ada dalam bahasa pemrograman yang menerapkan konsep OOP (object oriented programming).
Tujuannya supaya berbagai perintah tidak saling bentrok.

Perintah std::cout artinya kita menjalankan perintah cout “milik” std namespace.
Bisa saja nantinya ada perintah foo::cout yang berarti kita menjalankan perintah cout kepunyaan namespace foo.
Dalam contoh ini, bahasa C++ membolehkan ada 2 perintah cout, selama dipanggil dari namespace yang berbeda.

Jika kita ingin menampilkan beberapa teks, bisa menulis perintah std::cout beberapa kali seperti contoh berikut:
  
  Contoh Program


  #include <iostream>

int main()
{
	std::cout << "DoniWahyuSaputra \n";
	std::cout << "BelumMandi ";
	std::cout << "Preet ";
	return 0;
}


Hasil Kode program:
DoniWahyuSaputra Belummandi Preet

karakter “\n” di akhir perintah std::cout pada baris 5 dipakai untuk pindah baris (new line).
Tujuannya agar teks yang ada di dalam perintah std::cout di baris 6 pindah ke baris baru.

Alternative Penulisan Lain Adalah mendeklarasikan namespace std di bagian awal kode program
dengan perintah using namespace std:

  Contoh Program


#include <iostream>

using namespace std;

int main()
{
	cout << "Doooooo ";
	cout << "BEEEP ";
	return 0;
}


Hasil yang keluar Doooooo BEEEP
Perintah using namespace std di baris 3
bertujuan agar kita tidak perlu menulis namaspace std:: di setiap perintah cout.


4.return 0;

  Perintah return 0; berhubungan dengan kode int main() sebelumnya. 
  Disinilah kita menutup function main() yang sekaligus mengakhiri kode program bahasa C++.

  Return 0 artinya kembalikan nilai 0 (nol) ke sistem operasi yang menjalankan kode program ini.
  Nilai 0 menandakan kode program berjalan normal dan tidak ada masalah (EXIT_SUCCESS).

  Kita juga bisa menulis return 1, return 99, return -1, dll.
  Nilai-nilai ini nantinya bisa dipakai oleh sistem operasi atau program lain.
  Nilai return selain 0 dianggap terjadi error atau sesuatu yang salah (EXIT_FAILURE).

  Apakah perintah Return 0 ini harus ditulis?

Harus ditulis! itu jika kita berpatokan ke struktur bahasa C++ yang ideal. Namun beberapa compiler
(termasuk Code:Blocks yang saya gunakan), akan “memaafkan” jika perintah ini tidak ditulis dan menambahkan perintah return 0 secara otomatis.

