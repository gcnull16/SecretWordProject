#include <stdio.h>
#include <stdlib.h>
#include "gameScript.h"


int main()
{
  printf("Guess the secret word!");

  getCrash();
    hint();

  while (gameLose() != 1)
  {
      printf("\n\n%d out of %d lives", playerGuess, numGuesses);
      printf("\n\n");
      scanf("%s", &setPlayer);
      answer();
  }


   if (gameEnd() == 1)
    printf ("\n\nGAME OVER!");


    return 0;



}
