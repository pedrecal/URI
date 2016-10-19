/*
Fazer dec_to_bin
Achar uma forma de tratar a entrada de hex.
Talvez tratar todas as entradas como str
*/
#include <iostream>
#include <cmath>

using namespace std;

int bin_to_dec(int n)
{
  int decimal=0, i=0, rem;
  while (n!=0)
  {
    rem = n%10;
    n/=10;
    decimal += rem*pow(2,i);
    ++i;
  }
    return decimal;
}

int dec_to_bin(int n)
{

}


int main()
{

  int casos, num;
  string str;

  while (cin >> casos)
  {
    for (int i = 0; i < casos; i++)
    {
      cin >> num >> str;
      if(str == "bin")
      {
        cout << "Case " << i+1 << ":" << endl;
        cout << bin_to_dec(num) << " dec" << endl;
        cout << hex << bin_to_dec(num) << " hex\n" << endl;
      }
      if(str == "dec")
      {
        cout << "Case " << i+1 << ":" << endl;
        cout << hex << num << " hex" << endl;
        cout << dec_to_bin(num) << " bin\n" << endl;
      }
      if(str == "hex")
      {
        cout << "Case " << i+1 << ":" << endl;
        cout <<
      }
    }
  }

    return 0;
}
