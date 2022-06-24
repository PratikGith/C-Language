#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    char* buffer;
    char* new_buffer;

    buffer = (char* )malloc( 80 );
    if ( buffer == NULL ) {
        return EXIT_FAILURE;
    }

    new_buffer = (char* )realloc( buffer, 100 );
    if( new_buffer == NULL ) {

        /* Couldn't allocate a larger buffer.
           Remember that buffer stills point to
           allocated memory -- don't leak it! */

        free (buffer);
        return EXIT_FAILURE;
    } else {
      buffer = new_buffer;
    }

    return EXIT_SUCCESS;
}
