#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void wc() {
    
	char c;
	int in;
    int bc = 1, wc = 1, lc = 1;

	in = open("resources/file.in", O_RDONLY); // read only로 file.in을 열고
    
	while(read(in, &c, 1) == 1){ // 한글자 씩 읽는데 size가 1일 때까지
        // byte count
        bc++;
        
        // line count
        if(c == '\n') {
            lc++;
        }
        // word count
        if(c == ' ' || c == '\t' || c == '\n') {
            wc++;
        }
        
		printf("%s",&c);
    }
    printf("\n 문자 수 : %d 단어 수 : %d 라인 수 : %d", bc, wc, lc);
	exit(0);
}