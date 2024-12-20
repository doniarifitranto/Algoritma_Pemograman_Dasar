#include <iostream>
using namespace std;

void siswa()
{
	string nama = "Doni";
	string jk = "Laki-laki";
	cout << nama << " Adalah seseorang " << jk << endl;
		
} 

string siswi ()
{
	string nama = "Mellynda";
	string jk = "Perempuan";
	cout << nama << " Adalah seseorang " << jk << endl;
	
}

int main ()
{
	siswa (); //fungsi void tidak memerlukan cout
	cout << siswi () << endl; //fungsi non-void mengembalikan nilai, maka butuh cout.
}
