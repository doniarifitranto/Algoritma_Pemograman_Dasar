#include <iostream>
using namespace std;
int main ()
{
	int j, k;
	k=0;
	
	cout << "Masukan bilangan = ";
	cin >> j;
	
	for (int i=1; i<=j; i++)
	{
		if (j%i==0)
		{
			k++;
		}
	}
	
	if (k==2)
	{
		cout << j << " Adalah bilangan prima" << endl;	
	}
	else 
	{
		cout << j << " Bukan bilangan prima" << endl;
	}
	 
	return 0;
}
