#include <iostream>
#include <bitset>
#include <string>

using namespace std;

unsigned int countBits(unsigned long long n){
  //your code here
  //convert to bits
  //counts number of ones
  string string_bit = bitset<64>(n).to_string();
  unsigned int res{0};
  for(char c : string_bit){
      if(c == '1'){
          res++;
      }
  }

  return res;
  }

int main(){
    unsigned long long n{};
    cin >> n;
  cout << countBits(n) << "\n";
  return 0;
}
