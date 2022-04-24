1. Operator Aritmatika
-----------------------------------------------------------------------
Operator aritmatika merupakan operator yang digunakan untuk melakukan operasi aritmatika.
-----------------------------------------------------------------------------------------------------------------------
Operator ini terdiri dari:

Nama Operator	Simbol
Penjumlahan    	 +
Pengurangan	     -
Perkalian	     *
Pembagian	     /
Sisa Bagi	     %
-------------------------------------------------------------------------------------------------------------------------
contoh hasil campuran,Kekurangan nya pembagian yang menghasilkan koma tidak akan di tampilkan di kode pemograman tersebut:
#include <iostream>
using namespace std;

int main() {

    int a, b;

    cout << "Inputkan nilai a: ";
    cin >> a;

    cout << "Inputkan nilai b: ";
    cin >> b;

    cout << "Hasil a + b: " << a + b << endl;
    cout << "Hasil a - b: " << a - b << endl;
    cout << "Hasil a * b: " << a * b << endl;
    cout << "Hasil a / b: " << a / b << endl;
    cout << "Hasil a % b: " << a % b << endl;

    return 0;
}





contoh untuk pembagian yang menggunakan koma:

#include <iostream>
using namespace std;

int main() {

    float a, b;

    cout << "Inputkan nilai a: ";
    cin >> a;

    cout << "Inputkan nilai b: ";
    cin >> b;

    cout << "Hasil a / b: " << a / b << endl;

    return 0;
}


-----------------------------------------------------------------------------------------------------------------
Contoh bisa di ganti apa yang dimau:

#include <iostream>
using namespace std;

int main() {

    int a, b, c;

    cout << "Inputkan nilai a: ";
    cin >> a;
    cout << "Inputkan nilai b: ";
    cin >> b;

    // menggunakan operator penjumlahan
    //bisa diganti dengan apa yang dimau seperti + - / * %
    c = a + b;

    cout << "Hasil a + b = " << c << endl;

    return 0;
}

ini selesai
-------------------------------------------------------------------------------------------------------------------------------
lanjut ini

2.Operator Penugasan
---------------------
Operator penugasan (Assignment Operator) merupakan operator untuk meberikan tugas pada variabel. Biasanya untuk mengisi nilai.

--------------------------------------------------------------------------
Operator Penugasan terdiri dari:

Nama Operator	           Simbol
Pengisian Nilai	             =
Pengisian dan Penambahan	 +=
Pengisian dan Pengurangan	 -=
Pengisian dan Perkalian	     *=
Pengisian dan Pembagian	     /=
Pengisian dan Sisa bagi	     %=
Pengisian dan shift left	 <<=
Pengisian dan shift right	 >>=
Pengisian dan bitwise AND	 &=
Pengisian dan bitwise OR	 |=
Pengisian dan bitwise XOR	 ^=

----------------------------------------------------------------------------------------------------------------
contoh:


#include <iostream>
using namespace std;

int main() {

    int a, b;

    // pengisian nilai dengan operator =
    a = 12;
    b = 900;

    // pengisian sekaligus penambahan
    b += a; // ini sama seperti b = b + a
    cout << "Hasil b += a adalah " << b << endl;

    // pengisian sekaligus pengurangan
    b -= a; // ini sama seperti b = b - a
    cout << "Hasil b -= a adalah " << b << endl;

    // pengisian sekaligus perkalian
    b *= a; // ini sama seperti b = b * a
    cout << "Hasil b *= a adalah " << b << endl;

    // pengisian sekaligus pembagian
    b /= a; // ini sama seperti b = b / a
    cout << "Hasil b /= a adalah " << b << endl;

    // pengisian sekaligus penambahan
    b %= a; // ini sama seperti b = b % a
    cout << "Hasil b %= a adalah " << b << endl;

    return 0;
}


Pada program tersebut, variabel b kita isi ulang dengan operator penugasan.

Sebagai contoh, operasi:
b += a
Sama seperti operasi:
b = b + a
Artinya kita akan mengisi nilai untuk b dengan nilai b ditambah nilai a.


Begitu juga dengan opeartor yang lain.
b *= a; // -> b = b * a
Isi b dengan nilai dari perkalian b dengan a.
Intinya, yang perlu kamu ingat:

“operator penugasan digunakan untuk mengisi nilai.”

-------------------------------------------------------------------------------------------------------------------------------------------------


3. Operator Pembanding
------------------------------------------------------------------------------------------------------------------------------
Operator pembanding adalah operator untuk memabndingkan dua buah nilai. Operator ini juga dikenal dengan operator relasi.

Operator pembanding terdiri dari:

Nama Operator	                Simbol
Lebih Besar	                      >
Lebih Kecil	                      <
Sama Dengan	                      ==
Tidak Sama dengan	              !=
Lebih Besar Sama dengan	          >=
Lebih Kecil Sama dengan	          <=
-------------------------------------------------------------------------------------------------------------------
contoh pembanding,Bisa pilih salah satu pembandingnya dan bisa langsung semua:
//selalu gunakan bool/int saat ingin menggunakan kata kata
#include <iostream>
using namespace std;

int main(){
    int a = 4, b = 3;
    bool hasil;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // menggunakan operator pembanding
    hasil = a > b;
    cout << "a > b = " << hasil << endl;

    hasil = a < b;
    cout << "a < b = " << hasil << endl;

    hasil = a >= b;
    cout << "a >= b = " << hasil << endl;

    hasil = a <= b;
    cout << "a <= b = " << hasil << endl;

    hasil = a == b;
    cout << "a == b = " << hasil << endl;

    hasil = a != b;
    cout << "a != b = " << hasil << endl;


    return 0;
}
--------------------------------------------------------------------------------------------------------------


------------------------------------------------------------------------------------------------------------------------------------------------------------------------

4. Operator Logika
---------------------------------------------------------------------------------------------------------------------
Kalau kamu pernah belajar logika matematika, pasti tidak akan asing dengan operator ini.
---------------------------------------------------------|
Nama Operator	Simbol:                                  |
                                                         |
Logika AND	&&                                           |
Logika OR	||                                           |
Negasi/kebalikan	!                                    |
Operator Logika digunakan untuk membuat operasi logika.  |
---------------------------------------------------------|
Misalnya seperti ini:

Pernyataan 1: Petani Kode seorang programmer
Pernyattan 2: Petanikode menggunakan Linux
Jika ditanya, apakah Petani Kode programmer yang menggunakan Linux?

Tentu kita akan cek dulu kebenarannya

Pernyataan 1: Petani Kode seorang programmer = true.
Pernyataan 2: Petanikode menggunakan Linux = true.
Apa petanikode programmer dan menggunakan Linux?

Pertnyataan 1 && Pernyataan 2 = true


contoh operator logika:
-----------------------------------------------------
#include <iostream>
using namespace std;

int main(){
    int a = 1; // true
    int b = 0; // false
    bool hasil;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // logika AND
    hasil = a && b;
    cout << "a && b = " << hasil << endl;

    // logika OR
    hasil = a || b;
    cout << "a || b = " << hasil << endl;

    // logika NOT
    cout << "!a = " << !a << endl;

    return 0;
}
-------------------------------------------------------


-------------------------------------------------------------------------------------------------------------------------------------------------
5. Operator Bitwise
--------------------------------------------
Operator bitwise merupkan operator yang digunakan untuk operasi berdasarkan bit (biner) dari sebuah nilai.
---------------------------------|
Operator bitwise terdiri dari:   |
                                 |
Nama Operator	Simbol di Java   |
AND	                &            |
OR	                |            |
XOR	               ^             |
NOT/komplemen	     ~           |
Left Shift	        <<           |
Right Shift        	>>           |
---------------------------------|
-----------------------------------------------
contoh bitwiset

#include <iostream>
using namespace std;

int main(){
    int a = 6;
    int b = 3;
    int hasil;

    // menggunakan operator bitwise and
    hasil = a & b; /masukan operator
    cout << "a & b = " << hasil << endl;

    return 0;
}
------------------------------------------------

-----------------------------------------------------------------------------------------------------


6. Operator Lain-lain
-------------------------
Selain dari operator yang kita bahas di atas, terdapat beberapa operator lain yang harus diketahui:
------------------------------------------------------------
Nama Operator	Simbol       	Keterangan
Alamat memori	  &	            untuk mengambil alamat memori
Pointer         	*	        untuk membuat pointer
Ternary      	  ? :	        untuk membuat kondisi
Increment	      ++	        untuk menambah 1
Decrement	      --	        untuk mengurangi 1
 ------------------------------------------------------

contoh menggunakan ptr:
-------------------------
#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *ptr_a = &a;

    cout << "Alamat memori variabel a adalah " << &a << endl;

    // mengubah nilai a dari pointer
    cout << "Nilai a awal = " << a << endl;
    *ptr_a = 21;
    cout << "Nilai a diubah = " << a << endl;

    return 0;
}
----------------------------------------------------------------

contoh banar atau salah seperti if/else:

#include <iostream>
using namespace std;

int main(){
    int a = 4;

    // menggunakan operator ternary
    string hasil = a > 1 ? "benar": "salah";

    cout << "a > 1 adalah " << hasil << endl;

    return 0;
}



Terakhir ada operator increment dan decrement untuk menambah dan mengurangi nilai dengan 1.

contoh:

Operator increment dan decrement dapat ditaruh di depan maupun di belakang variabel atau nilai.

Operator ini biasanya digunakan pada blok perulangan.
------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main(){
    int a = 4;

    // increment a
    a++;
    cout << "a++ = " << a << endl;

    // increment lagi a
    ++a;
    cout << "++a = " << a << endl;

    // decrement a
    a--;
    cout << "a-- = " << a << endl;

    // decrement lagi a
    --a;
    cout << "--a = " << a << endl;

    return 0;
}







