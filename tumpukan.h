#include <iostream>
#include <vector>
using namespace std;

#ifndef TUMPUKAN_H
#define TUMPUKAN_H

template <typename T>
class Tumpukan{
  private:
    vector<T> data;
    int atas=0;
    T teratas;
  public:
    int jumlah(){
      return atas;
    }
    void kosongkan(){
      atas = 0;
    }
    void tumpuk(T newdata){
      atas++;
      data.push_back(newdata);
      teratas = newdata;
    }
    T ambil(){
      if(atas == 0){
        cout << "Tumpukan sudah kosong, tidak dapat mengambil data.\n";
        exit(1);
      }else{
        T terambil = data[--atas];
        teratas = terambil;
        return terambil;
      }
    }
};

#endif
