#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
	int			data;
	struct stack	*next;
}				stack_node;

#include "get_ints.h"
#include "error_exit.h"
#include "utils.h"
#include "struct.h"

#endif
