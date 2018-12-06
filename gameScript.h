#ifndef GAMESCRIPT_H_INCLUDED
#define GAMESCRIPT_H_INCLUDED
#define NUMOFLETTERS 25

int numGuesses = 5;
int playerGuess = 1;
char setPlayer[NUMOFLETTERS];
char crash[NUMOFLETTERS];
int gameLose(void);
int correctGuess(void);
int gameEnd(void);
void answer(void);
void hint(void);
void getCrash(void);





int correctGuess()
{

    int b = 1;
    int a;
    for ( a = 0; a < NUMOFLETTERS; a++ )
    {
        if( setPlayer[a] != crash[a] )
            return 0;
    }
    return b;

}


int gameLose()
{
    if (correctGuess() == 1 || playerGuess > numGuesses)
        return 1;
    else
        return 0;
}

int gameEnd()
{
    if (gameEnd() == 1 && correctGuess() == 1)
        return 1;
    else
        return 0;
}

    void hint()
    {

        FILE *pFile;
        char h[255];
        pFile = fopen("hintforsecretword.txt", "r");
        printf("\n---->");
        while (fgets(h,255,pFile) != NULL)
            printf("%s\n", h);
        fclose(pFile);


    }

    void getCrash()
    {
        FILE *pFile;
        pFile = fopen("Secretwordshhhh.txt", "r");
        fscanf (pFile, "%s", &crash);
        fclose(pFile);
    }




    void answer()
    {
        int a;
        printf("\n\n");
        for(a = 0; a < NUMOFLETTERS; a++)
            if( crash[a] == setPlayer[a] )
            printf("%c", setPlayer[a]);
        else
            printf("[]");

        playerGuess++;
    }







#endif // GAMESCRIPT_H_INCLUDED
