#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

#define PRINT_FILE_NAME(filename) write(1, filename, sizeof(filename) - 1)
#define PRINT_NEW_LINE write(1, "\n", 2)

#endif /* MAIN_H */
