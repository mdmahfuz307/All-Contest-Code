#include <iostream>

using namespace std;
int main()
{
   int n, temp = 0, last, rem, sum = 0;
   cout << "";
   cin >> n;
   while (n != 0)
   {
      if (temp == 0)
      {
         last = n % 10;
         temp++;
      }
      rem = n % 10;
      n = n / 10;
   }
   sum = rem + last;
   cout << sum;
   cout << endl;
   return 0;
}