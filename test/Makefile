clean:
	@rm ../src/*.o ../src/*.a *.out *.exe 2>/dev/null || true

t1:
	echo "Not working yet!"

t2:
	bash tester2/grademe.sh
	@make clean 2>/dev/null || true

t3:
	make -C tester3/
	@make clean 2>/dev/null || true

tall:
	bash tester2/grademe.sh
	make -C tester3/
	@make clean 2>/dev/null || true

lib:
	@make -C ../src/ 1>/dev/null || true

lin:
	@gcc -Wall -Wextra -Werror main.c ../src/libft.a && ./a.out

lincat:
	@gcc -Wall -Wextra -Werror main.c ../src/libft.a && ./a.out | cat -e
