TARGET = example
CC     = g++
SFMLFLAGS  = -lsfml-graphics -lsfml-audio -lsfml-window -lsfml-system 
WFLAGS = -Wall -g

SRC    = main.cpp \
	 AnimatedSprite.cpp \
	 ResourceHandler/ResourceHandler.cpp \

OBJ    = $(SRC:.c=.o)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(WFLAGS) $(SFMLFLAGS)

.PHONY: clean

clean:
	rm -f $(OBJ) $(TARGET)
