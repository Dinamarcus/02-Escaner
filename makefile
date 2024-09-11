# Nombre del ejecutable
EXEC = scanner.exe

# Archivos objeto
OBJS = scanner.o main.o

# Regla por defecto
all: $(EXEC)

# Regla para compilar el ejecutable
$(EXEC): $(OBJS)
	gcc $(OBJS) -o $(EXEC)

# Regla para compilar scanner.o
scanner.o: scanner.c scanner.h
	gcc -c scanner.c -o scanner.o

# Regla para compilar main.o
main.o: main.c scanner.h
	gcc -c main.c -o main.o

# Regla para limpiar los archivos generados
clean:
	del /f $(OBJS) $(EXEC)

.PHONY: all clean