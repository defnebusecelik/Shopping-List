#include <stdio.h>
#include <Windows.h>
int main()
{
	int secim;
	int kategori;
	int kopru1;
	int kopru2;
	int secimkopru;
	int secimkopru1;
	int secimkopru2;
	int sepet;
	int urun;
	float ucret;
	int at1,at2,at3;
	float as1,as2,as3;
	float yaza,yazb,yazc;
	int bilx,bily,bilz,bilq;
	
	at1=1500;
	at2=2750;
	at3=8832;
	
	as1=543.99;
	as2=1324.50;
	as3=850;
	
	yaza=553.50;
	yazb=848.20;
	yazc=1433.33;
	
	bilx=14600;
	bily=12964;
	bilz=22920;
	bilq=36123;
	
	printf("*********************--- ABC ELEKTRONIK ---********************* \n--------------------------------- Hosgeldiniz --------------------------------- \n********************************************************************");
    for(int i=0;i<10;i++){	
		printf("\n1 Urun ve fiyat sorgula \n2- Sepete urun ekle \n3- Siparis tamamla \n4- Sonlandir");
		printf("\n***********************************************************************");
		printf("\nSeciminiz: ");
		scanf("%d",&secim);
		system ("color 4");
			switch(secim) {
				case 1:
					//Urun sorgulatma ekraný
					//Kategori deðiþkenine deðeri atar, deðerdeki urunleri sorgulatýp ekrana yazdýrýr.
						printf("\n***********************************************************************");
						printf("\nHangi kategoriden urun sorgulamak istiyorsunuz?: \n1- Akilli telefon \n2- Akilli saat \n3- Yazici \n4- Bilgisayar");
						printf("\n***********************************************************************");
						printf("\nSeciminiz: ");
						scanf("%d",&kategori);
						system ("color 2");
							switch(kategori){
								case 1:
									//Kategori deðiþkenine 1 deðeri atandýðýnda akýllý telefon menüsünü yazdýrýr.
									printf("\n**************************************");
									printf("\n1- Akilli telefon-1 : %d TL \n2- Akilli telefon-2 : %d TL \n3- Akilli telefon-3: %d TL",at1,at2,at3);	
									break;
								case 2:
									//Kategori deðiþkenine 2 deðeri atandýðýnda akýllý saat menüsünü yazdýrýr.
									printf("\n**************************************");
									printf("\n1- Akilli saat-1 : %.2f TL \n2- Akilli saat-2 : %.2f TL \n3- Akilli saat-3 : %.2f TL",as1,as2,as3);
									break;
								case 3:
									//Kategori deðiþkenine 3 deðeri atandýðýnda yazýcý menüsünü yazdýrýr.
									printf("\n**************************************");
									printf("\n1- Yazici A : %.2f TL \n2- Yazici B : %.2f TL \n3- Yazici C : %.2f TL",yaza,yazb,yazc);
									break;
								case 4:
									//Kategori deðiþkenine 4 deðeri atandýðýnda bilgisayar menüsünü yazdýrýr.
									printf("\n**************************************");
									printf("\n1- Bilgisayar X : %d TL \n2- Bilgisayar Y : %d TL \n3- Bilgisayar Z : %d TL \n4- Bilgisayar Q : %d TL",bilx,bily,bilz,bilq);
									break;
							}
						//Urun sorgulama ya da ana menüye geçme döngüsü için deðer ister.
						printf("\n*********************************************************************** \n1- Baska kategori urunlerini sorgula \n2- Ana menuye don \n**********************************************************************");
						printf("\nSeciminiz: ");
						scanf("%d",&kopru1);
						system ("color 5");		
						
						//Baska kategori  sorgulanmak istendiðinde yazdýrýr.
						for(;kopru1==1;){
							printf("\n***********************************************************************");
							printf("\nHangi kategoriden urun sorgulamak istiyorsunuz?: \n1- Akilli telefon \n2- Akilli saat \n3- Yazici \n4- Bilgisayar");
							printf("\n***********************************************************************");
							printf("\nSeciminiz: ");
							scanf("%d",&kategori);
							system ("color 2");
							switch(kategori){
								case 1:
									//Kategori deðiþkenine 1 deðeri atandýðýnda akýllý telefon menüsünü yazdýrýr.
									printf("\n**************************************");
									printf("\n1- Akilli telefon-1 : %d TL \n2- Akilli telefon-2 : %d TL \n3- Akilli telefon-3: %d TL",at1,at2,at3);	
									break;
								case 2:
									//Kategori deðiþkenine 2 deðeri atandýðýnda akýllý saat menüsünü yazdýrýr.
									printf("\n**************************************");
									printf("\n1- Akilli saat-1 : %.2f TL \n2- Akilli saat-2 : %.2f TL \n3- Akilli saat-3 : %.2f TL",as1,as2,as3);
									break;
								case 3:
									//Kategori deðiþkenine 3 deðeri atandýðýnda yazýcý menüsünü yazdýrýr.
									printf("\n**************************************");
									printf("\n1- Yazici A : %.2f TL \n2- Yazici B : %.2f TL \n3- Yazici C : %.2f TL",yaza,yazb,yazc);
									break;
								case 4:
									//Kategori deðiþkenine 4 deðeri atandýðýnda bilgisayar menüsünü yazdýrýr.
									printf("\n**************************************");
									printf("\n1- Bilgisayar X : %d TL \n2- Bilgisayar Y : %d TL \n3- Bilgisayar Z : %d TL \n4- Bilgisayar Q : %d TL",bilx,bily,bilz,bilq);
									break;
							}
						printf("\n*********************************************************************** \n1- Baska kategori urunlerini sorgula \n2- Ana menuye don \n**********************************************************************");
						printf("\nSeciminiz: ");
						scanf("%d",&kopru1);
						system ("color 5");
						}
					break;
				case 2:
					//sepete urun ekleme menusu
					printf("\n***********************************************************************");
					printf("\nHangi kategoriden urun eklemek istiyorsunuz?: \n1- Akilli telefon \n2- Akilli saat \n3- Yazici \n4- Bilgisayar");
					printf("\n**********************************************************************");
					printf("\nSeciminiz: ");
					scanf("%d",&sepet);
					system ("color 6");
					//urun eklemek için seðet deðiþkeni kullanýlýr, sepet deðiþkenine deðer atamak için deðer istenir.
						switch (sepet){
							case 1:
								//sepet deðiþkenine 1 deðeri atandýðýnda akýllý telefon kategorisini yazar, ekleyeceði urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nAkilli telefon kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Akilli telefon-1 : 1500 TL \n2- Akilli telefon-2 : 2750 TL \n3- Akilli telefon-3 : 8832 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//birinci telefon secilmiþtir, ucrete ekler.
								if(urun==1){
									ucret+=at1;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//ikinci telefon secilmistir, ucrete ekler.
								else if (urun==2){
									ucret+=at2;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//ucuncu telefon secilmistir, ucrete ekler.
								else if (urun==3) {
								printf("\n***********************************************************************");
								printf("\nToplam sepet tutariniz: %.2f",ucret);
								printf("\n***********************************************************************");
								}
								break;
							case 2:
								//sepet deðiþkenine 2 deðeri atandýðýnda akýllý saat kategorisini yazar, ekleyeceði urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nAkilli saat kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Akilli saat-1 : 543.99 TL \n2- Akilli saat-2 : 1324.50TL \n3- Akilli saat-3 : 850 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//birinci saat secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=as1;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//ikinci saat secilmistir, ucrete ekler.
								else if(urun==2){
									ucret+=as2;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//ucuncu saat secilmistir, ucrete ekler.
								else if(urun==3){
									ucret+=as3;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								break;
							case 3:
								//sepet deðiþkenine 3 deðeri atandýðýnda yazýcý kategorisini yazar, ekleyeceði urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nYazici kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1-Yazici A : 553.50 TL \n2- Yazici B : 848.20 TL \n3- Yazici C : 1433.33 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//a yazýcýsý secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=yaza;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//b yazýcýsý secilmistýr, ucrete ekler.
								else if(urun==2){
									ucret+=yazb;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//c yazýcýsý secilmistir, ucrete ekler.
								else if(urun==3){
									ucret+=yazc;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								break;
							case 4:
								//sepet deðiþkenine 4 deðeri atandýðýnda bilgisayar kategorisini yazar, ekleyeceði urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nBilgisayar kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Bilgisayar X : 14600 TL \n2- Bilgisayar Y : 12964 TL \n3- Bilgisayar Z : 22920 TL \n4- Bilgisayar Q : 36123 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//x bilgisayarý secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=bilx;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//y bilgisayarý secilmistir, ucrete ekler.
								if(urun==2){
									ucret+=bily;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//z bilgisayarý secilmistir, ucrete ekler.
								if(urun==3){
									ucret+=bilz;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//q bilgisayarý secilmistir, ucrete ekler.
								if(urun==4){
									ucret+=bilq;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								break;
						}
					//sepete urun eklemeye devam etme ya da ana menuye gecme döngüsü icin deðer ister.
					printf("\n*********************************************************************** \n1- Sepete urun ekle \n2- Ana menuye don");
					printf("\n**********************************************************************");
					printf("\nSeciminiz: ");
					scanf("%d",&kopru2);
					system ("color 3");
					
					//kopru2 deðiþkenine 1 deðeri atandýðýnda sepete eklemeye devam eder.
					for (;kopru2==1;){
						printf("\n***********************************************************************");
						printf("\nHangi kategoriden urun eklemek istiyorsunuz?: \n1- Akilli telefon \n2- Akilli saat \n3- Yazici \n4- Bilgisayar");
						printf("\n**********************************************************************");
						printf("\nSeciminiz: ");
						scanf("%d",&sepet);
						system ("color 6");
							switch (sepet){
							case 1:
								//sepet deðiþkenine 1 deðeri atandýðýnda akýllý telefon kategorisini yazar, ekleyeceði urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nAkilli telefon kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Akilli telefon-1 : 1500 TL \n2- Akilli telefon-2 : 2750 TL \n3- Akilli telefon-3 : 8832 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//birinci telefon secilmiþtir, ucrete ekler.
								if(urun==1){
									ucret+=at1;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//ikinci telefon secilmistir, ucrete ekler.
								else if (urun==2){
									ucret+=at2;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//ucuncu telefon secilmistir, ucrete ekler.
								else if (urun==3) {
								printf("\n***********************************************************************");
								printf("\nToplam sepet tutariniz: %.2f",ucret);
								printf("\n***********************************************************************");
								}
								break;
							case 2:
								//sepet deðiþkenine 2 deðeri atandýðýnda akýllý saat kategorisini yazar, ekleyeceði urunu secmesini ister.	
								printf("\n***********************************************************************");
								printf("\nAkilli saat kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Akilli saat-1 : 543.99 TL \n2- Akilli saat-2 : 1324.50TL \n3- Akilli saat-3 : 850 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//birinci saat secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=as1;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//ikinci saat secilmistir, ucrete ekler.
								else if(urun==2){
									ucret+=as2;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//ucuncu saat secilmistir, ucrete ekler.
								else if(urun==3){
									ucret+=as3;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								break;
							case 3:
								//sepet deðiþkenine 3 deðeri atandýðýnda yazýcý kategorisini yazar, ekleyeceði urunu secmesini ister.	
								printf("\n***********************************************************************");
								printf("\nYazici kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1-Yazici A : 553.50 TL \n2- Yazici B : 848.20 TL \n3- Yazici C : 1433.33 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//a yazýcýsý secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=yaza;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//b yazýcýsý secilmistýr, ucrete ekler.
								else if(urun==2){
									ucret+=yazb;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//c yazýcýsý secilmistir, ucrete ekler.
								else if(urun==3){
									ucret+=yazc;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								break;
							case 4:
								//sepet deðiþkenine 4 deðeri atandýðýnda bilgisayar kategorisini yazar, ekleyeceði urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nBilgisayar kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Bilgisayar X : 14600 TL \n2- Bilgisayar Y : 12964 TL \n3- Bilgisayar Z : 22920 TL \n4- Bilgisayar Q : 36123 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//x bilgisayarý secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=bilx;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//y bilgisayarý secilmistir, ucrete ekler.
								if(urun==2){
									ucret+=bily;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//z bilgisayarý secilmistir, ucrete ekler.
								if(urun==3){
									ucret+=bilz;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//q bilgisayarý secilmistir, ucrete ekler.
								if(urun==4){
									ucret+=bilq;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								break;
						}
					//sepete urun eklemeye devam etme ya da ana menuye gecme döngüsü icin deðer ister.
					printf("\n*********************************************************************** \n1- Sepete urun ekle \n2- Ana menuye don");
					printf("\n**********************************************************************");
					printf("\nSeciminiz: ");
					scanf("%d",&kopru2);
					system ("color 3");	
					}
						break;	
				case 3:	
				 //toplam ucret yazdýrma ekraný
				 //ucret deðiþkenine toplayarak atadýðýmýz toplam deðeri ekrana yazdýrýr, ana menuye döner.
					printf("\n*********************************************************************** \nToplam sepet tutariniz: %.2f TL \n***********************************************************************",ucret);
					printf("\n1 Urun ve fiyat sorgula \n2- Sepete urun ekle \n3- Siparis tamamla \n4- Sonlandir");
					printf("\n***********************************************************************");
					printf("\nSeciminiz: ");
					scanf("%d",&secim);
					system ("color D");
				break;
				case 4:
					//sonlandýrma ekraný
					system ("color F");	
					printf("\n*********************************************************************** \nIyi gunler dileriz. :) \nProgram sonlandiriliyor... \n***********************************************************************");
				break;	
				default:
						//Ýstenen deðerlerden baþka deðer girildiðinde yeniden girilmesini ister.
					system ("color F");
					printf("Yanlis deger, tekrardan yapiniz.");		
					break;	
			}
			//alýþveris uygulamasýný sonlandýrýr.
			if (secim==4){
					//system ("color F");	
					//printf("\n*********************************************************************** \nIyi gunler dileriz. :) \nProgram sonlandiriliyor... \n***********************************************************************");
					break;
			}
	}
		}
