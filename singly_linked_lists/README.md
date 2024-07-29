Singly_linked_lists:

Tasks:
0. Print list
1. List length
2. Add node
3. Add node at the end
4. Free list

Compilation:
All files must compiled on Ubuntu 20.04 LTS  using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89

Requirements:
. editors allowed: Vi, Vim, Emacs
. Betty style
. All files shoild end with a newline
. 5 Functions max per file
. malloc, free, exit and \_putchar allowed
. Global variables forbidden
. Header files should be include guarded

Data structure to use for this project:
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

Task 0:
Write a function that prints all elements of a list
-t list.

Compilation:
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a

Requirements:
. Prototype: size_t print_list(const list_t *h);
. Return: the number of nodes
. If str is NULL, print [0] (nil)
. You are allowed to use printf
