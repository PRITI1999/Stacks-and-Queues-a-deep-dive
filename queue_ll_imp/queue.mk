a.out: queue_ll.o client_menu.o
	g++ queue_ll.o client_menu.o
client_menu.o: client_menu.cpp queue_ll.h
	g++ -g -c client_menu.cpp 
queue_ll.o: queue_ll.cpp queue_ll.h
	g++ -g -c queue_ll.cpp

~                                                                               
~                                                                               
~                                                                               
~                               
