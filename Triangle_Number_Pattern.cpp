#include <iostream>

int main() {
  std::cout << "Triangle Number Pattern\n";

  int num ;
  std::cin >> num ;
  
  for(int row=0 ; row<num ; row++){
    for(int col=0 ; col<=row ; col++){
      std::cout << row+1 ;
    }
    std::cout << std::endl ;
  }
}
