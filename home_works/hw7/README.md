## Инструкция по сборке
Прежде чем работать с программой, использующей тесты необходимо установить библиотеку googletest. Для удобства проверки уже установлена в корень домашнего задания hw7.

googletest можно установить из активного публичного репозитория следующим образом:
```
git clone https://github.com/google/googletest.git
```

После чего можно компилировать проект и его тесты следующим стандартным способом:
```
mkdir build && cd build
```
```
cmake ..
```
```
make
```
## Пример работы тестов struct List 
```
(base) albertbolotnov@mbp-albert build % ./test_list

[==========] Running 10 tests from 4 test suites.
[----------] Global test environment set-up.
[----------] 2 tests from ListBasic
[ RUN      ] ListBasic.Empty
[       OK ] ListBasic.Empty (0 ms)
[ RUN      ] ListBasic.Size
[       OK ] ListBasic.Size (0 ms)
[----------] 2 tests from ListBasic (0 ms total)

[----------] 3 tests from ListInsert
[ RUN      ] ListInsert.PushBack
[       OK ] ListInsert.PushBack (0 ms)
[ RUN      ] ListInsert.PushFront
[       OK ] ListInsert.PushFront (0 ms)
[ RUN      ] ListInsert.PushMiddle
[       OK ] ListInsert.PushMiddle (0 ms)
[----------] 3 tests from ListInsert (0 ms total)

[----------] 3 tests from ListPop
[ RUN      ] ListPop.PopBack
[       OK ] ListPop.PopBack (0 ms)
[ RUN      ] ListPop.PopFront
[       OK ] ListPop.PopFront (0 ms)
[ RUN      ] ListPop.PopMiddle
[       OK ] ListPop.PopMiddle (0 ms)
[----------] 3 tests from ListPop (0 ms total)

[----------] 2 tests from ListPopPush
[ RUN      ] ListPopPush.PopPushComplex1
[       OK ] ListPopPush.PopPushComplex1 (0 ms)
[ RUN      ] ListPopPush.PopPushComplex2
[       OK ] ListPopPush.PopPushComplex2 (0 ms)
[----------] 2 tests from ListPopPush (0 ms total)

[----------] Global test environment tear-down
[==========] 10 tests from 4 test suites ran. (0 ms total)
[  PASSED  ] 10 tests.
```

## Пример работы тестов struct Vector

```
(base) albertbolotnov@mbp-albert build % ./test_vector
[==========] Running 10 tests from 4 test suites.
[----------] Global test environment set-up.
[----------] 2 tests from VectorBasic
[ RUN      ] VectorBasic.Empty
[       OK ] VectorBasic.Empty (0 ms)
[ RUN      ] VectorBasic.Size
[       OK ] VectorBasic.Size (0 ms)
[----------] 2 tests from VectorBasic (0 ms total)

[----------] 3 tests from VectorInsert
[ RUN      ] VectorInsert.PushBack
[       OK ] VectorInsert.PushBack (0 ms)
[ RUN      ] VectorInsert.PushFront
[       OK ] VectorInsert.PushFront (0 ms)
[ RUN      ] VectorInsert.PushMiddle
[       OK ] VectorInsert.PushMiddle (0 ms)
[----------] 3 tests from VectorInsert (0 ms total)

[----------] 3 tests from VectorPop
[ RUN      ] VectorPop.PopBack
[       OK ] VectorPop.PopBack (0 ms)
[ RUN      ] VectorPop.PopFront
[       OK ] VectorPop.PopFront (0 ms)
[ RUN      ] VectorPop.PopMiddle
[       OK ] VectorPop.PopMiddle (0 ms)
[----------] 3 tests from VectorPop (0 ms total)

[----------] 2 tests from VectorPopPush
[ RUN      ] VectorPopPush.PopPushComplex1
[       OK ] VectorPopPush.PopPushComplex1 (0 ms)
[ RUN      ] VectorPopPush.PopPushComplex2
[       OK ] VectorPopPush.PopPushComplex2 (0 ms)
[----------] 2 tests from VectorPopPush (0 ms total)

[----------] Global test environment tear-down
[==========] 10 tests from 4 test suites ran. (0 ms total)
[  PASSED  ] 10 tests.
```