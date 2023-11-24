#include <iostream>
#include <string>
#include <vector>

using namespace std;

int sum(int a, int b, int c, int d, int e){
int result = a + b + c + d + e;
return result;
};
int main(){
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;
  int e = 5;

  cout << "Addition of 5 numbers: " << sum(a, b, c, d, e) << endl;
   
 return 0;
}
