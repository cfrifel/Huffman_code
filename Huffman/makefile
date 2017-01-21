CC = gcc
CFLAGS = -c -Wall

all: createcode367 decode367 decodesplit367 encode367 frequency367

createcode367: createcode.o
	$(CC) createcode.o -o createcode367

decode367: decode.o
	$(CC) decode.o -o decode367 -lm

decodesplit367: decodesplit.o
	$(CC) decodesplit.o -o decodesplit367 -lm

encode367: encode.o
	$(CC) encode.o -o encode367 -lm

frequency367: frequency.o
	$(CC) frequency.o -o frequency367 -lm

huffmanutil367: huffmanutil.o
	$(CC) huffmanutil.o -o huffmanutil367 -lm

createcode.o: createcode.c
	$(CC) $(CFLAGS) createcode.c

decode.o: decode.c
	$(CC) $(CFLAGS) decode.c

decodesplit.o: decodesplit.c
	$(CC) $(CFLAGS) decodesplit.c

encode.o: encode.c
	$(CC) $(CFLAGS) encode.c

frequency.o: frequency.c
	$(CC) $(CFLAGS) frequency.c

huffmanutil.o: huffmanutil.c
	$(CC) $(CFLAGS) huffmanutil.c

clean:
	$(RM) *.o 

real_clean: 
	$(RM) *.o *.367 *~ codebook367 createcode367 decode367 decodesplit367 encode367 frequency367 frequencylist codebook compressed codebookdecode codeout
