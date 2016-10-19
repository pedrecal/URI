#include <iostream>

using namespace std;

int mdc(int f1, int f2)
{
  int resto;

  resto = f1%f2;
  while(resto != 0)
  {
    f1 = f2;
    f2 = resto;
    resto = f1%f2;
  }
  return f2;
}

int main()
{

    int casos, f1, f2, mdcresult;

    while(cin >> casos)
    {
      for (int i = 0; i < casos; i++)
      {
        cin >> f1 >> f2;
        mdcresult = mdc(f1,f2);
        cout << mdcresult << endl;
      }
    }

    return 0;
}
