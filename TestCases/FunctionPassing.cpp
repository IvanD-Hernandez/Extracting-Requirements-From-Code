#include <iostream>
using namespace std;

int Equation1(int num1, int num2, int num3);
int Equation2(int num1, int num2, int num3);
int Equation3(int num1, int num2, int num3);
int Sum(int num1, int num2);
int Difference(int num1, int num2);
int Multiply(int num1, int num2);
int Divide(int num1, int num2);
void PrintNum(int num,int Equation);

int main()
{
    int a,b,c,d,e;

    cout << "Enter first number: "; // Comment One.
    cin >> a;

    cout << "Enter second number: "; // Comment two.
    cin >> b;

    cout << "Enter third number: "; // Comment three.
    cin >> c;

    cout << "Enter fourth number: "; // Comment four.
    cin >> d;

    cout << "Enter fifth number: "; // Comment five.
    cin >> e;


    Equation1(a,b,c);
    Equation2(e,d,c);
    Equation3(a,c,e);

    return 0;
}

int Equation1(int num1, int num2, int num3){
  int Answer = 0;
  Answer = Sum(num1,num2);
  Answer = Difference(Answer,num3);
  PrintNum(Answer,1);
}
int Equation2(int num1, int num2, int num3){
  int Answer = 0;
  Answer = Difference(num1,num2);
  Answer = Difference(Answer,num3);
  PrintNum(Answer,2);

}
int Equation3(int num1, int num2, int num3){
  int Answer = 0;
  Answer = Sum(num1,num2);
  Answer = Sum(Answer,num3);
  PrintNum(Answer,3);
}

int Sum(int num1, int num2){
  int Answer = num1 + num2;
  return Answer;
}
int Difference(int num1, int num2){
  int Answer = num1 - num2;
  return Answer;
}
int Multiply(int num1, int num2){
  int Answer = num1 * num2;
  return Answer;
}
int Divide(int num1, int num2){
  int Answer = num1 / num2;
  return Answer;
}
void PrintNum(int num,int Equation){
  cout << "Answer of Equation" << Equation << ": " << num << endl;
}
