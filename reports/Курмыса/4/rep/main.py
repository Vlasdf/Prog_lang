from random import randint

# ������� 1.1 - ���������� �������� ������� �� ����������
def task_1_1():
  print('\n���� ������� |((a^2-b^3 - c^3*a^2)*(b-c+c*(k-d/b^3))-(k/b-k/a)*c)^2 - 20000|.')
  a, b, c, d, k = list(map(float, input('������� ��������� a, b, c, d, k (a, b != 0): ').split()))
  if a * b == 0:
    print('������� �� ���� ����������!\n')
  else:
    print(abs(((a*a / (b**3) + c**3 * a*a) * (b - c + c * (k - d / (b**3)))) - (k / b - k / a * c)**2 - 20000), end='\n\n')

# ������� 1.2 - ���������� �������� ��������� � ������
def task_1_2():
  l = [19, 6, 38, 'ms(PZS*SXsu', 27, 9, 66, '2&8Lnt3c&q', 99, 't#Eavz', 97, '*Fj#mi%tKPayi', 51, 45, 'hHT#AeQ*S*MM#246', 'QuXpiBBfJkQSsKco', 51, 'RqUBECOUEKvETvhr', 98, 'gAH%pMMUw##pHJm', 83, 'sHs08y1uV6Or9', '2W59udOnK', 'qv8rfV4m02', 9, '8J5MNy#Y2E)6Jg*', 26, 'ahtHhBUIEvaoxHvW', 3, 'xk6P5)XZ0#o', 'ZxMGDq', 15, '7*%AB98V', 'BndpoLtjsIwxvuT', 96, '9CkkLi#)1eV', '9G28ev(', '#MQ9y*e7WVSc)0x', '*d(CPaqBbM%#gRuU', 'GpzLpXuyWD', 'zbznrUsMd', 'FOy1ip1qW65Bh0', 'x9f8sMz2XZ5', 'ZVWwKj%', 'bsguivasnPN', 47, 43, 'UJmyjaLPIFkk', 'zeAOOruqdWC', 'aUJUwkqRSxVucbro', 'WJenLtAF', 50, 'oxEuJxWeagEvx', 'ENe*6m22##7B1(zp', 'QV(yvfliYf)']
  print('\n��� ������', l)
  print('�������� �������� ������: ', end = '')
  for i in range(0, len(l), 2):
    print(l[i], end = ' ')
  print('\n')

# ������� 1.3 - ���������� ����� ����� �� 1 �� 10 �� ������
def task_1_3():
  l = list(map(int, "86 -46 96 96 100 -66 9 -68 -98 -83 -35 52 -3 82 72 25 73 -100 -42 -9 -85 66 88 57 -73 -67 -93 54 64 43 98 5 61 81 -65 -62 14 46 -24 -22 -33 20 90 -63 40 -73 -26 64 -84 -24 82 -97 27 -22 -76 67 -80 82 -95 -63 -64 -16 -94 -71 71 -95 45 -55 38 -94 -65 -68 -9 -77 -79 59 -30 -39".split()))
  print('\n��� ������ �����: ', l)
  S = 0

  for i in l:
    if 1 <= i <= 10:
      S += i

  print('����� ����� �� 1 �� 10:', S, end='\n\n')

# ������� 1.4 - ���������� �������� ������
def task_1_4():
  l = list(map(int, "-27 19 -31 -24 -82 -99 24 59 -81 59 62 -61 -64 47 -61 -100 73 26 91 -83 -53 -93".split()))
  print('\n��� ������', l)
  print('����������� ����� ������ = ', min(l))

# ������� 2.1 - ���� ����� �� ��� ���, ���� ��� �� ����� ����� ���������� ���������������� �����
def task_2_1():
  my_number = randint(1, 100)
  print('\n����� my_number �����', my_number)
  while True:
    user_number = int(input('������� ����� user_number �����, ��� user_number = my_number: '))
    if user_number != my_number:
      break
  print('�� ����� �����, �� ������ my_number!\n')

# ������� 2.2 - ���������� ����� � ������ < 10
def task_2_2():
  l = ['vfnjk', 'cndbjehvcbje', 'cnejkc', 'ncwubce', 'cmkwednv', 'nvbeyjrkc', 'mkwnkel', 'keocljik', 'cwndbj', 'cnwksedjk', 'nwcjhvjhbkdlw', 'nkecndmlsijh', 'cnwbjvsbnilrkjf', 'mncebduijvutrfi', 'cenk']
  print('\n��� ������ �����', l)
  print('������ � ������ < 10: ', end='')
  for i in l:
    if len(i) < 10:
      print(i, end=' ')

# ������� 2.3 - ����� ����� � N ��������� 'R'
def task_2_3():
  N = int(input('������� ����� ������: '))
  print('R' * N)

# ������� 2.4 - �������� �� ������ �����, �� ������ � �������
def task_2_4():
  str = 'Gs5Ru&C4#Q**Fv430#*&#NKs934R9lLd)c4W1&E&d#mq53CC55kiM(k#Gt7g)%9Vu)5k7*0US2)2)OpQ57R9Bl#T&4qhc)i%4u*PG3&5dA%#4FveT)cJ#41&Ln)gI303L0&VN7*Kn0%LjSA(8*F3h%nk#Vz49pf*'
  print('\n���� ������', str)
  print('��� �� ������, ���������� ������ �����: ', end='')
  for i in str:
    if i.isalpha():
      print(i, end='')

# ������� ��� ������� 3.X
matrix = [
  [1, 2, 3, 4, 5, 6, 7, 8],
  [8, 7, 6, 5, 4, 3, 2, 1],
  [2, 3, 4, 5, 6, 7, 8, 9],
  [9, 8, 7, 6, 5, 4, 3, 2],
  [1, 3, 5, 7, 9, 7, 5, 3],
  [3, 1, 5, 3, 2, 6, 5, 7],
  [1, 7, 5, 9, 7, 3, 1, 5],
  [2, 6, 3, 5, 1, 7, 3, 2]
]

def show_matrix():
  print('\n���� ��������� �������:')
  for i in matrix:
    for j in i:
      print(j, end=' ')
    print()

def task_3_1():
  show_matrix()
  print('\n������� ����� ���������� ���� ������ ��������� � �������:')
  for i in matrix:
    for j in i:
      print(j**(2 - j % 2), end = ' ')
    print()
  print()

def task_3_2():
  show_matrix()
  N = int(input('\n������� �������, ����� �������� �� ������ ���������� (�� 1 �� 8): '))
  if not(1 <= N <= 8):
    print('�� ����� �� ������� ���������!')
    return
  S = 0
  for i in matrix:
    S += i[N - 1]
  print('����� ��������� � ������� �', N, '�����', S, end='\n\n')

def task_3_4():
  show_matrix()
  S = 0
  for i in matrix:
    for j in i:
      S += j
  print('\n����� ���� ��������� ������� �����', S, end='\n\n')

def task_3_5():
  show_matrix()
  N = int(input('\n������� �����, �� ������� ����� �������� ��� ������� ��� �������� �������: '))
  print('������� ����� ���������:')
  for i in matrix:
    for j in i:
      print(j if j >= N else N, end=' ')
    print()
  print()

def task_3_6():
  show_matrix()
  N = int(input('\n������� ����� �������, ������� ����� ������� �� ������� (�� 1 �� 8): '))
  if not(1 <= N <= 8):
    print('�� ����� �� ������� ���������!')
    return
  for i in range(len(matrix)):
    for j in range(len(matrix[i])):
      if j != N - 1:
        print(matrix[i][j], end=' ')
    print()
  print()

def task_3_7():
  N, M = map(int, input('\n������� ��������� ��� ����� �������, ����������� ������: ').split())
  new_matrix = [[0] * M] * N
  print('��������������� �������:')
  for i in new_matrix:
    for j in i:
      print(j, end=' ')
    print()
  print()

def task_3_8():
  show_matrix()
  N = int(input('\n������� ����� ������, �������� ������� ����� ������, ������� �� � ������� (�� 1 �� 8): '))
  if not(1 <= N <= 8):
    print('�� ����� �� ������� ���������!')
    return
  print('�������� ������ � ���������: ', end='')
  for j in matrix[N - 1]:
    print(j*j, end= ' ')

def task_4_1():
  s = '������� ���� ����, ���� ������ ���������, �� �������� ������ �� ������, � �������� ����� � ����.'
  print('\n���� ������:', s)
  s = s.split()
  print('��� ����� ������ ������, ������������ �� "��": ', end='')
  for word in s:
    if word[:2].lower() == '��':
      for letter in word:
        if not letter.isalpha():
          break
        print(letter, end='')
      print(end=', ')

def task_4_2():
  s = '���;�������;���������_������ ���� ��������;23 ����;������� 3 �����_������ ���� ��������;22 ����;������� 2 �����'.split('_')
  for i in range(len(s)):
    s[i] = s[i].split(';')
    print("{0:25} {1:15} {2:15}".format(s[i][0], s[i][1], s[i][2]))

def task_4_3():
  s = "���;�������;���������_������ ���� ��������;23 ����;�n����� 3 �����_������ ���� ��������;22 ����;������� 2 �����_������ ���� ��������;22 ����;������� 2 �����_������ ������� ��������;23 ����;������� 3 �����_������ ��������� ����������;21 ���;������� 1 �����_������ ���� ��������;21 ���;������� 1 �����_������� ��������� ���������;23 ����;������� 3 �����_������ �������� ���������;21 ���;������� 2 �����".split('_')
  for i in range(len(s)):
    s[i] = s[i].split(';')
    if i == 0 or s[i][1] == '21 ���':
      print("{0:30} {1:15} {2:15}".format(s[i][0], s[i][1], s[i][2]))

def task_4_4():
  s = '''������-�������������� �������
����: ������� ���������� � ���������� ����������?�
������� ������������ �������� ������������ �����������������, � ����� � �������� ������ �������������� ��������� ������������ ��� �����-���� ������ �������������. �����, �� ����� ���������, ���������� ����, ��������� ������������ �������������� ����. �������������� ������ ������������� �������������� � ������ �������� ���. ��������, ��� ����� �������� � ������� �� ������ ����������� ����������, ��������� ��������� ���������. ��� �� �����, ������� ����� ���������� ����������� ����� ���������.

������� ��������� ����������� ������ �����������. ����������� ���������������. ��� ���������� � ������ �������� �������� ����������� ��������� ��. �������������� ������� �������������, � ������������ ������������, ��� ������ ��������� ��������� �����. ��������� ��������������, �������� � �������� ������������ ��������������, ��������������� ����������. ������� ���������� ������������� ������� - ��������� ���������� �������.

��� ������������ ����������� ���������� �������������� ����� ���������� ������������ ��������. ���������� ��������� ��������������� ���� �������. �������� ������� ���������� ���������� ��������. �������������� ������ ����������� ����������� �����, ��������, ��� � ����� ������� 3,26 �������� ����. ��������� ��������, �� ������ ������, �������� ������������� ������� ������.''' # ������.�������� ������� :D
  print('\n�����:\n', s, '\n����� ������:', len(s), '\n���������� ���� � ���:', len(s.split()))

def task_6_1():
  N = int(input('\n������� ����������� ��� ����� �������: '))
  S = 0
  print('��������������� �������:')
  matrix = []
  for i in range(N):
    matrix.append([])
    for j in range(N):
      matrix[i].append(randint(-100, 100))
      S += matrix[i][j]
      print(matrix[i][j], end=' ')
    print()
  print('����� ���� ��������� ������� �����', S)

def task_6_2():
  l = [randint(-100, 100) for i in range(10)]
  print('\n����������� ������:', l)
  i = 0
  while i < len(l):
    if l[i] % 2 == 0:
      del l[i]
    else:
      i += 1
  l.extend([42, 69])
  print('������ ����� ���������:', l)

def task_6_3():
  students = [['��-331101', ['������ ������', '��������� ����', '������ �������']], ['���-421102', ['��������� �������', '�������� ��������', '������� ���', '�������� �������', '��������� �����', '������ �������', '�������� ����', '�������� �����', '���������� �������']], ['��-331103', ['�������� ����', '������� �����', '�������� ��������', '��������� ������', '������� ������', '�������� ����', '������ ������']]]
  group = input('\n������� �������� ������: ')
  for i in students:
    if i[0] == group:
      print(group, ": ", end='')
      for student in i[1]:
        print(student, end=', ')
  print('\n\n����� ��������� ������ �������� ���� ����� ������ ����� ���!')

def task_6_4():
  students = [['��-331101', ['������ ������', '��������� ����', '������ �������']], ['���-421102', ['��������� �������', '�������� ��������', '������� ���', '�������� �������', '��������� �����', '������ �������', '�������� ����', '�������� �����', '���������� �������']], ['��-331103', ['�������� ����', '������� �����', '�������� ��������', '��������� ������', '������� ������', '�������� ����', '������ ������']]]
  print('\n������ ���������, � ������� � ������� ������� ����� 7 ����: ')
  for group in students:
    for student in group[1]:
      if student.find(' ') < 7:
        print(student, ', ������ - ', group[0], sep='')

while True:
  x = int(input('�������� ����� ������� (�� 1 �� 6, ����� 5) ��� 0, ���� �� ������ �� ����� �� ���������: '))
  if x == 0:
    print('������������ ����� �� ���������...')
    break
  elif x == 1:
    print('\n������� 1\n')
    y = int(input('0 - ����� �� ���������\n1 - ���������� �������� ������� �� ����������\n2 - ����� �������� ��������� ������ �� ��������\n3 - ����� ����� �� 1 �� 10 �� ������\n4 - ���������� �������� ������\n'))
    if y == 0:
      print('������������ ����� �� ���������...')
      break
    elif y == 1:
      task_1_1()
    elif y == 2:
      task_1_2()
    elif y == 3:
      task_1_3()
    elif y == 4:
      task_1_4()
    else:
      print('������������ ����� ������!')
  elif x == 2:
    print('\n������� 2 "������ � ������"\n')
    y = int(input('0 - ����� �� ���������\n1 - ���� ����� �� ��� ����������� � ���������\n2 - ����� ����� � ������ ������ 10 ��������\n3 - ����� N-���������� ������ �� \'R\'\n4 - �������� ����� ������, ��������� �� ���� ������ ������'))
    if y == 0:
      print('������������ ����� �� ���������...')
      break
    elif y == 1:
      task_2_1()
    elif y == 2:
      task_2_2()
    elif y == 3:
      task_2_3()
    elif y == 4:
      task_2_4()
    else:
      print('������������ ����� ������!')
  elif x == 3:
    print('\n������� 3 "�������"\n')
    y = int(input('0 - ����� �� ���������\n1 - ���������� ������ ��������� � �������\n2 - �������� �� ��������\n3 - �����������\n4 - �������� ���� ��������� �������\n5 - ������ ���� ��������� �� �������� �����, ������� ��\n6 - �������� �������� �� �������\n7 - �������� ������� �� �����\n8 - ����� ��������� ������ ������� � ��������'))
    if y == 0:
      print('������������ ����� �� ���������...')
      break
    elif y == 1:
      task_3_1()
    elif y == 2:
      task_3_2()
    elif y == 4:
      task_3_4()
    elif y == 5:
      task_3_5()
    elif y == 6:
      task_3_6()
    elif y == 7:
      task_3_7()
    elif y == 8:
      task_3_8()
    else:
      print('������������ ����� ������!')
  elif x == 4:
    print('\n������� 4 "������"\n')
    y = int(input('0 - ����� �� ���������\n1 - ���������� ����, ������������ �� "��"\n2 - ����� ���������� ����� �������\n3 - ����� ���������� ����� ������� � ��������\n4 - ������ ������ (�����, �������)'))
    if y == 0:
      print('������������ ����� �� ���������...')
      break
    elif y == 1:
      task_4_1()
    elif y == 2:
      task_4_2()
    elif y == 3:
      task_4_3()
    elif y == 4:
      task_4_4()
    else:
      print('\������������ ����� ������!')
  elif x == 6:
    print('\n������� 6 "������"\n')
    y = int(input('0 - ����� �� ���������\n1 - ������� ��� ������, ����� ���� � ���������\n2 - �������� � ���������� ��������� �������\n3 - ����� ���������� �� ������ � �������� �� ������\n4 - ����� ���������� �� ������ � �������� �� �������'))
    if y == 0:
      print('������������ ����� �� ���������...')
      break
    elif y == 1:
      task_6_1()
    elif y == 2:
      task_6_2()
    elif y == 3:
      task_6_3()
    elif y == 4:
      task_6_4()
    else:
      print('\������������ ����� ������!')
  else:
    print('\n������������ ������� ��������!\n')
  x = input('\n������� ���������� ���������� ���������? (������� ���� 1, ���� "yes", ���� "��", ���� "y") ')
  if not(x == '1' or (x.lower() in ['��', 'yes', 'y'])):
    print('������������ ����� �� ���������...')
    break