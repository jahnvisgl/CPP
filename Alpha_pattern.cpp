#include <iostream>

int main() {
  std::cout << "Alpha pattern\n";
  int num ;
  std::cin >> num ;

  char alpha=65 ;

  for(int row=0 ; row<num ; row++){
    for(int col=0 ; col<=row ; col++){
      std::cout << alpha ;
    }
    std::cout << std::endl ;
    alpha++ ;
  }
}
