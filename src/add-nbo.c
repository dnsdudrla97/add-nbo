#include <stdio.h>
#include <stdlib.h>
#include "add_nbo.h"
int main(int argc, char *argv[])
{
    BinaryData bd = {0, 0, 0};

    if (argc != 3)
    {
        printf("Usage: ./add-nbo a.bin b.bin\n");
        exit(EXIT_FAILURE);
    }

    // gen_assignment();
    raed_byte_from_hex(argv[1], argv[2], &bd);
    sum_byte_from_hex(&bd);
    write_byte_from_hex(&bd);

    return 0;
}