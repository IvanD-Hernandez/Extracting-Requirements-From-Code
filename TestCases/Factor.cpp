#include <iostream>

void Factor(int num);
void Prime(int num);
using namespace std;
int main(void){

  int a,b,c;

  cout <<" Input the first digit to find the prime factors of: ";
  cin >> a;
  Factor(a);
  cout <<"\nInput the second digit to find the prime factors of: ";
  cin >> b;
  Factor(b);
  cout <<"\nInput the third digit to find the prime factors of: ";
  cin >> c;
  Factor(c);
  return 0;
}

void Factor(int num){
  int r;

  for ( r = 1; r<=num;r++)
  {
    if (num % r== 0)
    {
      Prime(r);
    }
  }
}

void Prime(int num){
  int x,y;
  if ((num%2!=0) && (num!=1) && (num!=2) && (num!=3))
  {
    for(x=3;x<num;x=x+2)
    {
      if(num%x==0)
      {
        y=num;
        break;
      }
    }
    if(y!=num)
    {
      cout << num << " ";
    }
  }
  else if ((num == 2) || (num == 3))
  {
    cout << num << " ";
  }
}
