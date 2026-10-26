# 本课目录专用 Makefile (在任意课程目录下都能直接 make)
#   make          -> 编译本目录所有 .c
#   make hello    -> 只编译 hello.c
#   make clean    -> 删除本目录编译产物
SRCS := $(wildcard *.c)
BINS := $(SRCS:.c=)

all: $(BINS)

%: %.c
	g++ -x c $< -x none $$(pkg-config --libs easyx) -Wall -o $@
	@echo "==> 编译完成: ./$@"

clean:
	rm -f $(BINS)
	@echo "==> 清理完成"

.PHONY: all clean
