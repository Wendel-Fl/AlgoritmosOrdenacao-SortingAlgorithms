STD = -std=c99

OPTIONS = -Wall -Wpedantic -Wno-unused-result -O0 -g

all:
	gcc $(STD) $(OPTIONS) AlgoritmosOrdenacao.c -o trabalho