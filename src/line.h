#ifndef LINE_H
#define LINE_H

/**
 * Clears the current line.
 */
void clearLine();

/**
 * Adds word to the end of the curent line. If this is not the first word on the line, puts one space before.
 */
void addWord(const char *word);

/**
 * Returns the number of characters left in the current line.
 */
int spaceRemaining();

/**
 * Writes the current line with justification.
 */
void writeLine();

/**
 * Writes the current line without justification. If the line is empty, does nothing.
 */
void flushLine();

#endif