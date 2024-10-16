# Задачи към [Битови оператори](./)

## Практически задачи (P)

### P1

Напишете програма, която причита 2 **цели неотрицателни числа**, прилага следните побитови операции:

- побитово NOT (отрицание) на всяко от тях,
- побитово AND (и / конюнкция) между тях,
- побитово OR (или / дизюнкция) между тях,
- побитови XOR (изключващо или) между тях,

и принтира на конзолата резултата от тях.

Разгледайте резултатите и пробвайте различни числа.

### P2

Напишете програма, която прочита 2 **цели неотрицателни числа num и n**, прилага следните побитови операции:

- left shift на **num** с **n** позиции,
- right shift на **num** с **n** позиции,

и принтира на конзолата резултата от тях.

Разгледайте резултатите и пробвайте различни числа.

### P3

Напишете програма, която прочита от конзолата **цяло неотрицателно число n**, и чрез побитови операции намира **n**-тата степен на 2ката. Подсигурете, че програма ще може да принтира числа от 64 битови типове.

```
#1 Пример
Вход:
2

Изход:
4

#2 Пример
Вход:
15

Изход:
32768

#3 Пример
Вход:
63

Изход:
9223372036854775808

#4 Пример
Вход:
0

Изход:
1
```

### P4

Напишете програма, която прочита от конзолата **2 цяли неотрицателни числа num (32 битово) и n**. След което принтира на конзолата най-младщият (първият, нулевият), най-старшият (последният) и **n**-тият (започвайки да броим от 0) бит на числото **num**.

```
#1 Пример
Вход:
27
2

Изход:
youngest bit = 1
most significant bit = 0
nth bit = 0

#2 Пример
Вход:
10
3

Изход:
youngest bit = 0
most significant bit = 0
nth bit = 1

#3 Пример
Вход:
123
5

Изход:
youngest bit = 1
most significant bit = 0
nth bit = 1

#4 Пример
Вход:
4034654331
15

Изход:
youngest bit = 1
most significant bit = 1
nth bit = 1
```

### P5

Напишете програма, която прочита от конзолата **цяло неотрицателно число** и проверява дали то е четно използвайки битови операции.

### P6

Напишете програма, която прочита от конзолата **2 цяли неотрицателни числа num и n**, след което задавате **n**-тия (започват да се броят от 0) бит на **num** да е равен на 0 и принтирате новото число. Това действие се нарича сваляне на бита (bit clear).

```
#1 Пример
Вход:
123
5

Изход:
91

#2 Пример
Вход:
654
4

Изход:
654
```

### P7

Напишете програма, която прочита от конзолата **2 цяли неотрицателни числа num и n**, след което задавате **n**-тия (започват да се броят от 0) бит на **num** да е равен на 1 и принтирате новото число. Това действие се нарича вдигане на бита (bit set).

```
#1 Пример
Вход:
53
1

Изход:
55
```

### P8

Напишете програма, която прочита от конзолата **2 цяли неотрицателни числа num и n**, след което задавате **n**-тия бит на **num** да е равен на 1 и принтирате новото число. Това действие се нарича обръщане на бита (bit flip).

```
#1 Пример
Вход:
33

Изход:
37
```

### P9

Напишете програма, която прочита от конзолата **цяло неотрицателно число** и обръща битовете на първите 3 бита.

```
#1 Пример
Вход:
183

Изход:
176

#2 Пример
Вход:
170

Изход:
173
```

### P10

Напишете програма, която прочита от конзолата **цяло неотрицателно число (32 бита)** и обръща битовете на всичките четни позиции, след което извежда резултата в конзолата.

```
#1 Пример
Вход:
1431655764

Изход:
4294967294

#2 Пример
Вход:
2862656170

Изход:
655360

#3 Пример
Вход:
44739242

Изход:
2818572288
```

### P11

Напишете програма, която прочита от конзолата **цяло число (32 бита)** и връща неговата абсолютна стойност. Използвайте битови операции за решение на задачата.

```
#1 Пример
Вход:
145

Изход:
145

#2 Пример
Вход:
-145

Изход:
145
```

### P12

Напишете програма, която прочита от конзолата **цяло неотрицателно число** и проверява дали е степен на 2ката.