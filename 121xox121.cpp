#include<conio.h>  //required
#include<iostream> //for system
#include<stdio.h>  //standart input output
#include<stdlib.h> //random
#include<time.h>   //time
#include <cstdlib> //exit(0);
//1 player 2 computer 0 none
void clear()
{
	system("CLS");
}
void core()
{
	int q,w,e,a,s,d,z,x,c,gecici,sira=1,hamle=0,devam=1;
	z=x=c=a=s=d=q=w=e=0;
	char ilkhamle;
	printf("Ilk hamleyi bilgisayar yapsin mi? (ilk hamle bilgisayardaysa sikinti buyuk)\ny/n ");
	scanf("%s",&ilkhamle);
	if(ilkhamle=='y') sira=2;
	else if(ilkhamle=='n') printf("Ilk hamle sizde!");
	else {
		printf("Hatali giris!");
		devam=0;
	}
	printf("Oyun Basladi!%d\n",q);
	while(devam)
	{
		srand (time(NULL));	
		if((q==1 && w==1 && e==1) || (a==1 && s==1 && d==1) || (z==1 && x==1 && c==1) || (q==1 && a==1 && z==1) || (w==1 && s==1 && x==1) || (e==1 && d==1 && c==1) || (q==1 && s==1 && c==1) || (e==1 && s==1 && z==1) ){
			printf("%d %d %d\n%d %d %d\n%d %d %d\nOynanan Hamle=%d  \n# >",q,w,e,a,s,d,z,x,c,hamle);
			printf("Tebrikler, Kazandiniz!");
			system("timeout 2");
			break;	
		}	
		else if((q==2 && w==2 && e==2) || (a==2 && s==2 && d==2) || (z==2 && x==2 && c==2) || (q==2 && a==2 && z==2) || (w==2 && s==2 && x==2) || (e==2 && d==2 && c==2) || (q==2 && s==2 && c==2) || (e==2 && s==2 && z==2) ){
		printf("%d %d %d\n%d %d %d\n%d %d %d\nOynanan Hamle=%d \n#> ",q,w,e,a,s,d,z,x,c,hamle);
			printf("Kaybettiniz!");
			system("timeout 2");
			break;	
		}
			
		if(sira==1)
		{	
		if(q!=0 && w!= 0 && e!= 0 && a!= 0 && s!= 0 && d!= 0 && z!= 0 && x!= 0 && c!= 0)  //berabereyse
		{
				printf("%d %d %d\n%d %d %d\n%d %d %d\n \n#> ",q,w,e,a,s,d,z,x,c,hamle);
			printf("Berabere bitti!");
			system("timeout 2");
			break;
		}
		printf("%d %d %d\n%d %d %d\n%d %d %d\nOynanan Hamle=%d - Hamle Giriniz \n#>",q,w,e,a,s,d,z,x,c,hamle);
		scanf("%d",&gecici);
		switch(gecici){
			case 1:
				if(q==1 || q==2){
					printf("Hatali Giris!");
					system("timeout 2");					
				}
				else
				{
					q=1;
					sira=2;
					break;
				}
				break;
			case 2:
				if(w==1 || w==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					w=1;
					sira=2;
					break;
				}
				break;
			case 3:
				if(e==1 || e==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					e=1;
					sira=2;
					break;
				}
				break;
			case 4:
				if(a==1 || a==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					a=1;
					sira=2;
					break;
				}
				break;
			case 5:
				if(s==1 || s==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					s=1;
					sira=2;
					break;
				}
				break;
			case 6:
				if(d==1 || d==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					d=1;
					sira=2;
					break;
				}
				break;
			case 7:
				if(z==1 || z==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					z=1;
					sira=2;
					break;
				}
				break;
			case 8:
				if(x==1 || x==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					x=1;
					sira=2;
					break;
				}
				break;
			case 9:
				if(c==1 || c==2){
					printf("Hatali Giris!");
					system("timeout 2");
				}
				else
				{
					c=1;
					sira=2;
					break;
				}
				break;
			default:
				printf("Giris yanlis!");
				system("timeout 2");
				break;
		}//switch				
	}//if sira 1
	else //sira 2
	{
		if(q!=0 && w!= 0 && e!= 0 && a!= 0 && s!= 0 && d!= 0 && z!= 0 && x!= 0 && c!= 0)  //berabereyse
		{
			printf("%d %d %d\n%d %d %d\n%d %d %d\n \n#> ",q,w,e,a,s,d,z,x,c,hamle);
			printf("Berabere bitti!");
			system("timeout 2");
			break;
		}
		else if(q==2 && s==2 && (c!=2 && c!=1)) c=2;  //ilk baþa a.i kazanirsa diye atak koyuyoruz defans 2. öncelik attack=2
		else if(q==2 && c==2 && (s!=2 && s!=1)) s=2;
		else if(s==2 && c==2 && (q!=2 && q!=1)) q=2; //qsc bitiþ 2
		else if(q==2 && w==2 && (e!=2 && e!=1)) e=2; //qwe
		else if(q==2 && e==2 && (w!=2 && w!=1)) w=2;
		else if(e==2 && w==2 && (q!=2 && q!=1)) q=2; //qwe bitiþ 2
		else if(a==2 && s==2 && (d!=2 && d!=1)) d=2; 
		else if(a==2 && d==2 && (s!=2 && s!=1)) s=2;
		else if(d==2 && s==2 && (a!=2 && a!=1)) a=2; //asd bitiþ
		else if(z==2 && x==2 && (c!=2 && c!=1)) c=2; 
		else if(z==2 && c==2 && (x!=2 && x!=1)) x=2;
		else if(x==2 && c==2 && (z!=2 && z!=1)) z=2; //zxc bitiþ
		else if(e==2 && s==2 && (z!=2 && z!=1)) z=2; 
		else if(e==2 && z==2 && (s!=2 && s!=1)) s=2;
		else if(z==2 && s==2 && e==0) e=2; //esz bitiþ
		else if(q==2 && a==2 && (z!=2 && z!=1)) z=2;
		else if(q==2 && z==2 && (a!=2 && a!=1)) a=2;
		else if(z==2 && a==2 && (q!=2 && q!=1)) q=2; //qaz bitiþ
		else if(w==2 && x==2 && (s!=2 && s!=1)) s=2;
		else if(w==2 && s==2 && (x!=2 && x!=1)) x=2;
		else if(x==2 && s==2 && (w!=2 && w!=1)) w=2; //wsx bitiþ
		else if(e==2 && d==2 && (c!=2 && c!=1)) c=2;
		else if(e==2 && c==2 && (d!=2 && d!=1)) d=2;
		else if(d==2 && c==2 && (e!=2 && e!=1)) e=2; //ecd bitiþ
		else if(e==1 && d==1 && (c!=2 && c!=1)) c=2;
		else if(e==1 && c==1 && (d!=2 && d!=1)) d=2;
		else if(d==1 && c==1 && (e!=2 && e!=1)) e=2; //ecd bitiþ
		else if(q==1 && s==1 && (c!=2 && c!=1)) c=2; //qsc hamle 1 defans
		else if(q==1 && c==1 && (s!=2 && s!=1)) s=2;
		else if(s==1 && c==1 && (q!=2 && q!=1)) q=2; //qsc bitiþ 1
		else if(q==1 && w==1 && (e!=2 && e!=1)) e=2; //qwe
		else if(q==1 && e==1 && (w!=2 && w!=1)) w=2;
		else if(e==1 && w==1 && (q!=2 && q!=1)) q=2; //qwe bitiþ 1 defans
		else if(a==1 && s==1 && (d!=2 && d!=1)) d=2; 
		else if(a==1 && d==1 && (s!=2 && s!=1)) s=2;
		else if(d==1 && s==1 && (a!=2 && a!=1)) a=2; //asd bitiþ
		else if(z==1 && x==1 && (c!=2 && c!=1)) c=2; 
		else if(z==1 && c==1 && (x!=2 && x!=1)) x=2;
		else if(x==1 && c==1 && (z!=2 && z!=1)) z=2; //zxc bitiþ
		else if(e==1 && s==1 && (z!=2 && z!=1)) z=2; 
		else if(e==1 && z==1 && (s!=2 && s!=1)) s=2;
		else if(z==1 && x==1 && (e!=2 && e!=1)) e=2; //esz bitiþ
		else if(q==1 && a==1 && (z!=2 && z!=1)) z=2;
		else if(q==1 && z==1 && (a!=2 && a!=1)) a=2;
		else if(z==1 && a==1 && (q!=2 && q!=1)) q=2; //qaz bitiþ
		else if(w==1 && x==1 && (s!=2 && s!=1)) s=2;
		else if(w==1 && s==1 && (x!=2 && x!=1)) x=2;
		else if(x==1 && s==1 && (w!=2 && w!=1)) w=2; //wsx bitiþ
		else {
		gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
		switch(gecici){
			case 1:
				if (q==1 || q==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					q=2;
				}
				break;
			case 2:
				if (w==1 || w==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					w=2;
				}
				break;
			case 3:
				if (e==1 || e==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					e=2;
				}
				break;
			case 4:
				if (a==1 || a==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					a=2;
				}
				break;
			case 5:
				if (s==1 || s==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					s=2;
				}
				break;
			case 6:
				if (d==1 || d==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					d=2;
				}
				break;
			case 7:
				if (z==1 || z==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					z=2;
				}
				break;
			case 8:
				if (x==1 || x==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					x=2;
				}
				break;
			case 9:
				if (c==1 || c==2)
				{
					gecici=1 + rand()%9; //1-2-3-4-5-6-7-8-9
					continue;
				}
				else{
					c=2;
				}
				break;			
			} //switch
			clear();
		} // random else   		
		sira=1;
		clear();
	} // else
	hamle++;
	}//while
}



int main(){
	int help;
	printf("Yardim almak icin 1 e basin! \n 1>Yardim Al(Nasil oynanir)\n RASTGELESAYI>Gecmek icin 1 disinda sayi girin.\n#>");
	scanf("%d",&help);
	if(help!=1)
	{
		printf("\nOOEOEOEO.\n\n");
		help=1;
	}
	else{
		printf("%d %d %d\n%d %d %d\n%d %d %d\nBasit sekilde dizilim budur.Oyuncu rakamlari girerek giris yapar ve her zaman 1'tir.\nComp. ise her zaman 2'dir.Computer asla yenilmeyecek sekilde\ntasarlanmistir.Yani uzulme kimse yenemiyor!",1,2,3,4,5,6,7,8,9);
		printf("\n(En azindan daha gormedik! :p)V2.0 - Coded by acap1t. Mail--->cemdenkacmz@gmail.com \nGecmek icin enter'a basiniz.\n\n----------------------------\n");
		getch();
	}
	printf("Oyun Basliyor!");
	system("timeout 2");
	clear();
	while(help){
		core();
		clear();
	}
	return 0;
}
