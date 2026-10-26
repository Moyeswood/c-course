#!/bin/bash
# C 课程图形程序一键编译运行脚本
# 用法: ./build.sh 程序.c
set -e
if [ $# -ne 1 ]; then
    echo "用法: ./build.sh 程序.c"
    exit 1
fi
out="${1%.c}"
g++ -x c "$1" -x none $(pkg-config --libs easyx) -o "$out" -Wall
echo "==> 编译成功, 运行 ./$out"
