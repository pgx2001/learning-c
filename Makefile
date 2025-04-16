build-hello-world:
	gcc -o hello_world hello_world.c

run-hello-world:
	./hello_world

build-and-run-hello-world: build-hello-world run-hello-world
