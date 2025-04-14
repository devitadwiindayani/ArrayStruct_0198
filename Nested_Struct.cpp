#include <iostream>
#include <string>
using namespace std;

struct skill{
    string skill1;
    string skill2;
    string skill3;
};

struct Hero{
    string nama;
    string role;
    string tipe;
    skill skill;
};

int main()
{
    Hero arhero[3]; 

    for(int i = 0; i < 3; i++) //Mengisi Struktur Array
    {
        cout << "Masukkan nama hero = ";
        getline(cin, arhero[1].nama);
        cout << "Masukkan jenis role = ";
        getline(cin, arhero[i].role);
        cout << "Masukkan tipe hero = ";
        cin >> arhero[i].tipe;
        cin.ignore();

        cout << "Masukkan skill 1 ";
        getline(cin, arhero[i].skill.skill1);
        cout << "Masukkan skill 2 ";
        getline(cin, arhero[i].skill.skill2);
        cout << "Masukkan skill 3 ";
        getline(cin, arhero[i].skill.skill3);
    }

    cout << endl;
    cout << "Tampilkan Hero = " << endl;
    cout << endl;


    for(int i = 0; i < 3 ; i++ ){
        cout << "Nama Hero = " << arhero[i].nama << endl;
        cout << "Jenis Role Hero = " << arhero[i].role << endl;
        cout << "Tipe Hero = " << arhero[i].tipe << endl;}
    
}