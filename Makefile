default:
	@gcc *.c -o build/test.exe -O3 -fvisibility=hidden -s
	@./build/test.exe