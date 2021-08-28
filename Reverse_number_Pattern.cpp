#include <iostream>

int main() {
  std::cout << "Reverse number Pattern\n";

  int num ;
  std::cin >> num ;

  for(int row=0 ; row<num ; row++){
    for(int col =0 ; col<=row ; col++){
      std::cout << row-col+1 ;
    }
    std::cout << std::endl ;
  }
}
