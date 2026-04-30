#!/bin/bash

# C 파일명을 인자로 받음
if [ $# -eq 0 ]; then
    echo "사용법: ./run.sh <파일명.c>"
    exit 1
fi

# 파일명에서 확장자 제거
filename="${1%.*}"

# 컴파일 및 실행
gcc "$1" -o "$filename" && ./"$filename"

# 실행 파일 삭제 (선택사항)
rm -f "$filename"
