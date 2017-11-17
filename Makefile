OUT = Debug/main
CC = g++
ODIR = Debug/Obj
SDIR = src
INC = -Iinc

_OBJS = main.o books.o
OBJS = $(patsubst %,$(ODIR)/%,$(_OBJS))

$(OUT): $(OBJS) 
	ar rvs $(OUT) $^

$(ODIR)/main.o: main.cpp
	$(CC) $(INC) -c $< -o $@ 

$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CC) $(INC) -c $< -o $@ $(CFLAGS) 


.PHONY: clean

clean:
	rm -f $(ODIR)/*.o $(OUT)
