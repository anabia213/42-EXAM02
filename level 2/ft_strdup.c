
#include <stdlib.h>

char *ft_strdup(char *src)
{
    if (!src)
        return NULL;

    char *dup = malloc((strlen(src) + 1) * sizeof(char));

    if (dup)
        for (size_t i = 0; (dup[i] = src[i]) != '\0'; i++);

    return dup;
}

