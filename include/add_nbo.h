#include <stdlib.h>
#ifndef ___ADDNBO
#define ___ADDNBO
// Binary Data Struct
typedef struct
{
    u_int32_t bin_data;
    u_int32_t bin_data1;
    u_int32_t bin_sum;
} BinaryData;

#define MAX_FILE_SIZE 4

// Reading and storing data in byte format from binary
void raed_byte_from_hex(u_int8_t *bin_name, u_int8_t *bin_name1, BinaryData *bd);

// Save the stored integer value after addition operation
void sum_byte_from_hex(BinaryData *bd);

// print all values
void write_byte_from_hex(BinaryData *bd);

// wow
void gen_assignment();

#endif