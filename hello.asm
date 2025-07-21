; Hello World Program in NASM for 32-bit Linux
;
; This program prints "Hello, World!" to the console and then exits.

section .data
    ; In the .data section, we store initialized data (constants).
    msg db 0x1b, '[31m', 'H'  ; Red H
        db 0x1b, '[32m', 'e'  ; Green e
        db 0x1b, '[33m', 'l'  ; Yellow l
        db 0x1b, '[34m', 'l'  ; Blue l
        db 0x1b, '[35m', 'o'  ; Magenta o
        db 0x1b, '[37m', ','  ; White ,
        db 0x1b, '[32m', ' '  ; Green space
        db 0x1b, '[36m', 'W'  ; Cyan W
        db 0x1b, '[31m', 'o'  ; Red o
        db 0x1b, '[32m', 'r'  ; Green r
        db 0x1b, '[33m', 'l'  ; Yellow l
        db 0x1b, '[34m', 'd'  ; Blue d
        db 0x1b, '[35m', '!'  ; Magenta !
        db 0x1b, '[0m', 0xa   ; Reset color to default and print newline
    len equ $ - msg             ; The length of the message. '$' represents the current address,
                                ; so '$ - msg' calculates the length of the string.

section .text
    ; The .text section contains the actual code to be executed.
    global _start               ; '_start' is the default entry point for the linker (ld).
                                ; 'global' makes it visible to the linker.

_start:
    ; The program begins execution here.

    ; --- The 'write' system call ---
    ; To print text to the screen, we use the 'sys_write' system call.
    ; The kernel expects arguments to be in specific registers.
    ; syscall number: eax
    ; arg1 (file descriptor): ebx
    ; arg2 (pointer to message): ecx
    ; arg3 (message length): edx

    mov eax, 4                  ; Move the system call number for 'sys_write' (4) into the EAX register.
    mov ebx, 1                  ; Move the file descriptor for stdout (1) into the EBX register.
    mov ecx, msg                ; Move the memory address of our message into the ECX register.
    mov edx, len                ; Move the length of our message into the EDX register.
    int 0x80                    ; Call the kernel to perform the system call. 'int 0x80' is a software interrupt.

    ; --- The 'exit' system call ---
    ; After printing the message, we need to exit the program gracefully.
    ; We use the 'sys_exit' system call for this.
    ; syscall number: eax
    ; arg1 (exit code): ebx

    mov eax, 1                  ; Move the system call number for 'sys_exit' (1) into the EAX register.
    mov ebx, 0                  ; Move the exit code 0 (which means success) into the EBX register.
    int 0x80                    ; Call the kernel to exit the program.
