a.out: temp_stack.o client_menu.o
	gcc temp_stack.o client_menu.o
client_menu.o: client_menu.c temp_stack.h
	gcc -g -c client_menu.c 
temp_stack.o: temp_stack.c temp_stack.h
	gcc -g -c temp_stack.c
