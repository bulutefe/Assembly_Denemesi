#include <iostream>
#include <stdio.h>
#include "asm.h"
using namespace std;

int main()
{
	Hesap_Makinesi hesap;
	int sayi;
	int be;
	c:
	printf("Lutfen yapmak istediginiz islemi seciniz: \n-Iki sayiyi toplama icin 1,\n-Iki sayiyi carpma icin 2,\n-Iki sayiyi bolme icin 3,\n-Cok sayiyi toplama icin 4,\n-Cok sayiyi carpma icin 5'e basiniz.\n");
	cin >> sayi;
	switch (sayi)
	{
	case 1:
		hesap.ikisayi_toplama();
		printf("Baska islem yapmak ister misiniz?\n#Cevabiniz hayir ise 0'a, evet ise rastgele bir sayiya basiniz.");
		cin >> be;
		if (be == 0)
		{
			break;
		}
		else
		{
			goto c;
		}
	case 2:
		hesap.ikisayi_carpma();
		printf("Baska islem yapmak ister misiniz?\n#Cevabiniz hayir ise 0'a, evet ise rastgele bir sayiya basiniz.");
		cin >> be;
		if (be == 0)
		{
			break;
		}
		else
		{
			goto c;
		}
	case 3:
		hesap.ikisayi_bolme();
		printf("Baska islem yapmak ister misiniz?\n#Cevabiniz hayir ise 0'a, evet ise rastgele bir sayiya basiniz.");
		cin >> be;
		if (be == 0)
		{
			break;
		}
		else
		{
			goto c;
		}
	case 4:
		hesap.coksayi_toplama();
		printf("Baska islem yapmak ister misiniz?\n#Cevabiniz hayir ise 0'a, evet ise rastgele bir sayiya basiniz.");
		cin >> be;
		if (be == 0)
		{
			break;
		}
		else
		{
			goto c;
		}
	case 5:
		hesap.coksayi_carpma();
		printf("Baska islem yapmak ister misiniz?\n#Cevabiniz hayir ise 0'a, evet ise rastgele bir sayiya basiniz.");
		cin >> be;
		if (be == 0)
		{
			break;
		}
		else
		{
			goto c;
		}
	default:
		printf("Gecersiz sayi girdiniz basa donuyorsunuz...");
		goto c;
	}
	system("pause");
	return 0;
}
