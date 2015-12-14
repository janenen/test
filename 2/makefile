CFLAGS:= -Wall
LDFLAGS:=
LDLIBS:= -lstdc++
CXX:= gcc
SILENT:= @

#MODULES:= groesse
#SRC = $(MODULES:%=%.cpp) #für jedes Element aus MODULES eine .cpp Datei
#OBJ = $(SRC:%.cpp=%.o)	#für jede .cpp Datei eine .o Datei
OBJ=groesse.o
all:groesse

groesse: $(OBJ)
	$(SILENT) echo "linke"
	$(SILENT) $(CXX) $(LDFLAGS) $^ -o $@ $(LDLIBS)
#linke alle object-Dateien aus OBJ, $@ Dateiname des Ziels, $^ Liste aller vorraussetzungen (aus OBJ)
%.o: %.cpp
	$(SILENT) echo "compiliere"
	$(SILENT) $(CXX) -c $(CFLAGS) $<
#erzeuge object-Dateien aus den zugehörigen Quelltexten

.PHONY: clean

clean:
	$(SILENT) echo "lösche"
	$(SILENT) rm -f *.o
