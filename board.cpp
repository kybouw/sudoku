// #include <set>
#include <iostream>
#include <random>
#include "board.hpp"

void Board::generate_puzzle() {
  // create set of possible ints
  // std::set<int>* ints = new std::set<int>();
  // for(int i = 0; i < 9; ++i) ints->insert(i + 1);

  std::default_random_engine generator;
  std::uniform_int_distribution<int> distribution(1,9);

  for(int row = 0; row < 9; ++row) {
    // each row
    for(int col = 0; col < 9; ++col) {
      // each cell
      bool valid = false;
      while(!valid) {
        // choose a number
        int x = distribution(generator);
        std::cout << x;
        // check if it is valid
        valid = true;
      }
    }
    std::cout << std::endl;
  }
}// end generate puzzle