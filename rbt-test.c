#include <stdio.h>
#include <stdlib.h>
#include "rbt.h"

void print(char *str) {
    printf("%s\n", str);
}

int main(void) {
    char *word[255];
    char i;
    rbt r = rbt_new();
    
    while (2 == scanf(" %c %s", &i, &word)) {
        if (i == 'i') {            
            r = rbt_insert(r, word);
        }

        if (i == 'd') {
            r = rbt_delete(r, &word);
        }

        if (i == 's') {
            if (rbt_search(r, word)) {
                fprintf(stderr, "%s found\n", word);
            } else {
                fprintf(stderr, "%s not found\n", word);
            }
        }

        if (i == '1') {
            fprintf(stderr, "inorder print\n");
            rbt_inorder(r, print);            
        }

        if (i == '2') {
            fprintf(stderr, "preorder print\n");
            rbt_preorder(r, print);
        }

        /* if (i == 'l') { */
        /*     r = left_rotate(r); */
        /* } */

        /* if (i == 'r') { */
        /*     r = right_rotate(r); */
        /* } */
    }

    rbt_free(r);

    return EXIT_SUCCESS;
}
