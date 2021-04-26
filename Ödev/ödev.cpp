//Bu soruda toplama, üs alma(karesi) ve kök alma iþlemlerini kullanacaðým.
#include <iostream>
#include <math.h>
using namespace std;

class islem1 
{
	public:
		int topla(int sayi1, int sayi2) 
		{
			return sayi1 + sayi2;
		}
};

class islem2 
{
	public:
		int kare(int sayi) 
		{
			return sayi*sayi;
		}
};

class islem3 
{
	public:
		int karekok(int sayi) 
		{
			return sqrt(sayi);
		}
};

class pisagor: 
    public islem1, islem2, islem3
	 {
	public:
		int pisagorislemi(int sayi1, int sayi2) 
		{
			return karekok(topla(kare(sayi1), kare(sayi2)));
		}
     };

int main(void) 
{
	
	float kenar1, kenar2;
	
	pisagor p;
	
	cout << "Dik ucgenin ilk kenari : ";
	cin >> kenar1;
	
	cout << "Dik ucgenin ikinci kenari : ";
	cin >> kenar2;
	
	cout << kenar1 << " ve " << kenar2 << " kenar uzunluklu bu dik ucgenin hipotenusu " << p.pisagorislemi(kenar1, kenar2) << " dir." << endl;
}
