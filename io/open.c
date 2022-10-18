// open90 시스템 호출은 name으로 전달된 경로에 있는 파일을 오픈하여 정수형의 file descriptor를 반환한다. 이때 flags에 전달된 내용에 따라서 파일이 열려진다.
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


int open(const char *name, int flags, mode_t mode);



int open(const char *name, int flags, mode_t mode) {
    
}