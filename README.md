#bigInt
정수 자료형으로 입력할 수 있는 길이의 정수보다 큰 수를 입력하여 정수 연산을 하는 프로그램
정수들을 문자열로 받아서 한자리씩 연산하는 방법으로 코드를 짜주었다.
#빌드
g++ -Werror -c main.cpp reverse.cpp sub.cpp sum.cpp 입력하여 컴파일
g++ main.o reverse.o sub.o sum.o -o main.exe 입력하여 링크
./main.exe로 실행
