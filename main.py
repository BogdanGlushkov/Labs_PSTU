# Три Множества A, B, C:
#   перечисление элементов(Контроль повторения элементов и выход за пределы И)
#   запрос кол-ва элементов

import random


# пересечение *
def cross(x, y):
    x += y
    z = []
    x.sort()
    for i in range(0, len(x)):
        if x.count(x[i]) > 1:
            if i % 2 == 0:
                z.append(x[i])

    print(f'{quote1} {quote3} {quote2} = {z}')


# объединение +
def link(x, y):
    x += y
    z = []
    x.sort()
    for i in range(0, len(x)):
        if x.count(x[i]) > 1:
            if i % 2 == 0:
                z.append(x[i])
        else:
            z.append(x[i])

    print(f'{quote1} {quote3} {quote2} = {z}')


# разность /
def difference(x, y):
    x.sort()
    z = []
    for i in range(0, len(x)):
        tf = True
        for j in range(0, len(y)):
            if x[i] != y[j]:
                tf = True
            else:
                tf = False
                break
        if tf:
            z.append(x[i])
    print(f'{quote1} {quote3} {quote2} = {z}')


# симметричная разность ^
def symmetry(x, y):
    x.sort()
    y.sort()
    z = []
    for i in range(0, len(x)):
        tf = True
        for j in range(0, len(y)):
            if x[i] != y[j]:
                tf = True
            else:
                tf = False
                break
        if tf:
            z.append(x[i])

    for i in range(0, len(y)):
        tf = True
        for j in range(0, len(x)):
            if y[i] != x[j]:
                tf = True
            else:
                tf = False
                break
        if tf:
            z.append(y[i])
    print(f'{quote1} {quote3} {quote2} = {z}')


# дополнение -
def appendix(x):
    y = []
    z = []
    for k in range(-50, 50):
        y.append(k)
    for i in range(0, len(y)):
        tf = True
        for j in range(0, len(x)):
            if y[i] != x[j]:
                tf = True
            else:
                tf = False
                break
        if tf:
            z.append(y[i])
    print(f'{quote3}{quote1} = {z}')


# параметрический рандом
def randint(qs, qp, qr, qr1, qr2):
    if qs == '+':
        if qp == '+':
            temp = random.randint(0, qr2)
            if temp % 2 == 0:
                if temp % qr == 0:
                    return temp
        else:
            temp = random.randint(0, qr2)
            if temp % 2 == 1:
                if temp % qr == 0:
                    return temp
    else:
        if qp == '+':
            temp = random.randint(qr1, -1)
            if temp % 2 == 0:
                if temp % qr == 0:
                    return temp
        else:
            temp = random.randint(qr1, -1)
            if temp % 2 == 1:
                if temp % qr == 0:
                    return temp


def mSign():
    # задание множества по условию: знак +/-
    quoteSign = None
    while quoteSign != '+' or quoteSign != '-':
        quoteSign = input("Укажите знак: + или - : ")
        if quoteSign == '+' or quoteSign == '-':
            break
    return (quoteSign)


def mSignFormat(quoteSign):
    if quoteSign == '-':
        quoteSignFormat = "Отрицательные"
    else:
        quoteSignFormat = "Положительные"
    return (quoteSignFormat)


def mParity():
    # задание множества по условию: Четность
    quoteParity = None
    while quoteParity != "+" or quoteParity != "-":
        quoteParity = input("Укажите четность:  где + четные, а -  нечетные : ")
        if quoteParity == '+' or quoteParity == '-':
            break

    return (quoteParity)


def mParityFormat(quoteParity):
    if quoteParity == '-':
        quoteParityFormat = "нечетные числа"
    else:
        quoteParityFormat = "четные числа"
    return (quoteParityFormat)


def mRatio():
    # задание множества по условию: Кратность
    quoteRatio = 0
    while quoteRatio < 1:
        quoteRatio = int(input("Укажите кратность: 1, 2, 3... : "))
    return (quoteRatio)


def mRange1():
    # задание множества по условию: 1 Диапазон входящий от -50 до 50
    quoteRange1 = 1000

    while (quoteRange1 <= -50) or (quoteRange1 >= 50):
        quoteRange1 = int(input("Укажите первую границу диапазона: от -50 до 50: "))
        if (quoteRange1 >= -50) and (quoteRange1 <= 50):
            break
    return (quoteRange1)


def mRange2(quoteRange1):
    quoteRange2 = 1000
    while (quoteRange2 >= 50) or (quoteRange2 < quoteRange1):
        quoteRange2 = int(input(f'Укажите вторую границу диапазона: от {quoteRange1} до 50: '))
        if quoteRange2 <= 50 and (quoteRange2 > quoteRange1):
            break
    return (quoteRange2)


def mConditions(quoteSign, quoteParity, quoteRatio, quoteRange1, quoteRange2, x):
    x.sort()
    print(f'УСЛОВИЯ ДЛЯ ЗАДАНИЯ МНОЖЕСТВА: x = [{mSignFormat(quoteSign)}, {mParityFormat(quoteParity)}, кратные {quoteRatio}, входящие в диапазон от {quoteRange1} до {quoteRange2}].')
    print(f'В листе A - {len(x)} элементов, A = {x}.')


A = []
B = []
C = []


quoteSign = mSign()
quoteParity = mParity()
quoteRatio = mRatio()
quoteRange1 = mRange1()
quoteRange2 = mRange2(quoteRange1)
while len(A) != random.randint(6, 15):
    temp = randint(quoteSign, quoteParity, quoteRatio, quoteRange1, quoteRange2)
    if temp != None:
        if A.count(temp) < 1 & (-51 < temp < 51):
            A.append(temp)
mConditions(quoteSign, quoteParity, quoteRatio, quoteRange1, quoteRange2, A)

quoteSign = mSign()
quoteParity = mParity()
quoteRatio = mRatio()
quoteRange1 = mRange1()
quoteRange2 = mRange2(quoteRange1)
while len(B) != random.randint(6, 15):
    temp = randint(quoteSign, quoteParity, quoteRatio, quoteRange1, quoteRange2)
    if temp != None:
        if B.count(temp) < 1 & (-51 < temp < 51):
            B.append(temp)
mConditions(quoteSign, quoteParity, quoteRatio, quoteRange1, quoteRange2, B)

quoteSign = mSign()
quoteParity = mParity()
quoteRatio = mRatio()
quoteRange1 = mRange1()
quoteRange2 = mRange2(quoteRange1)
while len(C) != random.randint(6, 15):
    temp = randint(quoteSign, quoteParity, quoteRatio, quoteRange1, quoteRange2)
    if temp != None:
        if C.count(temp) < 1 & (-51 < temp < 51):
            C.append(temp)
mConditions(quoteSign, quoteParity, quoteRatio, quoteRange1, quoteRange2, C)

A.sort()
B.sort()
C.sort()

quote3 = None
while quote3 != '*' or quote3 != "+" or quote3 != "/" or quote3 != "^" or quote3 != "---":
    quote3 = input("Type math symbol: *, +, /, ^, --- ")
    if quote3 == '*' or quote3 == "+" or quote3 == "/" or quote3 == "^" or quote3 == "---":
        break

quote1 = None
while quote1 != "A" or quote1 != "B" or quote1 != "C":
    quote1 = input("Type correct letter of a list: A or B or C  - ")
    quote1 = quote1.upper()
    if quote1 == "A" or quote1 == "B" or quote1 == "C":
        break

if quote3 != "---":
    quote2 = None
    while quote2 != "A" or quote2 != "B" or quote2 != "C":
        quote2 = input("Type letter of a list: A or B or C  - ")
        quote2 = quote2.upper()
        if quote2 == "A" or quote2 == "B" or quote2 == "C":
            break
    quote = quote1 + quote2

    if quote == 'AB' or quote == 'BA':
        if quote3 == '*':
            cross(A, B)

        if quote3 == '+':
            link(A, B)

        if quote3 == "/":
            if quote == 'AB':
                difference(A, B)
            else:
                difference(B, A)

        if quote3 == "^":
            symmetry(A, B)

    if quote == 'BC' or quote == 'CB':
        if quote3 == '*':
            cross(B, C)

        if quote3 == '+':
            link(B, C)

        if quote3 == "/":
            if quote == 'BC':
                difference(B, C)
            else:
                difference(C, B)

        if quote3 == "^":
            symmetry(B, C)

    if quote == "AC" or quote == "CA":
        if quote3 == '*':
            cross(A, C)

        if quote3 == '+':
            link(A, C)

        if quote3 == "/":
            if quote == 'AC':
                difference(A, C)
            else:
                difference(C, A)

        if quote3 == "^":
            symmetry(A, C)

else:
    if quote1 == 'A':
        appendix(A)
    elif quote1 == 'B':
        appendix(B)
    elif quote1 == 'C':
        appendix(C)
