#include<iostream>
using namespace std;
int main() {
  int remainders, fact, sum = 0, i, num, copynum;
  cout << "enter the number:";
  cin >> num;
  copynum = num;
  while (num != 0) 
  {
    remainders = num % 10;
    fact = 1;
    for (i = 1; i <= remainders; i++)
    {
      fact = fact * i;
    }
    sum = sum + fact;
    num = num / 10;
  }
  if (sum == copynum) {
    cout << copynum << " is strong numbers";
  } else {
    cout << copynum << " is not strong numbers";
  }
  return 0;
}
