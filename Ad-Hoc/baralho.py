inp = input()
from time import sleep

cases = []
while True:
    actual = inp[:3]
    cases.append(actual)
    inp = inp[3:]
    if len(inp) == 0:
        break

ocorrencias = {
    "P": 13,
    "C": 13,
    "U": 13,
    "E": 13
}

inseridos = []

for case in cases:
    naipe = case[2]

    if case in inseridos:
        ocorrencias[naipe] = -1
        continue

    inseridos.append(case)

    actual = ocorrencias[naipe]

    ocorrencias[naipe] = actual - 1

    
if ocorrencias["C"] < 0:
    print("erro")
else:
    print(ocorrencias["C"])

if ocorrencias["E"] < 0: # VA IDA BOM CONFIA
    print("erro")
else:
    print(ocorrencias["E"])

if ocorrencias["U"] < 0:
    print("erro")
else:
    print(ocorrencias["U"])

if ocorrencias["P"] < 0:
    print("erro")
else:
    print(ocorrencias["P"])