#include "object.h"
#include <stdio.h>

OBJECT objs[] = {
    {"an open field", "field", NULL},
    {"a little cave", "cave", NULL},
    {"a silver coin", "silver", field},
    {"a gold coin", "gold", cave},
    {"a burly guard", "guard", field},
    {"yourself", "yourself", field},
    {"a cave entrance", "entrance", field, cave},
    {"an exit", "exit", cave, field},
};
