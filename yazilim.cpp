#include "yazilim.h"

#include <iostream>

using namespace std;

Yazilim::Yazilim()
{

}

void Yazilim::baslat()
{
  while (true) {
      islemListesi();
      switch (islemSec()) {
        case UrunEkle:
          break;
        case UrunAramaAd:
          break;
        case UrunAramaKod:
          break;
        case UrunSilme:
          break;
        case UrunListele:
          break;
        case AlisEkle:
          break;
        case AlisArama:
          break;
        case AlisSilme:
          break;
        case AlisListele:
          break;
        case SatisEkle:
          break;
        case SatisArama:
          break;
        case SatisSilme:
          break;
        case SatisListele:
          break;
        case AlisSatisListele:
          break;
        case Exit:
          cout << "cikiliyor.." << endl;
          return;
          break;
        default:
          break;
        }
    }
}

void Yazilim::islemListesi()
{
  cout<<"–––––––––––––––––––––––––––––––––"<<endl;
  cout<<"|github.com/ergenekonyigit/okabe|"<<endl;
  cout<<"–––––––––––––––––––––––––––––––––"<<endl;
  cout<<"           ISLEM SECIMI          "<<endl;
  cout<<"≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠"<<endl;
  cout<<" ( 1 )  Urun Ekle                "<<endl;
  cout<<" ( 2 )  Urun Arama ( Ada Gore  ) "<<endl;
  cout<<" ( 3 )  Urun Arama ( Koda Gore ) "<<endl;
  cout<<" ( 4 )  Urun Silme               "<<endl;
  cout<<" ( 5 )  Urun Listele             "<<endl;
  cout<<"–––––––––––––––––––––––––––––––––"<<endl;
  cout<<" ( 6 )  Alis Ekle                "<<endl;
  cout<<" ( 7 )  Alis Arama  ( Koda Gore )"<<endl;
  cout<<" ( 8 )  Alis Silme               "<<endl;
  cout<<" ( 9 )  Alis Listele             "<<endl;
  cout<<"–––––––––––––––––––––––––––––––––"<<endl;
  cout<<" ( 10 ) Satis Ekle               "<<endl;
  cout<<" ( 11 ) Satis Arama ( Koda Gore )"<<endl;
  cout<<" ( 12 ) Satis Silme              "<<endl;
  cout<<" ( 13 ) Satis Listele            "<<endl;
  cout<<"–––––––––––––––––––––––––––––––––"<<endl;
  cout<<" ( 14 ) Toplam Alis-Satis Listele"<<endl;
  cout<<"–––––––––––––––––––––––––––––––––"<<endl;
  cout<<" ( 0 )  Exit                     "<<endl;
  cout<<"≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠"<<endl;
}

Yazilim::islemTipi Yazilim::islemSec()
{
  int secim;
  do {
      cout << "Islem Seciniz: ";
      cin >> secim;
    } while (secim < 0 || secim > 15);
  return static_cast<islemTipi>(secim);
}

/* ==Bilinen Eksikler==
 * haftalik-aylik alis ve satislarin listelenmesi
 */