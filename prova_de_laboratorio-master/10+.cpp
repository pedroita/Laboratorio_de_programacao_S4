#include <stdio.h>
#include <stdlib.h>

/* replace every occurance of string x with string y */
char *zstring_replace_str(char *str, const char *x, const char *y){
    char *tmp_str = str, *tmp_x = x, *dummy_ptr = tmp_x, *tmp_y = y;
    int len_str=0, len_y=0, len_x=0;

    /* string length */
    for(; *tmp_y; ++len_y, ++tmp_y)
        ;

    for(; *tmp_str; ++len_str, ++tmp_str)
        ;

    for(; *tmp_x; ++len_x, ++tmp_x)
        ;

    /* Bounds check */
    if (len_y >= len_str)
        return str;

    /* reset tmp pointers */
    tmp_y = y;
    tmp_x = x;

    for (tmp_str = str ; *tmp_str; ++tmp_str)
        if(*tmp_str == *tmp_x) {
            /* save tmp_str */
            for (dummy_ptr=tmp_str; *dummy_ptr == *tmp_x; ++tmp_x, ++dummy_ptr)
                if (*(tmp_x+1) == '\0' && ((dummy_ptr-str+len_y) < len_str)){
                /* Reached end of x, we got something to replace then!
                * Copy y only if there is enough room for it
                */
                    for(tmp_y=y; *tmp_y; ++tmp_y, ++tmp_str)
                        *tmp_str = *tmp_y;
            }
        /* reset tmp_x */
        tmp_x = x;
        }

    return str;
}

int main()
{
    char s[]="Free software is a matter of liberty, not price.\n"
             "To understand the concept, you should think of 'free' \n"
             "as in 'free speech', not as in 'free beer'";

    printf("%s\n\n",s);
    printf("%s\n",zstring_replace_str(s,"ree","XYZ"));
    return 0;
}
