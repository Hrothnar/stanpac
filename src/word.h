#ifndef WORD_H
#define WORD_H

/**
 * Reads the next word from the input and stores in in word. Makes word empty if no word could be read because of end-of-file.
 * Truncates the word if its length exceeds len.
 */
void readWord(char *word, int len);

#endif