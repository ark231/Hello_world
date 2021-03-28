1:
	gcc -O0 -o hello_world1 hello_world1.c -w
1o2:
	gcc -O2 -o hello_world1 hello_world1.c -w
1o3:
	gcc -O3 -o hello_world1 hello_world1.c -w
1d:
	gcc -g3 -o hello_world1 hello_world1.c
2:
	gcc -o hello_world2 hello_world2.c -Dhello_world='<stdio.h>' -Da='int main(void){printf("Hello,world!\n");return 0;}'
2d:
	gcc -g3 -o hello_world2 hello_world2.c -Dhello_world='<stdio.h>' -Da='int main(void){printf("Hello,world!\n");return 0;}'
