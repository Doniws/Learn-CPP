blok perulangan adalah suatu kata yang akan di ulangi

// * 1.perulangan pada c

// perulangan for merupakan perulangan yang termasuk dalam counted 
// loop karena sudah jelas berapa kali kata yang ingin kita ulangi

// bentuk konsepnya seperti ini:
--------------------------
for(in i=0;i<10;i++)
{
    printf("ini tempat kata yang ingin diulang %i\n",i);
}                          //tidak harus i  bisa menggunakan kata kata lain contoh "a" , "nilai" dan semacamnya
// ---------------------------
// yang perlu diperhatikan adalah kondisi yang ada didalam kurung 
// setelah for.

// -Hitungan akan dimulai dari 0 (i = 0);
// -Hitungannya sampai berapa? Sampai i < 10;
// -Lalu di setiap perulangan i akan bertambah +1 (i++).

// variable i pada perulangan for berfungsi untuk menyimpan nilai Hitungan.

// jadi setiap perulangan nilia i akan selalu bertambah satu.
// karena kita menentukannya dibagian i++.

// contoh program loop dengan for.

#include <stdio.h>

void main(){
    for(a=0;a<20; a +=2){
        printf("Perulangan ke-%i\n", i);
    }
}

// Pada contoh tersebut, kita melakukan perulangan dimulai dari nol 0.
// Lalu di setiap perulangan nilai variabel couter akan ditambah 2 (counter+2).

// --------------------------------------------------------------------
// Bagaimana kalau counter perulangannya dimulai dari akanga yang lebih besar sampai yang ke paling kecil?

// contohnya:
// ---------------------------------------------------------
for(int counter = 10; counter > 0; counter--)
{
    printf("Perulangan ke-%i\n", counter);
}
----------------------------------------------

// * 2. Perulangan While pada C
// Perulangan while merupakan perulangan yang termasuk dalam perulangan uncounted loop.

// Perulangan while juga dapat menjadi perulangan yang counted loop dengan memberikan counter di dalamnya.

// Bentuk flow chart-nya sama seperti flow chart for.
// -----------------------------------------------
// contohnya:

#include <stdio.h>

void main(){
    char ulangi = 'y';
    int counter = 0;

    // perulangan while
    while(ulangi == 'y'){
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        // increment counter
        counter++;
    }

    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
}
----------------------------------------------------

// * 3. Perulangan Do/While pada C

// Perulangan do/while sama seperti perulangan while.

// Perbedaanya:

// Perulangan do/while akan melakukan perulangan sebanyak 1 kali terlebih dahulu, lalu mengecek kondisi yang ada di dalam kurung while.


// Bentuk kodenya seperti ini:

do {
    // blok kode yang akan diulang
} while (<kondisi>);

contoh:
#include <stdio.h>

void main(){

    char ulangi = 'y';
    int counter = 0;

    do {
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        scanf(" %c", &ulangi);

        // increment counter
        counter++;
    } while(ulangi == 'y');

    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);
}

-------------------------------------------------


// * 4. Perulangan Bersarang (Nested Loop)
// Di dalam blok perulangan, kita juga dapat membuat perulangan.

// Ini disebut dengan nested loop atau perulangan bersarang atau perulangan di dalam perualangan.

// Mari kita coba lihat contohnya:

#include <stdio.h>

void main(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("Perulangan ke (%d, %d)\n", i, j);
        }
    }
}

// Pada perulangan tersebut, kita menggunakan dua perulangan for.

// Perulangan pertama menggunakan variabel i sebagai counter, 
// sedangkan perultangan kedua menggunakan variabel j sebagai counter.