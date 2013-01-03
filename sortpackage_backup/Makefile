test:test.o insert_sort.o  choose_sort.o bubble_sort.o                         exchange.o output.o
	gcc -o test test.o insert_sort.o  choose_sort.o bubble_sort.o                    exchange.o output.o
test.o:test.c sort.h
	gcc -c test.c -o test.o
insert_sort.o:insert_sort.c sort.h
	gcc -c insert_sort.c -o insert_sort.o
choose_sort.o:choose_sort.c sort.h
	gcc -c choose_sort.c -o choose_sort.o
bubble_sort.o:bubble_sort.c sort.h
	gcc -c bubble_sort.c -o bubble_sort.o


exchange.o:exchange.c sort.h
	gcc -c exchange.c -o exchange.o
output.o:output.c sort.h
	gcc -c output.c -o output.o
clean:
	rm test test.o insert_sort.o choose_sort.o bubble_sort.o
	
