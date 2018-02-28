#include <iostream>
using namespace std;

int main() {
  for(int i= 0; i <= 7; i++){
          
    for(int j = i; j <= i + 32; j = j+8){
      cout << j << " ";
    }
      cout << endl;
  }
  

  
}
