;ghhjgjgggjhhgjhghgh
section .data
    ;yutyuttytyutututtutu
    msg db 0x1b, '[31m', 'H'
        db 0x1b, '[32m', 'a'
        db 0x1b, '[33m', 'p'
        db 0x1b, '[34m', 'p'
        db 0x1b, '[35m', 'y'
        db 0x1b, '[31m', ' '
        db 0x1b, '[32m', 'S'
        db 0x1b, '[32m', 'h' 
        db 0x1b, '[32m', 'a'
        db 0x1b, '[32m', 'd'
        db 0x1b, '[32m', 'i'
        db 0x1b, '[32m', ' '
        db 0x1b, '[35m', 'L'
        db 0x1b, '[35m', 'a'
        db 0x1b, '[35m', 'l'
        db 0x1b, '[35m', 'a'
        db 0x1b, '[35m', ' '
        db 0x1b, '[33m', '&'
        db 0x1b, '[33m', ' '
        db 0x1b, '[34m', 'Q'
        db 0x1b, '[34m', 'a'
        db 0x1b, '[34m', 's'
        db 0x1b, '[34m', 'i'
        db 0x1b, '[34m', 'd'
        db 0x1b, '[35m', '!'
        db 0x1b, '[0m', 0xa
    len equ $ - msg


section .text

    gloabal _start


_start:






    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80


    mov eax, 1
    mov ebx, 0
    int 0x80
    