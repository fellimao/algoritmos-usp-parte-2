# -*- coding: utf-8 -*-
"""while.ipynb

Automatically generated by Colaboratory.

Original file is located at
    https://colab.research.google.com/drive/1LESnxWC42BJqwv-aCt1c8_1_l_T_eZL0
"""

x = int (input("Insira o número que deseja calcular a tabuada:"))
i = 0

while (i<10):
  i= i+1
  result = x*i
  print(x ,"x", i ,"=", result)

numHab = int (input("Insira a quantidade de habitantes que você deseja inserir as informações:"))
cont = 0 
npessoas = 0
ant = 0
i = 0
salarioant = 0


while (cont<numHab): 
  salario = float (input("Insira o salário do habitante:"))
  if salario > salarioant and salario > maiorsalario:
    maiorsalario = salario
  elif maiorsalario < salario and salario < salarioant:
    maiorsalario= salarioant
  else:
    maiorsalario = maiorsalario
  salarioant=salario
  medsalario = salario + ant
  ant = medsalario
  numfilhos = int (input("Insira o numero de filhos do habitante:"))
  mednumfilhos = numfilhos+i
  i = mednumfilhos
  if salario<=100.00:
    npessoas=1+npessoas
  
  cont=cont+1

print("A media do salario dos habitantes é:", medsalario/numHab)
print("Media do numero de filhos é:", mednumfilhos/numHab)
print("O maior salário é:", maiorsalario)
print("O percentual de pessoas com salário até R$100.00 é:", npessoas/numHab)

i = 1
quantidade = 0

while i<=5: #enquanto o contador for >= 5, ele pede para o usuário inserir um número e posteriormente imprime a quantidade de números negativos inseridos
  numero = float (input("Insira o número"))
  if numero < 0: #Se o número digitado for menor que 0, ou seja negativo, ele soma 1 ao contador de quantidade 
    quantidade = quantidade + 1
  i=i+1
  print("A quantidade é", quantidade)

vini = 1.50
math = 1.10
ano = 0

while math < vini:
  vini = vini + 0.02
  math = math + 0.03
  ano = ano + 1

print("Vai demorar ", ano, "para que Matheus seja maior que Vinicius")

n = 1

while n >=1:
  n = int (input("Insira um número positivo para calcular o produto ou a soma, caso deseje sair insira 0 ou um número negativo: "))

  if n >= 1:
    if n%2 == 0:
      soma = n + n
      print("A soma do número par é: ", soma)
    else: 
      prod = n * n
      print("O produto do número impar é: ", prod)
  else:
    print("Programa terminado")