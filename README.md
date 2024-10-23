# Equipe
- Allan
- Ana Júlia Pereira Corrêa
- Júlio Melo Campos
- Ricardo Braz
- Nilton da Silva

# Como compilar
- Tenha instalado o Visual Studio de acordo com esse tutorial -> https://www.youtube.com/watch?v=zv8DkkhBNR0
- Compile o projeto no arquivo IMPACTLAB_form.h
- Selecione uma imagem e aplique o filtro

import numpy as np
import matplotlib.pyplot as plt
import control as ctrl

# Definindo a função de transferência
numerador = [1]  # Coeficientes de s + 2
denominador = [1, 2, 2, 0]  # Coeficientes de s^2 + 10s

G = ctrl.TransferFunction(numerador, denominador)

# Gerando o Root Locus
#real, imag, gain = ctrl.root_locus(G, k=None, Plot=True)
ctrl.root_locus(G)

# Personalizando o gráfico
plt.title('Root Locus de G(s) = 1 / (s(s + 2s + 2))')
plt.xlabel('Parte Real')
plt.ylabel('Parte Imaginária')
plt.grid()
plt.axhline(0, color='black', lw=0.5)
plt.axvline(0, color='black', lw=0.5)
plt.axis('equal')

# Mostrando o gráfico
plt.show()

<img src="/Images/image.png" alt="exemplo">
