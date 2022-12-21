/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: LAB-2
 *
 * Created on 25 Kasım 2022 Cuma, 15:07
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define BOYUT 50
struct person{
char adi[BOYUT];
//char soyadi[BOYUT];
//char memleketi[BOYUT];
int yas;
int okulNosu;

struct person *next;
};
typedef struct Kordinat{
        int x1,y1;
        int x2,y2;
        
    }kordinat;
   
/*struct example*/

/* faktoriyel */
void faktoriyel_for(int number);

int faktoriyel_rec(int number);

/*palidrom
 121 == 121
 * 234 == 432
 */
int palindrom(int number, int temp);

/*123 --> 321*/
int reverse_number(int number);

/*agaz uzama sorusu, ATM*/
// bir agac
// her ay +2 cm
// 3 yıl sonra ne kadar uzunluk olur
// maliyet = a*f + a
// faiz orani = %12

void state_do(int tree_legh, int rm);

// 100 999
//102, 103, 104, 876, 987
void uc_basamakli();

int main() {
    struct person *persons;
    
    persons = malloc(sizeof(struct person));
    strcpy(persons->adi, "hakan");
    
    printf("%s \n", persons->adi);
   /* int i;
    struct person a[5];
    
    strcpy(a[0].adi, "hakan");
    strcpy(a[0].soyadi,"aaa");
    strcpy(a[0].memleketi,"giresun");
    a[0].yas=25;
    a[0].okulNosu=123;
    
    printf("%s",a[0].adi);
    printf("%s",a[0].soyadi);
    printf("%s",a[0].memleketi);
    printf("%d",a[0].yas);
    printf("%d",a[0].okulNosu);
    
     strcpy(a[1].adi, "hakan");
    strcpy(a[1].soyadi,"aaa");
    strcpy(a[1].memleketi,"giresun");
    a[1].yas=25;
    a[1].okulNosu=123;
    
    printf("%s",a[1].adi);
    printf("%s",a[1].soyadi);
    printf("%s",a[1].memleketi);
    printf("%d",a[1].yas);
    printf("%d",a[1].okulNosu);
    
     strcpy(a[2].adi, "hakan");
    strcpy(a[2].soyadi,"aaa");
    strcpy(a[2].memleketi,"giresun");
    a[2].yas=25;
    a[2].okulNosu=123;
    
    printf("%s",a[2].adi);
    printf("%s",a[2].soyadi);
    printf("%s",a[2].memleketi);
    printf("%d",a[2].yas);
    printf("%d",a[2].okulNosu);
    for(i=3;i<4;i++){
        printf("Ad giriniz: ");
        scanf("%s",a[i].adi);
         printf("Soyad giriniz: ");
        scanf("%s",a[i].soyadi);
         printf("Memleket giriniz: ");
        scanf("%s",a[i].memleketi);
         printf("Yas giriniz: ");
        scanf("%d",&a[i].yas);
         printf("Numara giriniz: ");
        scanf("%d",&a[i].okulNosu);
        printf("%s %s %s %d %d",a[i].adi,a[i].soyadi,a[i].memleketi,a[i].yas,a[i].okulNosu);
        
    }
    
    kordinat a;
    int karetoplam;
    scanf("%d %d",&a.x1,&a.y1);
    scanf("%d %d",&a.x2,&a.y2);
    
    karetoplam=(a.x1-a.x2)*(a.x1-a.x2)+(a.y1-a.y2)*(a.y1-a.y2);
    printf("%f",sqrt(karetoplam));*/
    
    
getche();
return 0;
}

void faktoriyel_for(int number){
    int temp =1;
    int index =1;
    
    printf("faktoriyel_for \n");
    
    for (index = 1; index <= number; index++){
        temp = temp * index;
    }
    
    printf("girilen sayinin fakto. %d", temp);
}

int faktoriyel_rec(int number){
    
    if (number < 1)
        return 1;
    return number * faktoriyel_rec(number - 1);
}

/*123 --> 321*/
// iterative
    
    
int reverse_number(int number){
    
    int temp = 0;
    int request;
    int bool = 1;
    int count_loop = 0;  
    
    while(number > 0){
      
        request = number % 10; // 3
        
        number  = number /10; //  12
        
        temp = (temp * 10) + request;
        
        count_loop++;
        printf("count_loop %d  request %d\n", count_loop, request);
    }
    
    printf("sayinin tersi %d", temp);
    
    return temp;
}

int palindrom(int number, int temp){
    
    printf("sayi %d", temp);
    if (number  == temp){
        printf("sayi palindrom \n");
        return 1;
    }
    
    else {
        printf("sayi palindrom degil \n");
        return 0;
    }
}

void state_do(int tree_legh, int rm){
    
    int yil = 1;
    int gercek_uzunluk = tree_legh;
    int index;
    for(index = 1; index <= yil * 12; index++){
        gercek_uzunluk = gercek_uzunluk + rm;
    }
    printf("agac uzunluk: %d", gercek_uzunluk);
}

void uc_basamakli(void){
    int birler;
    int onlar;
    int yuzler;
    
    int index = 100;
    int end = 999;
    int a,b,c;
    
    for(index; index <= end; index++){
        
        a = index/100;
        b = (index/10)%10;
        c = index %10;
        
        if(a != b && b != c && a!= c){
            printf("sayilar %d \n", index);
        }
    }
}

