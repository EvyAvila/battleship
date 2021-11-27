#include "logic.h"
#include <cstdlib>
#include <iostream>

bool **create_board(const int height, const int width) {
  bool **board = (bool **)malloc(sizeof(bool *) * height);
  for (int i = 0; i < height; i++) {
    board[i] = (bool *)malloc(sizeof(bool) * width);
  }
  return board;
}

void destroy_board(bool **board, const int height) {
  for (int i = 0; i < height; ++i) {
    free(board[i]);
  }
  free(board);
}

void place_ships(bool **board, const int shipcount, const int width,
                 const int height) {
  // TODO implement this function
  
  int ships = 0;
  int placement = rand() % width + height;

  while(ships < shipcount)
  {
    for(int i = 0; i < shipcount; i++)
    {
      ships++;
      placement = i;
      bool *place = board[placement];
    }
    //bool *placing = board[placement];
  }
}

void find_ships(bool **board, const int width, const int height) {
  // TODO implement
  
  for(int i = 0; i < height; i++)
  {
    for(int j = 0; j < width; j++)
    {
      bool finding = board[i][j];
    }
  }
}

ResponseType guess(bool **board, const int x, const int y) {
  // TODO implement this
  
   const int HIT = 1;
  const int NEAR_MISS = 2;
  const int MISS = 3;

  for(int i = 0; i < x; i++)
  {
    for(int j = 0; j < y; j++)
    {
      int theXguess = i;
      int theYguess = j;
      board[theXguess][theYguess];

      if(theXguess == x && theYguess == y)
      {
        std::cout << HIT << std::endl;
      }
      else if (theXguess == x || theYguess == y)
      {
        std::cout << NEAR_MISS << std::endl;
      }
      else
      {
        std::cout << MISS << std::endl;
      }
    }
  }
  //return ResponseType::HIT;
}
