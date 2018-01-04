from dano import Dano

class Personagem:

    nome_carta = ""
    versao = 0
    alterego = ""
    afiliacao = ""
    nome_alinhamento = ""
    capacitacao_atual = 1
    vida_inicial = 0
    cartas_vida = []
    def __init__(self,personagem,ego,afi,ali,vi,ver):
        self.nome_carta = personagem
        self.alterego= ego
        self.afiliacao = afi
        self.alinhamento = ali
        self.vida_inicial = vi
        self.versao = ver

class Demolidor_v4(Personagem):
    def __init_(self):
        super().__init__()
    def justica_sombria(self,alvo):
        self.capacitacao_atual+=1
        alvo1 = Dano.escolher_carta(self,alvo)

        print("Demolidor usou Justiça sombria e causou 1 ponto de dano penetrante em {}".format(alvo.nome_carta))
        print("Tirando assim: {}".format(alvo.cartas_vida.pop(alvo1)))
        input()
    @property
    def redutor(self,personagem):
        if personagem.afiliacao == "tentaculo":
            return -1
        return 0
class Emissario(Personagem):
    def __init__(self):
        super().__init__()
    def texto(self,marc,deck):
        if marc == 1:
            print(deck.pop())
            print(deck.pop())
            carta = input("> ")
            
