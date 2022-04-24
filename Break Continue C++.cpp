// *	 Break Continue C++

// Break yang artinya berhenti atau hancur
// Continue yang artinya Lanjut

// Break digunakan agar tidak melewati angka yang di masukan

// ? contoh nya


#include <iostream>

using namespace std;

int main() {
	int i = 0;
	while (i < 10) {
		cout << i << endl;
		i++;
		if (i == 9) { //ini diberi 9
			break;//kita gunakan break,
		}


	}return 0;
}


// !hasil outpunya
// !0,1,2,3,4,5,6,7,8 kenapa karena kita membrikan break
// !break digunakan agar tidak melewati angka yang di masukan tadi yaitu 9
// !jika ingin melewati 9 gunakan continue 

// ? contohnya

// #include <iostream>

// using namespace std;

// int main() {
// 	int i = 0;
// 	while (i < 10) {
// 		cout << i << endl;
// 		i++;
// 		if (i == 9) {
// 			continue;
// 		}


// 	}return 0;
// }

// ! outputnya

// ! 0,1,2,3,4,5,6,7,8,9 
// ! kenapa di bisa meleawati 9?kareana kita menggunakan continue namnaya saja continue ya pasti Lanjut 


// !catanatan ini nanti digunakaN untuk perulangan di website 
