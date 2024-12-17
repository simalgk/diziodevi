#include <iostream>
#include <stdlib.h>
#include <time.h>
//veri analizi soru 1
using namespace std;

int main()
{
int sayi[500];	
for(int i=0;i<500;i++)
{sayi[i]=rand()%(100-0+1)+0;	
cout<<sayi[i]<<endl;
}

	system("pause");
	return 0;
}
