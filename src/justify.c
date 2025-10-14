#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main()
{
    char word[MAX_WORD_LEN + 2];
    int wordLen;

    clearLine();

    for (;;)
    {
        readWord(word, MAX_WORD_LEN + 1);
        wordLen = strlen(word);

        if (wordLen == 0)
        {
            flushLine();
            return 0;
        }

        if (wordLen < MAX_WORD_LEN)
        {
            word[MAX_WORD_LEN] = '*';
        }

        if (wordLen + 1 > spaceRemaining())
        {
            writeLine();
            clearLine();
        }

        addWord(word);
    }
}