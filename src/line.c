#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN + 1];
int lineLen = 0;
int numWords = 0;

void clearLine(void)
{
    line[0] = '\0';
    lineLen = 0;
    numWords = 0;
}

void addWord(const char *word)
{
    if (numWords > 0)
    {
        line[lineLen] = ' ';
        line[lineLen + 1] = '\0';
        lineLen++;
    }

    strcat(line, word);
    lineLen += strlen(word);
    numWords++;
}

int spaceRemaining()
{
    return MAX_LINE_LEN - lineLen;
}

void writeLine()
{
    int extraSpaces, spacesToInsert, i, j;

    extraSpaces = MAX_LINE_LEN - lineLen;

    for (i = 0; i < lineLen; i++)
    {
        if (line[i] != ' ')
        {
            putchar(line[i]);
        }
        else
        {
            spacesToInsert = extraSpaces / (numWords - 1);

            for (j = 1; j <= spacesToInsert + 1; j++)
            {
                putchar(' ');
            }

            extraSpaces -= spacesToInsert;
            numWords--;
        }
    }

    putchar('\n');
}

void flushLine()
{
    if (lineLen > 0)
    {
        puts(line);
    }
}