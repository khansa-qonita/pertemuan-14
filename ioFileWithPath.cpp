#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //deklarasi variabel baris dan NamaFile
    string baris, NamaFile;
    
    //membuat input untuk menangkap nama file
    cout << "masukkan nama file :";
    cin >> NamaFile;

    //membuat file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file dengan ekstensi txt
    outfile.open("D:\\semester 2\\pemrograman dasar\\pertemuan 14\\" + NamaFile + ".txt, ios::out)" );

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //looping untuk menulis isi file
    while (true)
    {
        cout << "- ";
        
    }
}