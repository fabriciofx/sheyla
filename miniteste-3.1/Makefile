# Este makefile é genérico. Basta mudar o nome do arquivo (sem a extensão) que
# contém a função main() na variável PROGRAM e deixar todos os arquivos na
# mesma pasta. Para compilar, basta dar o comando make. Para impar, make clean
PROGRAM = miniteste-3.1

# Programs used to compile/link
ifeq ($(findstring bin/sh,$(SHELL)), bin/sh)
    RM = rm -rf
else
    RM = rd /s /q
endif

SOURCES = $(wildcard *.cpp)
OBJECTS = $(subst .cpp,.o,$(SOURCES))

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $(PROGRAM) $(OBJECTS) $(LDLIBS)

clean:
	$(RM) $(OBJECTS) $(PROGRAM)
