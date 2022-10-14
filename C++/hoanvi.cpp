#include<conio.h>

#include<iostream>

using namespace std;

#define MAX  20

#define TRUE  1

#define FALSE 0

int X[MAX];

int n;//so phan tu cua mang

int countHV;//bi?n �?m s? ho�n v?.

int Stop;//bi?n d?ng t?m ki?m ho�n v? ti?p theo.

void Init(void){

 countHV = 0;

 cout<<"Nhap n=";

 cin>>n;

 //nh?p c�c ph?n t? c?a m?ng.

 for (int i = 1; i <= n; i++)

  X[i] = i;

}

void Result(void){

 countHV++;

 cout<<"Hoan vi "<<countHV<<": ";

 for (int i = 1; i <= n; i++)

  cout<<X[i];

 cout<<endl;

}

void Next_Permutaion(void){

 int j, k, r, s, temp;

 j = n - 1;

 while (j > 0 && X[j] > X[j + 1])//1. t?m t? tr�i qua ph?i ch? s? j th?a m?n aj< aj

  j--;

 if (j == 0)

  Stop = TRUE;

 else {

  k = n;

  while (X[j] > X[k]) k--;//2.T?m ak l� s? nh? nh?t c?n l?n h�n aj trong c�c s? ? b�n ph?i aj; 

  //3. �?i ch? aj v?i ak 

  temp = X[j]; 

  X[j] = X[k];

  X[k] = temp;

  r = j + 1; s = n;

  while (r < s){//4. L?t ng�?c �o?n t? aj+1 �?n an. 

   temp = X[r]; 

   X[r] = X[s];

   X[s] = temp;

   r++;

   s--;

  }

 }

}

void Permutation(void){

 Stop = FALSE;

 while (!Stop){

  Result();

  Next_Permutaion();

 }

}

int  main(void){

 Init();

 Permutation();

 getch();
 return 0;

}
