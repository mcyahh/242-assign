#ifndef FLEXARRAY_H_
#define FLEXARRAY_H_

/**
 * flexarray.c
 *
 * Group 28
 * @author Nick Greene
 * @author Connor McIntyre
 * @author Connor Duncan
 *
 * Defines the structure and methods that are used with the flexarray.
 */

/**
 * The flexarray structure.
 */
typedef struct flexarrayrec *flexarray;

/**
 * Adds a char array onto the end of a given flexarray.
 *
 * @param f is the flexarray that the char array will be added to.
 * @param item in the char array that you wish to add.
 */
extern void      flexarray_append(flexarray f, char *item);

/**
 * Unallocates the memory that a flexarray was using.
 * Deletes the flexarray.
 *
 * @param f is the flexarray that will be deleted and have its memory freed.
 */
extern void      flexarray_free(flexarray f);

/**
 * Creates a new flexarray.
 *
 * @return a new empty flexarray.
 */
extern flexarray flexarray_new();

/**
 * Prints all the items in a given flexarray in the order they are in the array.
 *
 * @param f is the flexarray that is to be printed.
 */
extern void      flexarray_print(flexarray f);

/**
 * Calls a sorting function on a given flexarray.
 * The flexarray will be sorted.
 *
 * @param f is the flexarray that will be sorted.
 */
extern void      flexarray_sort(flexarray f);

/**
 * Checks if a given item is in a given flexarray.
 *
 * @param f is the flexarray to be searched.
 * @param item is a char array that is being searche for.
 * @return 1 if the item is found, 0 otherwise.
 */
extern int       is_present(flexarray f, char *item);

/**
 * Goes over each item in a flexarray and carries out a given function on the
 * item.
 *
 * @param f is the flexarray to be iterated over.
 * @param item is the name of the function that will be called.
 */
extern void      visit(flexarray f, void func(char *item));

#endif
