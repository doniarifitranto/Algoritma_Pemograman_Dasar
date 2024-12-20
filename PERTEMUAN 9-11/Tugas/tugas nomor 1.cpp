#include <iostream>
using namespace std;

int hitungLuasPersegi (int sisi){
	int LuasPersegi = sisi * sisi;
	return LuasPersegi;
	}
	
int hitung_psg_panjang (int p, int l){
	int luas = p * l;
	return luas;
	}
	
float volumeTabung (float phi, float r, float t){
	float volume;
	phi = 3.14; 
	volume = phi * r * r * t;
	return volume;
}

float luasTabung (float Phi, float jari2, float tinggi ){
	float luaS;
	Phi = 3.14;
	luaS = 2 * Phi * jari2 * (jari2+tinggi);
	return luaS;
}


int main (){
	int i, sisi;
	for (i=1; i<=2; i++){
		cout << "\t======PROGRAM HITUNG PERSEGI======" << endl;
		cout << "Masukan panjang sisi persegi: ";
		cin >> sisi;
	
		int hasil = hitungLuasPersegi (sisi);
	
		cout << "Luas persegi adalah: " << hasil << endl;
	}
		
	int luas, p, l, j;
	for (int j=1; j<=2; j++){
		cout << "\t======PROGRAM HITUNG PERSEGI PANJANG======" << endl;
		cout << "Masukan nilai panjang: ";
		cin >> p;
		cout << "Masukan nilai lebar: ";
		cin >> l;
	
		luas = hitung_psg_panjang (p, l);
		cout << "Luas persegi panjang adalah: " << luas << endl;
	}
	
	int k;
	for (k=1; k<=2; k++){
		int volume, phi, r, t;
		cout << "\t======PROGRAM HITUNG VOLUME TABUNG======" << endl;
		cout << "Masukan volume tabung: ";
		cin >> phi;
		cout << "Masukan jari-jari: ";
		cin >> r;
		cout << "Masukan tinggi: ";
		cin >> t;
		
		volume = volumeTabung (phi, r, t);
		cout << "Hasil volume tabung adalah: " << volume << endl;
		
	}
	
	int m;
	for (m=1; m<=2; m++){
		int luaS, Phi, jari2, tinggi;
		cout << "\t======PROGRAM HITUNG LUAS TABUNG======" << endl;
		cout << "Masukan volume tabung: ";
		cin >> Phi;
		cout << "Masukan jari-jari: ";
		cin >> jari2;
		cout << "Masukan tinggi: ";
		cin >> tinggi;
		
		luaS = luasTabung (Phi, jari2, tinggi);
		cout << "Hasil luas tabung adalah: " << luaS << endl;
	}
	
	getchar ();
}
