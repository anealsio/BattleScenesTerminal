from personagens import Personagem, Demolidor_v4
import random

dv41 = Demolidor_v4("Demolidor","Matthew Michael Murdock","Tentáculo","Vilão",4,4)
dv42 = Demolidor_v4("Demolidor","Matthew Michael Murdock","Tentáculo","Vilão",4,4)

deck1 =  [dv41,dv42]
random.shuffle(deck1)

dv41.cartas_vida = ["facção mortal","demolidor v3","cetro de watoomb","tiro incapacitante"]
dv42.cartas_vida = ["elektra v2", "portico","sincronismo","emissario"]

for i in deck1:
    print("______________________")
    print (" {} v{} ".format(i.nome_carta,i.versao))
    print("----------------------")
    for j in i.cartas_vida:
        print ( j )
    print("______________________")

dv41.justica_sombria(dv42)

for i in deck1:
    print("______________________")
    print (" {} v{} ".format(i.nome_carta,i.versao))
    print("----------------------")
    for j in i.cartas_vida:
        print ( j )
    print("______________________")