class Dano:
    def escolher_carta(self,personagem):
        print("Escolha uma carta:")
        for nume in range(len(personagem.cartas_vida)):
            print("{}. {}".format(nume,personagem.cartas_vida[nume]))
        num = input(">>>")
        return int(num)