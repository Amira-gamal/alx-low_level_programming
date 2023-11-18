section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    mov rdi, hello ; First argument: format string
    call printf    ; Call printf
    mov rax, 0     ; Return 0 from main
    ret

