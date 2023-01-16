#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//pragma pack(push, n) -> n byte크기로 정렬, 메모리 효율 bb

#pragma pack(push, 1)   // => 1 byte 로 정렬되어서 자료형 크기 그대로 맞춰져 있음.
struct PacketHeader {
    char flags;
    int seq;
};
#pragma pack(pop)

int main()
{
    struct PacketHeader header;
    
    return 0;
}