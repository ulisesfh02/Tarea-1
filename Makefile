FLAGS = -g -c --std=c++17

all:
	mkdir -p bin
	g++ $(FLAGS) src/TipoEnvio.cpp -o bin/TipoEnvio.o
	g++ $(FLAGS) src/FedEX.cpp -o bin/FedEX.o
	g++ $(FLAGS) src/ServicioPostal.cpp -o bin/ServicioPostal.o
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ -g -o bin/abstraccion bin/TipoEnvio.o bin/FedEX.o bin/ServicioPostal.o bin/main.o
clean:
	rm -Rf bin
