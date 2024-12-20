#include <iostream> // Header dalam pemograman c++
using namespace std; // pemberitahuan kepada kompiler bahwa akan menggunakan semua fungsi, class / file yang terdapat pada memori namespace std

int main () // merupakan fungsi utama
{ // buka kurawal menandai awal dari program
	
	// inisialisasi variabel
	
	int x= 50; // tipe data x yaitu bernilai 50
	int a, b, c, d, e; // mendeklarasi tipe data yaitu a,b,c,d,e
	
	// proses
	
	a = x > 5+5; // tipe data x yang ditaro di variabel a, yaitu x lebih besar dari 5+5
	b = x > 100; // tipe data x yang ditaro di variabel b, yaitu x lebih besar dari 100
	c = a && b; //  menyatakan operator AND akan menghasilkan nilai "true" jika keduanya benar, selain itu menghasilkan nilai "false"
	d = a || b; //  menyatakan operator OR hanya akan menghasilkan nilai "false" jika kedua hasilnya salah, selain itu menghasilkan nilai "true"
	e = ! (c); //  menyatakan operator NOT hanya akan membalikan logika, "!false" menjadi "true", "true" menjadi "false"
	
	// output berupa 1 (benar) dan 0 (salah)
	
	cout << "\nNilai a = x > 5+5 = " << a << endl; // menampilkan output yaitu benar nilai x lebih besar dari 5+5, maka hasil output "true" (1) 
	cout << "\nNilai b = x > 100 = " << b << endl; // menampilakan output yaitu bernilai salah karena x lebih kecil dibanding 100, maka hasil output "false" (0)
	cout << "\nNilai c = a && b = " << c << endl; // menampilkan output yaitu a "true" dan b "false", maka hasil output "false" (0)
	cout << "\nNilai d = a || b = " << d << endl; // menampilkan output yaitu a "true" atau b "false", maka hasil output "false" (0)
	cout << "\nNilai e = ! (c) = " << e << endl; // menampilkan output c (false), karena memakai operator NOT yaitu membalikan logika maka menjadi "true"
	
	getchar(); // membaca data bertipe karakter
} // tutup kurawal menandai akhir dari program
