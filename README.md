# Merilec-razdalje
Ta projekt implementira merilno napravo za razdaljo z uporabo ultrazvočnega senzorja HC-SR04 in Arduino Uno R3.
Deluje na principu HC-SR04 ultrazvočnega senzorja, ki pošilja ultrazvočne valove in meri čas, ki ga valovi potrebujejo, da pridejo do površine predmeta in nazaj. Ta čas se nato uporabi za izračun razdalje od objekta. Izpisana vrednost je v centimetrih. Ohišje je 3D tiskano in naprava kot taka bo lahko delovala na baterijskem ali USB napajanju.

# Komponente:
 -Arduino Uno R3
 -HC-SR04 Ultrazvočni senzor
 -Jumper kabli (ženski in moški)
 -USB kabel
 -LCD zaslon
 -Upor 220e

# Slika vezave
![image](https://github.com/user-attachments/assets/0b1e48a8-dce1-4598-853d-a25fab3468f7)

# Posnetek delovanja
https://drive.google.com/file/d/1RGLjEy5seoJhz0hzi06T_8WbxZ_zJ9CN/view?usp=drive_link

# Končne slike izdelka
![PXL_20250616_054105738 MP](https://github.com/user-attachments/assets/cb8bddcf-9a32-4e77-9a36-635dc3fffa8b)
![PXL_20250616_054108971](https://github.com/user-attachments/assets/0c2fdd99-f647-480a-a84a-6aaf1151826d)
![PXL_20250616_054111631](https://github.com/user-attachments/assets/75d52141-531c-48fa-a2f8-f2b33621c5a0)
![PXL_20250616_054115715](https://github.com/user-attachments/assets/88f13c3e-9acd-4179-8ee0-e00bfcc61448)

# Komentar na delovanje
Merilna naprava razdalje uporablja ultrazvočni senzor HC-SR04, povezan z Arduinom Uno R3, in LCD zaslon za izpis razdalje v centimetrih. Deluje tako, da pošlje ultrazvočni impulz in izračuna razdaljo z osveževanjem vsakih 100 ms.
Prednosti: Enostavna zasnova, prenosno 3D-tiskano ohišje, podpora za baterijsko/USB napajanje, primerna za izobraževalne namene.
Omejitve: Brez temperaturne kompenzacije, utripanje zaslona zaradi lcd.clear(), brez povprečenja/filtriranja, omejen razpon (2 cm–2 m) in slaba delovanja na mehkih površinah.
Naprava je zanesljiva za osnovne aplikacije v zaprtih prostorih.
Ocena natančnosti delovanja
Umerjanje 16.6.2025 pri 27,1 °C z merilnim trakom "Mater 3 m" (±1 mm) kaže:
Specifikacije HC-SR04: Razpon 2–400 cm, natančnost ±3 mm.
Analiza: Največja absolutna napaka 5 cm (pri 10 cm in 200 cm), največja relativna napaka 25 % (pri 10 cm), povprečna absolutna napaka ~3,3 cm, povprečna relativna napaka ~8,5 %. Napake so večje pri krajših razdaljah (do 25 %) in manjše pri daljših (2 % pri 180–200 cm).
Primerjava: HC-SR04 odstopa do 5 cm, kar je slabše od traku (±1 mm), zlasti do 50 cm (10–25 % napaka).
Vpliv okolja: Temperatura 27,1 °C poveča hitrost zvoka, a koda ne kompenzira, kar povzroča previsoke napake meritev (npr. 27 cm pri 30 cm). Širok stožec (15°) moti pri majhnih razdaljah.
Zaključek: Natančnost ±5 cm (25 % relativna napaka), najboljša pri 180–200 cm (2 %), slabša pod 50 cm (>10 %). Brez kompenzacije je omejena pri kratkih razdaljah.
Predlagane izboljšave
Temperaturna kompenzacija: Dodatek temperaturnega senzorja in prilagoditev hitrosti zvoka.
Povprečenje meritev: Uporaba povprečja 5 meritev za stabilnost.
Optimizacija LCD: Nadomestiev lcd.clear() z setCursor() in presledki za manj utripanja.
Filtriranje: Dodek median filtra za odstranitev šuma.
Kalibracija: Možnost vnosa referenčne razdalje prek serijskega vmesnika.
Strojna oprema: Dodatek omejevalnika stožca.
Alternativa: Uporaba laserskega senzorja za večjo natančnost.
Funkcije: Dodatek Bluetooth modula in prikaz temperature.

Zaključek
Naprava je uporabna za osnovne aplikacije z natančnostjo ±5–10 mm v idealnih pogojih. Z temperaturno kompenzacijo, povprečenjem in kalibracijo je mogoče doseči ±3–5 mm. Nadgradnja na laserski senzor je priporočljiva za višjo natančnost.
Izračunov komponent vezja nimava, saj ni jih nisva potrebovala.

