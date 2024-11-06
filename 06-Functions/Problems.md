# Задачи към [Функции](./)

## Практически задачи

### P1

Напишете програма, която прочита от конзолата **цяло число** и принтира абсолютната стойност на числото. В решението на задачата създайте и използвайте функция **absolute**, която приема цяло число като аргумент и връща цяло чисо.

### P2

Напишете програма, която прочита от конзолата **цяло число** и принтира на конзолата знака на числото (за нула нека връща 
'0'). В решението на задачата създайте и използвайте създайте функция **sign**, което приема цяло число като аргумент и връща символ.

### P3

Напишете програма, която прочита **реално число** и го принтира числото закръглено до 2 символа след запетаята. В решението на задачата създайте и използвайте функция **printRealNumber**, която приема реално число като аргумент и не връща нищо.

### P4

Напишете програма, която прочита от конзолата **цяло число**, което ще бъде валидна година и проверява дали тази година е високосна. В решенето на задачата създайте и използвайте функция предикат (функция, която връща булева стойност: 0/FALSE или 1/TRUE) **isleapYear**.

Една година е високосна, ако:

- се дели на 4 и не се дели на 100, или
- се дели на 400.

### P5

Напишете програма, която прочита от конзолата **цяло число** и проверява дали това число е просто. В решението на задачата създайте функция предикат **isPrime**.

### P6

Напишете програма, която прочита 2 **цели числа start и end** и принтира всички числа в интервала **[start, end]**, които имат еднакви съседни цифри (примерни числа: 77, 112, 100). В реализацията на тази програма създайте и използвайте функция предикат **hasNeighboringIdenticalDigits**.

### P7

Напишете програма, която прочита **цяло число** и принтира на конзолата броят на битовете, които са равни на 1. В решенето на задачата създайте и използвайте функция **count1BitsInNumber**, която приема цяло число като аргумент и връща цяло число.

### P8

Напишете програма, която прочита **цяло число** и принтира на конзолата броят на нулевите битове след най-младшата единица. Създайте и използвайте подходящата функция.

### P9

Напишете програма, която прочита **цяло число** и принтира в конзолата резултата от функция, която приема число като аргумент, сменя стойностите на всеки 2 последователни бита на подаденото число и връща резултата.

### P10

Напишете програма, която прочита букви (команди) докато не прочете буквата 'E' и тогава прекратява действието си. Програмата ще се налага да поддържа следните команди:

- P -> изисква допълнителен вход **цяло число n** и пресмята пермутацията на **n**.
- V -> изисква допълнителен вход **2 цели числа n и k** и пресмята тяхната вариация.
- C -> изисква допълнителен вход **2 цели числа n и k** и пресмята тяхната комбинация.
- E -> край на програмата.
- друг вход -> принтира съобщение за невалиден вход и изисква нов вход "Invalid command input!"

Ограничения (ако ограниченията не са изпълнени, принтирайте "Invalid number input!"):
- 0 <= k <= n <= 20

Формули:
- P(n) = n! = 1.2...n (0! = 1);
- V(n, k) = n.(n-1).(n-2)...(n - k + 1);
- C(n, k) = V(n, k) / P(k);

За реализацията на тази задача трябва да създадете няколко функции.

```
#1 Пример
Вход:
P 5
V 5 2
C 5 2
E

Изход:
P(5) = 120
V(5, 2) = 20
C(5, 2) = 10

#2 Пример
Вход:
P 18
V 2 5
V 25 2
B
5
E

Изход:
P(18) = 6402373705728000
Invalid number input!
V(25, 2) = 600
Invalid command input!
Invalid command input!
```

### P11

Напишете програма, която прочита от конзолата цяло положително число и принтира на конзолата най-големия му делител, който е различен от самото число. Създайте и използвайте функция largestDivisor, която приема цяло число като аргумент и връща цяло число.

### P12

Напишете програма, която прочита от конзолата две цели числа x и y и намира най-големия общ делител (НОД) на тези числа, използвайки Евклидовия алгоритъм. Създайте и използвайте функция gcd, която приема две цели числа като аргументи и връща НОД.

### P13

Напишете програма, която прочита от конзолата цяло число и връща числото, но с разменени местата на най-младшия и най-старшия бит. Създайте функция swapEndBits, която приема цяло число като аргумент и връща цяло число.

### P14

Напишете програма, която прочита цяло положително число и принтира броя на различните му прости делители. Създайте и използвайте функция countDistinctPrimeDivisors, която приема цяло число като аргумент и връща броя на различните прости делители на това число.

### P15

Напишете програма, която прочита цяло число n и принтира числата на Фибоначи до n-тия член (включително). Създайте и използвайте функция printFibonacciSequence, която приема цяло число като аргумент и не връща нищо.
