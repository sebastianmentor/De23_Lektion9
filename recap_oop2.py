class Person:
    def __init__(self, ålder, namn, längd) -> None:
        self.ålder = ålder
        self.namn = namn
        self.längd = längd
        self.skostorlek = None

    def skriv_ur_personinformation(self):
        print(f'Mitt namn är {self.namn} och jag är {self.ålder} gammal och {self.längd} cm lång!')

    def __str__(self):
        return f'Mitt namn är {self.namn} och jag är {self.ålder} gammal och {self.längd} cm lång!'

sebastian = Person(34, 'Sebastian', 180)
if __name__=='__main__':
    sebastian = Person(34, 'Sebastian', 180)
    print(sebastian.längd)
    print(sebastian.ålder)
    print(sebastian.namn)
    if sebastian.skostorlek == None:
        storlek = int(input('Skriv in din skostorlek: '))
        sebastian.skostorlek = storlek
    print(sebastian.skostorlek)

    text_om_mig = str(sebastian)
    # sebastian.skriv_ur_personinformation()
    print(text_om_mig)