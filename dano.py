class Dano:
    def escolher_carta(self,personagem,dano):
        if dano:
            print("Escolha uma carta:")
            for nume in range(len(personagem.cartas_vida)):
                print("{}. {}".format(nume,personagem.cartas_vida[nume]))
            num = input(">>>")
            return int(num)
    def checar_redutor(self,personagem, dano, redutor=0):
        if redutor in personagem:
            dano -= redutor
