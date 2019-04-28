#include<conio.h>
#include <iostream>
using namespace std;


struct data{
char nim[11],nama[15],prodi[15];};
data batas[100];
int a,b,c,d;

void inputdata()
{  cout<<"Jumlah Data Yang Akan diinput : ";cin>>b;
   d=0;
   for(c=0;c<b;c++){
   d=d+1;
   cout<<"Data ke-"<<d<<endl;
   cout<<"NIM       : ";cin>>batas[a].nim;
   cout<<"Nama      : ";cin>>batas[a].nama;
   cout<<"Prodi     : ";cin>>batas[a].prodi;
   a++;}}



void lihatdata()
{int i,j;
 cout<<"Menampilkan DATA :"<<endl;

 j=0;
 for(i=0;i<a;i++)
 {j=j+1;

  cout<<j<<endl;
  cout<<"NIM   :"<<batas[i].nim<<endl;
  cout<<"NAMA  :"<<batas[i].nama<<endl;
  cout<<"Prodi :"<<batas[i].prodi<<endl;
  }
}

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}

 cout<<"Data ke-"<<x<<"Sudah Terhapus";

}

void editdata(){
int k,l;
cout<<"Data keberapa yang akan diedit? : ";cin>>k;
l=k-1;
cout<<"NIM      : ";cin>>batas[l].nim;
cout<<"Nama     : ";cin>>batas[l].nama;
cout<<"Prodi    : ";cin>>batas[l].prodi;
lihatdata();
}

int main()
{     int pilih;
 char keluar;
  awal:
  cout<<"1. Masukkan data"<<endl;
  cout<<"2. Hapus Data"<<endl;
  cout<<"3. Lihat Data"<<endl;
  cout<<"4. Edit Data"<<endl;
  cout<<"5. Keluar"<<endl;
  cout<<"Masukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();goto awal;}
  if(pilih==2)
   {hapusdata();goto awal;}
  if(pilih==3)
   {lihatdata();goto awal;}
  if(pilih==4)
   {editdata();goto awal;}
  if(pilih==5)
   {
    cout<<"Apakah anda ingin keluar dari program? :";
    cin>>keluar;
    if(keluar=='y'||keluar=='Y')
    {
     cout<<"Program SELESAI !!";}
    if(keluar=='n'||keluar=='N')
           {goto awal;}}
  else
   {cout<<"Silahkan Pilih :";getch();goto awal;}

}
