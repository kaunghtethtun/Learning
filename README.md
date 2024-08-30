# Learning
Some Commands for making static library and link to main file 
```
c++ -std=c++17 -c test.cpp -o test.o
ar rcs libtest.a test.o ....
c++ -std=c++17 main.cpp -L . ltest -o main
```