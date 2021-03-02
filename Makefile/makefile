all:all.out

all.out:test.o mystring.o myutils.o bitmask.o stdarg.o
	gcc test.o mystring.o myutils.o bitmask.o stdarg.o -o all.out
test.o:test.c mystring.h myutils.h bitmask.h stdarg.h
	gcc test.c -c
mystring.o:mystring.c mystring.h
	gcc mystring.c -c
myutils.o:myutils.c myutils.h
	gcc myutils.c -c
bitmask.o:bitmask.c bitmask.h
	gcc bitmask.c -c
stdarg.o:stdarg.c stdarg.h
	gcc stdarg.c -c
clean:
	rm -rf *.o all.out

