#ifndef HTABLE_H_
#define HTABLE_H_

/**
 * htable.h
 *
 * Group 28
 * @author Nick Greene
 * @author Connor McIntyre
 *
 * Defines all the callable methods for use with the hash table.
 */

/**
 * Defines the hash table.
 */
typedef struct htablerec *htable;

/**
 * Frees all the memory that was being used by a given hash table.
 *
 * @param h is the hash table being unallocated.
 */
extern void   htable_free(htable h);

/**
 * Adds a string to the given hash table.
 *
 * @param h is the hash table that will be added to.
 * @param str is the string that will be added to the hash table.
 */
extern void   htable_insert(htable h, char *str);

/**
 * Creates a new hash table.
 *
 * @param capacity is the size of the hash table.
 * @param type is the type of container that will be used for each cell
 *        in the hash table.
 * @return a new empty hash table.
 */
extern htable htable_new(int capacity, char type);

/**
 * Calls a given function on everything stored in the hash table.
 *
 * @param h the hash table being operated on.
 * @param str the fuction to call on.
 */
extern void   htable_print(htable h, void f(char *str));

/**
 * Searches a hash table for a string.
 * Asks the container at the hash value if it contains the string.
 *
 * @param h is the hash table being searched.
 * @param str in the string being searched for.
 * @return 1 if the string is found, otherwise 0.
 */
extern int    htable_search(htable h, char *str);

#endif
