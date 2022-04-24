// * 1. Percabangan if
// ------------------
// Percabangan if merupakan percabangan yang hanya memiliki satu blok pilihan saat kondisi bernilai benar.

// contoh menggunakan ">":

#include <iostream>
using namespace std;

int main(){

    cout << "=== Program Pembayaran ===" << endl;
    unsigned int total_belanja;

    cout << "Masukan total belanja: ";
    cin >> total_belanja;

    // menggunakan percabangan if
    if(total_belanja > 100000){                 //">" "<" "=" hanya untuk angka dan tidak bisa digunakan untuk huruf
        cout << "Selamat! anda dapat hadiah" << endl;
    }

    cout << "Terimakasih sudah berbelanja di toko kami" << endl;

    return 0;
}
-------------------------------------------------------------------------------------------------------------------------------------



2. Percabangan if/else
---------------------------
Percabangan if/else merupakan percabangan yang memiliki dua blok pilihan.

Blok pilihan pertama untuk kondisi benar, dan pilihan kedua untuk kondisi salah (else).

contoh menggunkan "<=" :
----------------------------------------------------
#include <iostream>

using namespace std;

int main()
{
	int Gizi;
	cout << "===Gizi anak-anak" << endl;
	cout << "Silahkan Masukan gizi anak and:  ";
	cin >> Gizi;

	    if (Gizi <= 50)//jika menggunkan if ,else atau if else sebaiknya jangan gunakan ";" ini
	    {
		 cout << "Bahaya" << endl;
	    }
	    else               //Ingat else tidak menggunakan kata kata tambahan seperti if dan else if
	    {
		  cout << "Bagus" << endl;
		}

	cout << "===Terimakasih Telah mengeceknya di tempat kami===" << endl;
	return 0;

}
-----------------------------------
contoh menggunakan "==" untuk benar atau salah,pasword:

#include <iostream>
using namespace std;

int main(){

    string password;

    cout << "========= Login =========" << endl;
    cout << "Masukan password: ";
    cin >> password;

    // percabangan if/else
    if (password == "Doni"){    //untuk huruf gunakan main string dan "==" ini untuk huruf jika dipakai untuk angka makan akan error
        cout << "Selamat datang bos!" << endl;
    } else {
        cout << "Password salah, coba lagi!"  << endl;
    }

    cout << "Terimakasih sudah menggunakan aplikasi ini!" << endl;

    return 0;
}

contoh "< or >":
#include <iostream>

using namespace std;

int main() {

	string siapa;

	cout << "siapa itu soeharto" << endl;
	cin >> siapa;

	if (siapa < "presiden ke3"){  //gunakan "< atau >" untuk pengabungan huruf dan angka jika tidak menggunkan ini akan terjadi error
		cout << "[Benar]" << endl;

	}
	else {
		cout << "salah" << endl;
	}
}

3. Percabangan if/else/if
     Percabangan if/else/if merupakan percabangan yang memiliki lebih dari dua blok pilihan.
--------------------------------------------------------------------------------
Contoh :

#include <iostream>

using namespace std;

int main()
{
	int Nilai;
	string Grade;
	cout << "Nilai sekolah" << endl;
	cout << "Jumlah nilai dahulu nilai anda" << endl;
	cout << "input nilai disini: ";
	cin >> Nilai;

	if (Nilai >= 1200) {
		Grade = "A";
	}
	else if (Nilai >= 1030) {
		Grade = "B";        //Grade bisa dignati  dengan apapun asal mengggunakan string
	}
	else if (Nilai >= 910) {
		Grade = "C";

	}
	else {
		cout << "input yang anda masukan salah" << endl;
	}
	cout << "itulah nilai anda" << Grade << endl;

	return 0;
}
---------------------------------------------------------------------------------------------------------------
Coba lihat huruf "F" itu kosong,


-------------------------------------------------------------------------



4. Percabangan Switch/Case
Percabangan switch/case adalah bentuk lain dari percabangan if/else/if.

Strukturnya seperti ini:
----------------------------------------
switch(variabel){
    case <value>:
        // blok kode
        break;
    case <value>:
        // blok kode
        break;
    default:
        // blok kode
}
-----------------------------------------
Kita dapat mermbuat blok kode (case) sebanyak yang diinginkan di dalam blok switch

Pada <value>, kita bisa isi dengan nilai yang nanti akan dibandingkan dengan varabel.

setiap case harus diakhiri dengan break.
Khusus untuk default,tidak perlu diakhiri dengan break karena dia terletak dibagian akhir

pemberian break bertujuan adar program berhenti mengecek case berikutnya saat sebuah case terpenuhi

contoh:

#include <iostream>
using namespace std;

int main(){

    char grade;

    cout << "Inputkan grade: ";
    cin >> grade;

    switch (toupper(grade)){
        case 'A':
            cout << "Luar biasa!" << endl;
            break;
        case 'B':
        case 'C':
            cout << "Bagus!" << endl;
            break;
        case 'D':
            cout << "Anda lulus" << endl;
            break;
        case 'E':
        case 'F':
            cout << "Anda remidi" << endl;
            break;
        default:
            cout << "Grade Salah!" << endl;
    }

    return 0;
}

--------------------------------------------------------

switch (toupper(grade)){
    ...
}
Mengapa menggunakan toupper()?

Ini karena agar kita dapat menginputkan huruf kecil dan huruf besar untuk mengecek grade.
--------------------------------------------------------------------------


5. Percabangan dengan Opertor Ternary
----------------------------------------
Percabangan menggunakan opreator ternary merupakan bentuk lain dari percabangan if/else.

Bisa dibilang:

Bentuk singkatnya dari if/else.

Operator ternary juga dikenal dengan sebutan operator kondisi (conditional operator).

===================================
Bentuk strukturnya seperti ini:

(kondisi) ? true : false
Bagian kondisi dapat kita isi dengan ekspresi yang menghasilkan nilai true dan false.

Lalu setlah tanda tanya ? adalah bagian pilihan.

Jika kondisi bernilai benar, maka true yang akan dipilih. Tapi kalau salah, maka false yang akan dipilih.
-------------------
contoh:
---------------------------
#include <iostream>

using namespace std;

int main()
{

	int jawaban;

	cout << "Berapa hasil 20 : 5" << endl;
	cin >> jawaban;

	string hasil = (jawaban == 4) ? "Benar" : "Salah";      //mirip seperti if dan else

	cout << "Jawaban Anda: " << hasil << endl;

	return 0;
}
-------------------------------------------------------

--------------------------------------------------------


6. Percabangan Bersarang (Nested)
------------------------------------------------
Kita juga dapat membuat blok percabangan di dalam percabangan. Ini disebut percabangan bersarng atau nested if.

----------------------------
contoh:
--------------------------
#include <iostream>

using namespace std;

int main() {

	string username, pasword;

	cout << "Masukan username di bawah ini: " << endl;
	cin >> username;

	cout << "Masukan pasword dibawah ini: " << endl;
	cin >> pasword;

	if (username == "doniwahsap") {
		if (pasword == "TidakAda13") {
			cout << "Welcome my website" << endl;
		}
		else {
			cout << "pasword salah silahkan masukan lagi" << endl;
		}

	}
	else {
		cout << "anda tidak terdaftar" << endl;
	}return 0;
}
------------------------------------------------------




