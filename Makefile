compiler = gcc
flag = -c

exe: main.o add.o del.o mod.o save.o show.o sort.o
	$(compiler) $^ -o $@

main.o: main.c
	$(compiler) $(flag) $< -o $@

add.o: add.c
	$(compiler) $(flag) $< -o $@

del.o: del.c
	$(compiler) $(flag) $< -o $@

mod.o: mod.c
	$(compiler) $(flag) $< -o $@

save.o: save.c
	$(compiler) $(flag) $< -o $@

show.o: show.c
	$(compiler) $(flag) $< -o $@

sort.o: sort.c
	$(compiler) $(flag) $< -o $@

clear:
	@echo "Cleaning Up..."
	@rm -f *.o exe

.PHONY: clear
