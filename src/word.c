#include <stdio.h>
#include "word.h"

int readChar()
{
    int ch = getchar();

    if (ch == '\n' || ch == '\t')
    {
        return ' ';
    }

    return ch;
}

void readWord(char *word, int len)
{
    int ch, pos = 0;

    while ((ch = readChar()) == ' ')
        ;

    while (ch != ' ' && ch != EOF)
    {
        if (pos < len)
        {
            word[pos++] = ch;
        }
        ch = readChar();
    }
    word[pos] = '\0';
}