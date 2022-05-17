cc = gcc 
include = -I ./includes
flags = -Wall -Wextra -Werror ${include}
src = srcs/create.c srcs/display.c srcs/count.c srcs/sum.c srcs/max.c srcs/search.c
obj = ${src:.c=.o}
biniary = bin

all : ${biniary}

${biniary} : ${obj}
		${cc} -o $@  $^

%.o:%.c
	${cc} ${flags} -c -o $@ $^

clean :
	rm -rf ${obj} bin  