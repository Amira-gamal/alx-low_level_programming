section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    mov rdi, hello
    call printf
    mov rax, 0
    ret

    mov eax, 0
    ret

