# Nome do projeto
PROJ_NAME=autonomy

# .cpp files
CPP_SOURCE=$(wildcard ./source/*.cpp)

# .hpp files
HPP_SOURCE=$(wildcard ./source/*.hpp)

# Object files
OBJ=$(subst .cpp, .o,$(subst source, objects,$(CPP_SOURCE)))

# Compilador e linker
CC=gcc

# Flags para o compilador
CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic

# Comando para limpeza
RM = rm -rf

# Compilação e linking

all: objFolder $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	@ echo 'Building binary using GCC linker: $@'
	$(CC) $^ -o $@
	@ echo 'Finished building binary: $@'
	@ echo ' '

./objects/%.o: ./source/%.cpp ./source/%.hpp
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '

./objects/main.o: ./source/main.cpp $(HPP_SOURCE)
	@ echo 'Building target using GCC compiler: $<'
	$(CC) $< $(CC_FLAGS) -o $@
	@ echo ' '

objFolder:
	@ mkdir -p objects

clean:
	@ $(RM) ./objects/*.o $(PROJ_NAME) *~
	@ rmdir objects

.PHONY: all clean
