CC = g++
OUT = Debug/main
ODIR = Debug/Obj
SDIR = src
IDIR = inc
CFLAGS = -I$(IDIR)

_DEPS = books.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJS = main.o books.o
OBJS = $(patsubst %, $(ODIR)/%, $(_OBJS))

$(OUT): $(OBJS)
	$(CC) -o $@ $^ $(CFLAGS)
	
$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS) 


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(OUT)
	
