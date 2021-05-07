#ifndef BOARD_HPP
#define BOARD_HPP
class Board {
  private:
    char grid[9][9];
  public:
    void generate_puzzle();
};
#endif