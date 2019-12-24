#include <iostream>

using namespace std;

int main()
{
  float a,b,hasil;
  char aritmatika;
  
  cout << "Kalkulator By Syauqon \n";
  
  cout << "Masukan Nilai Pertama: ";
  cin >> a;
  cout << "Pilih Operator +,-,/,*: ";
  cin >> aritmatika;
  cout << "Masukan Nilai Kedua: ";
  cin >> b;
  
  cout << "\n Hasil Perhitungan: ";
  cout << a << aritmatika << b << endl;
  
  if (aritmatika == '+'){
    hasil == a + b;
  } else if (aritmatika == '-'){
    hasil == a - b;
  } else if (aritmatika == '/'){
    hasil == a / b;
  } else if (aritmatika == '*'){
    hasil == a * b;
  } else {
    cout << " Operator Anda Salah" << endl;
  }
  
  cout << " = " << hasil << endl;
  
  cin.get();
  return 0;
}
