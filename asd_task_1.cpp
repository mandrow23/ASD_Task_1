/**
    NAMA  : Mahendrawan idris
    NIM   : 1301164461
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double peruts , pertubes ,peruas , ma , mb ,mc ,md;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main() {
    main_menu();
    return 0;
}

void main_menu(){
    /**
    - fungsi berisi pilihan menu di dalam aplikasi:
      daftar menu:
      1. set standar index nilai
      2. set proporsi nilai
      3. input nilai
      4. keluar
    - fungsi meminta input pilihan menu dari user
      dan memanggil fungsi menu yang dipilih
    **/

    int pilihan;
    //=================================================
    // YOUR CODE STARTS HERE
        cout<< "Menu utama \n";
        cout<< "1. standar index nilai \n";
        cout<< "2. proprosi nilai \n";
        cout<< "3. input nilai \n";
        cout<< "4. keluar \n";
        cout>> "masukan pilihan : ";
        cin>> pilihan;
        switch(pilihan){
        case 1:
            set_standar();
            main_menu();
        case 2:
            set_proporsi_nilai();
            main_menu();
        case 3:
            input_nilai();
            main_menu();
        case 4:
            thank_you();
            main_menu();


            }
    // YOUR CODE ENDS HERE
    //=================================================
    thank_you();
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    do{
    cout<<"Masukan persentasi nilai(penjumlahan persentasi = 100%"endl;
    cout << "Masukan Persentasi nilai uts: ";
    cin>> tasiuts;
    cout<< "Masukan persentasi nilai uas : ";
    cin>> tasiuas;
    cout>> "Masukan presentasi nilai tubes : ";
    cin>> tasitubes;
    }while{tasiuts + tasiuas + tasitubes !=100};



    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<< "Masukkan nilai minimal A :";
    cin>> A;
    cout<< "Masukkan nilai minimal B :";
    cin>> B;
    cout<< "Masukkan nilai minimal C :";
    cin>> C;
    cout<< "Masukkan nilai minimal D :";
    cin>> D;

    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double uts, double uas, double tubes){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE
    uts = uts * persenuts/100;
    uas = uas * persenuas/100;
    tubes = tubes * persentubes/100;

    if (uts+uas+tubes>= nilai A) {
        index = 'A';

    } else if (uts+uas+tubes>= nilai B){
        index = 'B';

    } else if (uts+uas+tubes>= nilai C){
        index = 'C';

    } else if (uts+uas+tubes>= nilai D) {
        index = 'D'

    } else {
        index = 'E';
    }


    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
        cout<< "Masukan nilai UTS : ";
        cin>> uts;
        cout<< "Masukan nilai UAS : ";
        cin>> uas;
        cout<< "Masukan nilai Tubes : ";
        cin>> Tubes;
        cout<< " \n\nNilai Index : " << hitung_index(uts,uas,tubes)<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE
        cout<< " Hatur nuhun :) ";
        exit(0);

    // YOUR CODE ENDS HERE
    //=================================================
}
