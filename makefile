all:
	gcc -I. message.h shad.h joy.c -o Joy && ./Joy
