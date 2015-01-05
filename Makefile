all: generate open

generate:
	cleaver slide.md

open:
	open JavaScript-and-JIT-Comilation.html

clean:
	rm JavaScript-and-JIT-Comilation.html
