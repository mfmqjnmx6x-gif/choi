#백준 2557번: A+B 출력
#두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

A,B = map(int,input().split()) #두 값을 받으니 map으로, int-숫자형, split-()안에 있는거 기준으로 나누기
print(A+B)