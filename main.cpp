#include<iostream>

using namespace std;

int main(){
  for( int i = 1; i < 100; ++i ){
    i % 15 ? i % 3 ? i % 5 ? cout << i : cout << "buzz" : cout << "fizz" : cout << "fizzbuzz";
    cout << endl;
  }
  return 0;
}
