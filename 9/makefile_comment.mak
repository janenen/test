CXX := gcc
CFLAGS := -g3
LDFLAGS :=
LDLIBS := -lstdc++
SILENT := @
ECHO := echo

MODULES = main Matrix
SRC = $(MODULES:%=%.cpp)
OBJ = $(SRC:%.cpp=%.o)
#SRC = main.cpp Matrix.cpp //hängt an alle Einträge aus MODULES .cpp an
#OBJ = main.o Matrix.o // ersetzt in allen Einträgen aus SRC ".cpp" durch ".o"

all : main
#wird mit ./make aufgerufen und ruft main auf

main:$(OBJ)
#ruft die Regel %.o für alle Elemente von OBJ auf, also main.o und Matrix.o
#-->
	$(SILENT) $(ECHO) "--- Creating $@ ---"
#Ausgabe "--- Compiling main ---" // $@ :Zielname
	$(SILENT) $(CXX) $^ -o $@ $(LDLIBS)
#Compileraufruf "gcc main.o Matrix.o -o main -lstdc++" //$^ :Alle Abhängigkeiten

%.o: %.cpp
#1. Durchlauf: main.cpp
#2. Durchlauf: Matrix.cpp
	$(SILENT) $(ECHO) "--- Compiling $< ---"
#1. Durchlauf Ausgabe "--- Compiling main.cpp ---" // $< : 	Name der ersten Abhängigkeit der aktuellen Regel 
#2. Durchlauf Ausgabe "--- Compiling Matrix.cpp ---"
	$(SILENT) $(CXX) -c $(CFLAGS) $<
#1. Durchlauf: Aufruf Compiler: @gcc -c -g3 main.cpp erzeugt main.o -->2.Durchlauf
#2. Durchlauf: Aufruf Compiler: @gcc -c -g3 Matrix.cpp erzeugt Matrix.o -->Rücksprung in main

.PHONY: clean

clean:
	$(SILENT) $(ECHO) "--- Removing object files ---"
	$(SILENT) rm -f *.o
#lösche alle .o Objekte im aktuellen Ordner
