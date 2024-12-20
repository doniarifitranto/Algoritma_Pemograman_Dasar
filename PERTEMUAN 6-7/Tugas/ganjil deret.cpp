#include <iostream>
using namespace std;
int main ()
{
	cout << "Program menghitung bilangan ganjil." << endl;
	int i, n=0;
	
	for (i=1; i<=19;i+=2){
		cout << i;
		n +=i;
		if(i<19){
			cout << " + ";
		}
	}
	cout << " = " << n << endl;
	return 0;
}
