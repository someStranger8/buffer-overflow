# buffer-overflow

buffer overflow example:
```
gcc -o main.o main.c
./main.o < <(python -c "print('AAAAAAAAAAA'+'/x00'+'AAAAAAAAAAA'+'/x00')")
```
