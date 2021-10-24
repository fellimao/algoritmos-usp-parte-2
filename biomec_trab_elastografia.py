# -*- coding: utf-8 -*-
"""
Created on Wed Oct  7 15:12:57 2020

@author: Gabriel e Isabela
"""

import pandas as pd #pandas serve para carregar os dados em csv
import numpy as np #manipular matrizes
import matplotlib.pyplot as plt #mostrar as imagens
from scipy.interpolate import griddata
from sympy import *

#read the csv file (put 'r' before the path string to address
#any special characters in the path, such as '\').

#Ler dados de coordenadas
coord_aux = pd.read_csv (r'coord_data.txt') #3 colunas: 0,1,2
coord = np.array(coord_aux) #transformar esses dados em array
coord_xy = np.array ([coord[:,1], coord[:,2]])#a primeira coluna é a relação apenas
coord_xy_t = np.transpose(coord_xy)

#Tamanho do phantom, e.g. 100 x 100 mm grid com espaçamento de 0.5 mm
xi = np.linspace(0.0, 100.0, num = 500) #gerar um vetor
yi = np.linspace(0.0, 100.0, num = 500) #gerar um vetor

#https://numpy.org/doc/stable/reference/generated/numpy.meshgrid.html
XI, YI = np.meshgrid(xi, yi)  #juntar os vetores e criar uma matriz

#Ler dados de deslocamento
data_aux = pd.read_csv (r'disp_2.txt'); #uma coluna de valores
data = np.array(data_aux) #transformar em array
#data.ndim
#data.shape

#https://docs.scipy.org/doc/scipy/reference/generated/scipy.interpolate.griddata.html
ZI = griddata(coord_xy_t, data, (XI, YI), method='linear') #distribuir os dados na imagem
#como vou colocar 250000 elementos em 61569 pontos, é necessário fazer a interpolação
ZI_image = np.array(ZI[:,:,0])
ZI_image = np.gradient(ZI_image,axis = 0) #gradiente = derivada
imgplot = plt.imshow(ZI_image)

plt.colorbar();
plt.show()

