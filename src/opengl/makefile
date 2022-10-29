# compiler
NVCC = nvcc

# flags
LFLAGS = -arch=sm_35 -rdc=true -std=c++11 -m64 

#armadilo
LIBARMADILO= -DARMA_DONT_USE_WRAPPER -lopenblas -llapack

#opengl
LIBOPENGL= -lGL -lGLEW -lGLU -lglut -lm -lglfw

EXEC= main
SRC= main.cpp 


all: compile openExe 

compile:
	$(NVCC) $(LFLAGS) -o $(EXEC) $(SRC) ${LIBOPENGL} ${LIBARMADILO}

openExe:
	./$(EXEC)

clean:
	rm -rf *.o
	rm -rf $(EXEC)