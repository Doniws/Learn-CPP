// * Array c++ 

// Array di gunakan untuk menyimpan nilai satu variable
// atau juaga bsai disebut 
// mengambail variable punya yang lain

// string selalu dimulai dari 0
// yok llangsung cobva saja 

// untuk menggunakan kita gunakan #include <string>
// contoh:

#include <iostream>
#include <string>

using namespace std;

int main() {
	string siapa[5] = { "halo", "bumi","manusia", "animal", "water"};
	//dimasukan string [2] dia akan error kita lihat dulu berapa stringnnya.

	cout << siapa[2]<< endl; //disini untuk memmilih Array
    //kita memilih manusia dia akan 
    //halo 0 , bumi 1 , manusia 2
	
}

// ! outputnya 

// ! manusia

// ! tidak hanya bisa untuk string saja huruf saja nomor juga bisa
// ! kita bisa gunakan int,float dan angka semacamnnya

// * inputnya

#include <iostream>
#include <string>

using namespace std;

int main() {
	int mynum[4] = { 1,73,492,31};

	cout << mynum[1] << endl;
	//kita memanggil 73

	return 0;
	
}

// outputnya
// 73


