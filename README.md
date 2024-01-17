# mrowka-langtona

    Zasady:
Mrówka chodzi po dwuwymiarowej siatce. Może poruszać się w jednym z 4-ech kierunków (góra, dół, lewo, prawo), zgodnie z następującymi zasadami:​
    * Mrówka znajduje się w komórce białej, wykonuje: obrót o 90 stopni w prawo, zmienia kolor komórki na przeciwny,  przesuwa się o jedną komórkę do przodu​.
    * Mrówka znajduje się w komórce czarnej, wykonuje: obrót o 90 stopni w lewo, zmienia kolor komórki na przeciwny,  przesuwa się o jedną komórkę do przodu​.


    Działanie programu:
Program symuluje mrówkę Langtona i zapisuje kaądą iteracje w pliku.


    Argumenty:
-m <liczba wierszy>                     (wymagany)       Warunki: m > 0
-n <liczba kolumn>                      (wymagany)       Warunki: n > 0
-i <liczba iteracji>                    (wymagany)       Warunki: i > 0
-r <kierunek starowy>                   (niewymagany)    Oznaczenia: 0 - gora, 1 - dol, 2 - prawo, 3 - lewo
-p <przedrostek plikow>                 (niewymagany)
-z <zapelnienie czarnymi procentowo>    (niewymagany)    Warunki 0 <= z <= 100
-x <poczatkowa pozycja mrowki X>        (niewymagany)    Warunki 0 <= x < N
-y <poczatkowa pozycja mrowki Y>        (niewymagany)    Warunki 0 <= y < M