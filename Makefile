CC=gcc
C_FLAGS=-fno-stack-protector -no-pie

EXE=rev

all:
	@echo "specify 32 or 64"

32: $(EXE).c
	$(CC) $(C_FLAGS) -m32 -o $(EXE)32 $(EXE).c

64: $(EXE).c
	$(CC) $(C_FLAGS) -o $(EXE)64 $(EXE).c

clean:
	rm -rf *.o *dsym $(EXE)32 $(EXE)64
