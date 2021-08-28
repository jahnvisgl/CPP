#include <iostream>

int main() {
  std::cout << "Interesting Alphabets\n";

  int num ;
  std::cin >> num ;

  char alpha=0;
  char k =0 ;

  for(int row=0 ; row<num ; row++){
    alpha = 65+num-row ;
    for(int col=0 ; col<=row ; col++){
      k = alpha+col-1;
      std::cout << k ;
    }
    std::cout << std::endl ;
    // aplha--;
  }
}
