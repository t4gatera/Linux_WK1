section .data
 message db 'Hello Assembly!', 0xA ;The string to print with a newline
 len equ $ - message;

section .text
 global _start ;entry point of the program
 
_start:
 mov eax, 4 ;sys call number to write
 mov ebx, 1 ;file descriptor for stdout
 mov ecx, message ;point to the message
 mov edx, len ;length of the message
 int 0x80 ;call the kernel
 
 ;exit the system
 mov eax, 1 ;system call to exit
 xor ebx, ebx ;exit status 0
 int 0x80 ;call kernel
 
 ;assemble the code: nasm -f elf32 hello.asm -o hello.o
 ;link the object: ld -m elf_i386 hello.o -o hello
