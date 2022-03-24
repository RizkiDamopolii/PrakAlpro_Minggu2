#include <iostream>
using namespace std;

int main() {
  int Pe, Px, TL, TH, a;
  string Nama;
  Pe = 7000;
  Px = 9000;
  cout<<" SPBU "<<endl;
  cout<<" Masukkan Nama Pembeli : ";
  getline(cin, Nama);
  cout<<" Pilih Jenis Bensin "<<endl;
  cout<<" 1. Pertalite."<<endl;
  cout<<" 2. Pertamax."<<endl;
  cout<<" Masukkan Pilihan : ";cin>>a;
  cout<<"Berapa liter yang ingin anda beli? : ";cin>>TL;
  if (a == 1) {
    TH = Pe * TL;
  }
  else if (a == 2) {
    TH = Px * TL; 
  }
  cout<<"=============================="<<endl;
  cout<<"----------Struk SPBU----------"<<endl;
  cout<<"=============================="<<endl;
  cout<<" Nama Pembeli  : "<<Nama<<endl;
  cout<<" Total Liter   : "<<TL<<" Liter"<<endl;
  cout<<" Jenis Bensin  : ";
  if (a == 1){
    cout<<"Pertalite"<<endl;
  }
  else if (a == 2){
    cout<<"Pertamax"<<endl;
  }
  cout<<"------------------------------"<<endl;
  cout<<" Total Harga   : Rp. "<<TH<<endl;
  cout<<"------------------------------"<<endl;
}