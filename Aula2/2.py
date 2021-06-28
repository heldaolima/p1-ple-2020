class Carro:
    
    def __init__(self, ano, estado, quilometragem):
        self.ano = ano
        self.estado = estado
        self.quilometragem = quilometragem
    
    def anda(self, km):
        print(f'Andou {km:.2f} km')
        self.quilometragem += km
        return self.quilometragem

carro1 = Carro(2010, 'novo', 53400.23)
print(carro1.anda(43))
num1 = input().split()
print(num1)
for i, x in enumerate(num1):
    
print(num1)