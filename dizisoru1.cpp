#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
//Bir iþletmenin son 5 yýllýk her aya ait ciro miktarlarý (100-5000 arasýnda) veri olarak bulunmaktadýr. Bu veriler
//üzerinde aþaðýdaki hesaplamalarý yaptýran programý yazýn;
// Bu verileri “ciro” adýnda uygun bir dizi yapýsýna giriniz (veya 100-5000 arasýnda rastgele üretiniz)
// Yýllýk ortalama cirolarý ayrý ayrý hesaplayarak, ayrý bir “ortciro” adýnda uygun bir dizi yapýsýna atayýnýz
// Klavyeden girilen yýlýn (yýl sýrasýna göre 1.yýl, 2.yýl vs.) ortalamasýndan yüksek olan aylarýn ay sýrasý ve cirolarýný
//ekrana yazan
// Klavyeden girilen yýlýn (yýl sýrasýna göre 1.yýl, 2.yýl vs.) her çeyreðinin (1-2-3.aylar ilk çeyrek vs.) ortalamasýný
//hesaplayýp ekrana yazan program.
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
cout<<"yýl giriniz";  
cin>>yil;
for(int i=0;i<5;i++)
{
  for(int j=0;j<12;j++)
  {
  if(ciro[i][j]>ortciro[yil])
  {
  cout<<i+1<<". yýl "<<j+1<<". ay Ciro:"<<ciro[i][j]<<endl;
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
cout<<yil<<". yýlýn "<<i+1<<". çeyreðinin ortalamasý:"<<ceyrekort[i]<<endl;
}



	system("pause");
	return 0;
}
