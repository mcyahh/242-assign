#ifndef MYLIB_H_
#define MYLIB_H_

/**
 * mylib.h
 *
 * Group 28
 * @author Nick Greene
 * @author Connor McIntyre
 * @author Connor Duncan
 *
 * Defines a few methods that are mostly for conveience.
 */

#include <stddef.h>

/**
 * Allocates the requested memory and returns a pointer to it.
 *
 * @param s is the size of the memory block, in bytes.
 * @return a pointer to the allocated memory.
 */
extern void *emalloc(size_t);

/**
 * Attempts to resize the memory block pointed to by p that was previously
 * allocated.
 *
 * @param p This is the pointer to a memory block previously allocated
 * to be reallocated.
 * @param s This is the new size for the memory block, in bytes.
 * @return This function returns a pointer to the newly allocated memory, 
 *         or NULL if the request fails.
 */
extern void *erealloc(void *, size_t);

/**
 * Reads a word from an InputStream and returns it as a char array.
 *
 * @param s a char array that the word will be read into.
 * @param limit the maximum size of s.
 * @param stream the InputStream that is being read.
 * @return a char array of the word that was read in all lowercase.
 */
extern int getword(char*, int, FILE *);

#endif
