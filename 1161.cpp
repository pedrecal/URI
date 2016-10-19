#include <iostream>

using namespace std;
typedef unsigned long long int bigint;

bigint fatorial(bigint m)
{
  if((m == 1) || (m == 0))
    return 1;
  else
    return fatorial(m - 1)*m;
}

int main()
{
  bigint m, n, r;
  while(cin >> m >> n)
  {
    r = fatorial(m) + fatorial(n);
    cout << r << endl;
  }
}
