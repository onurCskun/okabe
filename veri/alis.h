#ifndef ALIS_H
#define ALIS_H

#include <string>

using namespace std;

class Alis
{
private:
  int urunKodu;
  string alisTarihi;
  float alisFiyati;
  int alisAdeti;
public:
  Alis();
  int getUrunKodu();
  void setUrunKodu(int value);
  string getAlisTarihi();
  void setAlisTarihi(string value);
  float getAlisFiyati();
  void setAlisFiyati(float value);
  int getAlisAdeti();
  void setAlisAdeti(int value);
};

#endif // ALIS_H
