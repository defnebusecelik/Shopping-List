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
					//Urun sorgulatma ekran�
					//Kategori de�i�kenine de�eri atar, de�erdeki urunleri sorgulat�p ekrana yazd�r�r.
						printf("\n***********************************************************************");
						printf("\nHangi kategoriden urun sorgulamak istiyorsunuz?: \n1- Akilli telefon \n2- Akilli saat \n3- Yazici \n4- Bilgisayar");
						printf("\n***********************************************************************");
						printf("\nSeciminiz: ");
						scanf("%d",&kategori);
						system ("color 2");
							switch(kategori){
								case 1:
									//Kategori de�i�kenine 1 de�eri atand���nda ak�ll� telefon men�s�n� yazd�r�r.
									printf("\n**************************************");
									printf("\n1- Akilli telefon-1 : %d TL \n2- Akilli telefon-2 : %d TL \n3- Akilli telefon-3: %d TL",at1,at2,at3);	
									break;
								case 2:
									//Kategori de�i�kenine 2 de�eri atand���nda ak�ll� saat men�s�n� yazd�r�r.
									printf("\n**************************************");
									printf("\n1- Akilli saat-1 : %.2f TL \n2- Akilli saat-2 : %.2f TL \n3- Akilli saat-3 : %.2f TL",as1,as2,as3);
									break;
								case 3:
									//Kategori de�i�kenine 3 de�eri atand���nda yaz�c� men�s�n� yazd�r�r.
									printf("\n**************************************");
									printf("\n1- Yazici A : %.2f TL \n2- Yazici B : %.2f TL \n3- Yazici C : %.2f TL",yaza,yazb,yazc);
									break;
								case 4:
									//Kategori de�i�kenine 4 de�eri atand���nda bilgisayar men�s�n� yazd�r�r.
									printf("\n**************************************");
									printf("\n1- Bilgisayar X : %d TL \n2- Bilgisayar Y : %d TL \n3- Bilgisayar Z : %d TL \n4- Bilgisayar Q : %d TL",bilx,bily,bilz,bilq);
									break;
							}
						//Urun sorgulama ya da ana men�ye ge�me d�ng�s� i�in de�er ister.
						printf("\n*********************************************************************** \n1- Baska kategori urunlerini sorgula \n2- Ana menuye don \n**********************************************************************");
						printf("\nSeciminiz: ");
						scanf("%d",&kopru1);
						system ("color 5");		
						
						//Baska kategori  sorgulanmak istendi�inde yazd�r�r.
						for(;kopru1==1;){
							printf("\n***********************************************************************");
							printf("\nHangi kategoriden urun sorgulamak istiyorsunuz?: \n1- Akilli telefon \n2- Akilli saat \n3- Yazici \n4- Bilgisayar");
							printf("\n***********************************************************************");
							printf("\nSeciminiz: ");
							scanf("%d",&kategori);
							system ("color 2");
							switch(kategori){
								case 1:
									//Kategori de�i�kenine 1 de�eri atand���nda ak�ll� telefon men�s�n� yazd�r�r.
									printf("\n**************************************");
									printf("\n1- Akilli telefon-1 : %d TL \n2- Akilli telefon-2 : %d TL \n3- Akilli telefon-3: %d TL",at1,at2,at3);	
									break;
								case 2:
									//Kategori de�i�kenine 2 de�eri atand���nda ak�ll� saat men�s�n� yazd�r�r.
									printf("\n**************************************");
									printf("\n1- Akilli saat-1 : %.2f TL \n2- Akilli saat-2 : %.2f TL \n3- Akilli saat-3 : %.2f TL",as1,as2,as3);
									break;
								case 3:
									//Kategori de�i�kenine 3 de�eri atand���nda yaz�c� men�s�n� yazd�r�r.
									printf("\n**************************************");
									printf("\n1- Yazici A : %.2f TL \n2- Yazici B : %.2f TL \n3- Yazici C : %.2f TL",yaza,yazb,yazc);
									break;
								case 4:
									//Kategori de�i�kenine 4 de�eri atand���nda bilgisayar men�s�n� yazd�r�r.
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
					//urun eklemek i�in se�et de�i�keni kullan�l�r, sepet de�i�kenine de�er atamak i�in de�er istenir.
						switch (sepet){
							case 1:
								//sepet de�i�kenine 1 de�eri atand���nda ak�ll� telefon kategorisini yazar, ekleyece�i urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nAkilli telefon kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Akilli telefon-1 : 1500 TL \n2- Akilli telefon-2 : 2750 TL \n3- Akilli telefon-3 : 8832 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//birinci telefon secilmi�tir, ucrete ekler.
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
								//sepet de�i�kenine 2 de�eri atand���nda ak�ll� saat kategorisini yazar, ekleyece�i urunu secmesini ister.
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
								//sepet de�i�kenine 3 de�eri atand���nda yaz�c� kategorisini yazar, ekleyece�i urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nYazici kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1-Yazici A : 553.50 TL \n2- Yazici B : 848.20 TL \n3- Yazici C : 1433.33 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//a yaz�c�s� secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=yaza;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//b yaz�c�s� secilmist�r, ucrete ekler.
								else if(urun==2){
									ucret+=yazb;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//c yaz�c�s� secilmistir, ucrete ekler.
								else if(urun==3){
									ucret+=yazc;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								break;
							case 4:
								//sepet de�i�kenine 4 de�eri atand���nda bilgisayar kategorisini yazar, ekleyece�i urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nBilgisayar kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Bilgisayar X : 14600 TL \n2- Bilgisayar Y : 12964 TL \n3- Bilgisayar Z : 22920 TL \n4- Bilgisayar Q : 36123 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//x bilgisayar� secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=bilx;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//y bilgisayar� secilmistir, ucrete ekler.
								if(urun==2){
									ucret+=bily;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//z bilgisayar� secilmistir, ucrete ekler.
								if(urun==3){
									ucret+=bilz;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//q bilgisayar� secilmistir, ucrete ekler.
								if(urun==4){
									ucret+=bilq;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								break;
						}
					//sepete urun eklemeye devam etme ya da ana menuye gecme d�ng�s� icin de�er ister.
					printf("\n*********************************************************************** \n1- Sepete urun ekle \n2- Ana menuye don");
					printf("\n**********************************************************************");
					printf("\nSeciminiz: ");
					scanf("%d",&kopru2);
					system ("color 3");
					
					//kopru2 de�i�kenine 1 de�eri atand���nda sepete eklemeye devam eder.
					for (;kopru2==1;){
						printf("\n***********************************************************************");
						printf("\nHangi kategoriden urun eklemek istiyorsunuz?: \n1- Akilli telefon \n2- Akilli saat \n3- Yazici \n4- Bilgisayar");
						printf("\n**********************************************************************");
						printf("\nSeciminiz: ");
						scanf("%d",&sepet);
						system ("color 6");
							switch (sepet){
							case 1:
								//sepet de�i�kenine 1 de�eri atand���nda ak�ll� telefon kategorisini yazar, ekleyece�i urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nAkilli telefon kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Akilli telefon-1 : 1500 TL \n2- Akilli telefon-2 : 2750 TL \n3- Akilli telefon-3 : 8832 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//birinci telefon secilmi�tir, ucrete ekler.
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
								//sepet de�i�kenine 2 de�eri atand���nda ak�ll� saat kategorisini yazar, ekleyece�i urunu secmesini ister.	
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
								//sepet de�i�kenine 3 de�eri atand���nda yaz�c� kategorisini yazar, ekleyece�i urunu secmesini ister.	
								printf("\n***********************************************************************");
								printf("\nYazici kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1-Yazici A : 553.50 TL \n2- Yazici B : 848.20 TL \n3- Yazici C : 1433.33 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//a yaz�c�s� secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=yaza;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//b yaz�c�s� secilmist�r, ucrete ekler.
								else if(urun==2){
									ucret+=yazb;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//c yaz�c�s� secilmistir, ucrete ekler.
								else if(urun==3){
									ucret+=yazc;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								break;
							case 4:
								//sepet de�i�kenine 4 de�eri atand���nda bilgisayar kategorisini yazar, ekleyece�i urunu secmesini ister.
								printf("\n***********************************************************************");
								printf("\nBilgisayar kategorisi urunlerinden hangisini sepete eklemek istersiniz?: \n1- Bilgisayar X : 14600 TL \n2- Bilgisayar Y : 12964 TL \n3- Bilgisayar Z : 22920 TL \n4- Bilgisayar Q : 36123 TL");
								printf("\n*************************************************************************");
								printf("\nSeciminiz: ");
								scanf("%d",&urun);
								//x bilgisayar� secilmistir, ucrete ekler.
								if(urun==1){
									ucret+=bilx;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}
								//y bilgisayar� secilmistir, ucrete ekler.
								if(urun==2){
									ucret+=bily;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//z bilgisayar� secilmistir, ucrete ekler.
								if(urun==3){
									ucret+=bilz;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								//q bilgisayar� secilmistir, ucrete ekler.
								if(urun==4){
									ucret+=bilq;
									printf("\n***********************************************************************");
									printf("\nToplam sepet tutariniz: %.2f",ucret);
									printf("\n***********************************************************************");
								}	
								break;
						}
					//sepete urun eklemeye devam etme ya da ana menuye gecme d�ng�s� icin de�er ister.
					printf("\n*********************************************************************** \n1- Sepete urun ekle \n2- Ana menuye don");
					printf("\n**********************************************************************");
					printf("\nSeciminiz: ");
					scanf("%d",&kopru2);
					system ("color 3");	
					}
						break;	
				case 3:	
				 //toplam ucret yazd�rma ekran�
				 //ucret de�i�kenine toplayarak atad���m�z toplam de�eri ekrana yazd�r�r, ana menuye d�ner.
					printf("\n*********************************************************************** \nToplam sepet tutariniz: %.2f TL \n***********************************************************************",ucret);
					printf("\n1 Urun ve fiyat sorgula \n2- Sepete urun ekle \n3- Siparis tamamla \n4- Sonlandir");
					printf("\n***********************************************************************");
					printf("\nSeciminiz: ");
					scanf("%d",&secim);
					system ("color D");
				break;
				case 4:
					//sonland�rma ekran�
					system ("color F");	
					printf("\n*********************************************************************** \nIyi gunler dileriz. :) \nProgram sonlandiriliyor... \n***********************************************************************");
				break;	
				default:
						//�stenen de�erlerden ba�ka de�er girildi�inde yeniden girilmesini ister.
					system ("color F");
					printf("Yanlis deger, tekrardan yapiniz.");		
					break;	
			}
			//al��veris uygulamas�n� sonland�r�r.
			if (secim==4){
					//system ("color F");	
					//printf("\n*********************************************************************** \nIyi gunler dileriz. :) \nProgram sonlandiriliyor... \n***********************************************************************");
					break;
			}
	}
		}
