all: main_plane main_sphere

main_plane: main.cpp utils.cpp utils.hpp
	g++ main.cpp utils.cpp -o main_plane

main_sphere: main.cpp utils.cpp utils.hpp
	g++ main.cpp utils.cpp -DUSE_SPHERE -o main_sphere

clean:
	rm -f main_plane main_sphere

.PHONY: all clean