CC=gcc
C_FLAGS=-fno-stack-protector -m32 -no-pie

EXE=rev

all: clean $(EXE)

$(EXE): $(EXE).c
	$(CC) $(C_FLAGS) -o $(EXE) $(EXE).c

debug: clean
	$(CC) $(C_FLAGS) -g -o $(EXE) $(EXE).c

clean:
	rm -rf *.o *dsym $(EXE)
