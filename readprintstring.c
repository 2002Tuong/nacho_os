#include "syscall.h"
int main() {
    char* buffer;
    ReadString(buffer,255);
    PrintString(buffer);

    Halt();
}