CC = g++

CFLAGS = -Wshadow -Winit-self -Wredundant-decls -Wcast-align -Wundef -Wfloat-equal -Winline -Wunreachable-code -Wmissing-declarations \
	 -Wmissing-include-dirs -Wswitch-enum -Wswitch-default -Weffc++ -Wmain -Wextra -Wall -g -pipe -fexceptions -Wcast-qual        \
	 -Wconversion -Wctor-dtor-privacy -Wempty-body -Wformat-security -Wformat=2 -Wignored-qualifiers -Wlogical-op                 \
         -Wmissing-field-initializers -Wnon-virtual-dtor -Woverloaded-virtual -Wpointer-arith -Wsign-promo -Wstack-usage=8192         \
         -Wstrict-aliasing -Wstrict-null-sentinel -Wtype-limits -Wwrite-strings -D_DEBUG -D_EJUDGE_CLIENT_SIDE


all : standart_compilation.exe

standart_compilation.exe : main.o io.o solve_square.o test_square.o
	$(CC) $(CFLAGS) main.o io.o solve_square.o test_square.o -o standart_compilation.exe

main.o : main.cpp
	$(CC) $(CFLAGS) -c main.cpp

io.o : io.cpp
	$(CC) $(CFLAGS) -c io.cpp

solve_square.o : solve_square.cpp
	$(CC) $(CFLAGS) -c solve_square.cpp

test_square.o : test_square.cpp
	$(CC) $(CFLAGS) -c test_square.cpp

clean:
	rm *.o standart_compilation.exe
