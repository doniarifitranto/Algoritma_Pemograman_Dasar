#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;
int main ()
{
	char a1[] = "IBIK";
	char a2[] = "Ibik";
	char b1[] = "IBIK";
	//clrscr();
	
	cout << "Hasil pertandingan " << a1 << " dan " << a2 << "->";
	cout << strcmp(a1,a2) << endl; //fungsi membandingkan a1 dan a2
	
	cout << "Hasil pertandingan " << a2 << " dan " << a1 << "->";
	cout << strcmp(a2,a1) << endl; 
	
	cout << "Hasil pertandingan " << a1 << " dan " << b1 << "->";
	cout << strcmp (a1,b1) << endl;
	
	getchar();
}
