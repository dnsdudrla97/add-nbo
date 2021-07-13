#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>
#include "add_nbo.h"

void raed_byte_from_hex(u_int8_t *bin_name, u_int8_t *bin_name1, BinaryData *bd)
{
    FILE *fp = NULL;
    FILE *fp1 = NULL;   

    u_int8_t *file_name = bin_name;
    u_int8_t *file_name1 = bin_name1;

    u_int32_t bin_1 = 0;
    u_int32_t bin_2 = 0;

    fp = fopen(file_name, "rb");
    if (fp == NULL)
    {
        perror("fopen error\n");
        exit(EXIT_FAILURE);
    }
    fp1 = fopen(file_name1, "rb");
    if (fp == NULL)
    {
        perror("fopen error\n");
        exit(EXIT_FAILURE);
    }

    fseek(fp, 0, SEEK_SET);
    fseek(fp1, 0, SEEK_SET);

    fread(&bin_1, sizeof(u_int32_t), 4, fp);
    fread(&bin_2, sizeof(u_int32_t), 4, fp1);

    bd->bin_data = ntohl(bin_1);
    bd->bin_data1 = ntohl(bin_2);
    
}

void sum_byte_from_hex(BinaryData *bd)
{
    u_int32_t x = bd->bin_data;
    u_int32_t y = bd->bin_data1;

    bd->bin_sum = x + y;
}

void write_byte_from_hex(BinaryData *bd)
{
    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", bd->bin_data, bd->bin_data, bd->bin_data1,bd->bin_data1, bd->bin_sum,bd->bin_sum);
    exit(EXIT_SUCCESS);
}

void gen_assignment() {
    char track[] = "취약점";
    char name[] = "김영운";
    printf("[bob10][%s]add-nbo[%s]\n", track, name);
}

