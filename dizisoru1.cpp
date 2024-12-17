#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
//Bir i�letmenin son 5 y�ll�k her aya ait ciro miktarlar� (100-5000 aras�nda) veri olarak bulunmaktad�r. Bu veriler
//�zerinde a�a��daki hesaplamalar� yapt�ran program� yaz�n;
// Bu verileri �ciro� ad�nda uygun bir dizi yap�s�na giriniz (veya 100-5000 aras�nda rastgele �retiniz)
// Y�ll�k ortalama cirolar� ayr� ayr� hesaplayarak, ayr� bir �ortciro� ad�nda uygun bir dizi yap�s�na atay�n�z
// Klavyeden girilen y�l�n (y�l s�ras�na g�re 1.y�l, 2.y�l vs.) ortalamas�ndan y�ksek olan aylar�n ay s�ras� ve cirolar�n�
//ekrana yazan
// Klavyeden girilen y�l�n (y�l s�ras�na g�re 1.y�l, 2.y�l vs.) her �eyre�inin (1-2-3.aylar ilk �eyrek vs.) ortalamas�n�
//hesaplay�p ekrana yazan program.
int main()
{
	setlocale(LC_ALL,"Turkish");
srand(time(NULL));
int yil;
double ciro[5][12];
double ortciro[5],toplam[5],ceyrektoplam[4],ceyrekort[4];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<12;j++)
		{
			ciro[i][j]=rand()%(5000-100+1)+100;
			toplam[i]+=ciro[i][j];
			cout<<setw(5)<<ciro[i][j];
		}	

	ortciro[i]=toplam[i]/12;	
	cout<<" ort:"<<ortciro[i];
	cout<<endl;		
	}
cout<<"y�l giriniz";  
cin>>yil;
for(int i=0;i<5;i++)
{
  for(int j=0;j<12;j++)
  {
  if(ciro[i][j]>ortciro[yil])
  {
  cout<<i+1<<". y�l "<<j+1<<". ay Ciro:"<<ciro[i][j]<<endl;
  }	
}
}
cout<<endl;
for (int i=0,j=0;i<4;i++)
{while(j/3==i)
{ceyrektoplam[i]+=ciro[yil-1][j];
 j++;
}
ceyrekort[i]=ceyrektoplam[i]/3;
cout<<yil<<". y�l�n "<<i+1<<". �eyre�inin ortalamas�:"<<ceyrekort[i]<<endl;
}



	system("pause");
	return 0;
}
