#include <iostream>

using namespace std;

int mdc(int a, int b){
  if(b == 0){
    return a;
  }
  return mdc(b, a%b);
}


int main(){
    cout << mdc(144,92);
}