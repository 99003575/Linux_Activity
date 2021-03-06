all: send receive

send: send.c 
	gcc -o send.out send.c -lrt
	
receive: receive.c 
	gcc -o receive.out receive.c -lrt
	
runreceive:
	./receive.out

runsend:
	./send.out

clean:
	rm -rf *.out *.o
