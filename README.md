# Mrówka Langtona

## Zasady

Mrówka Langtona porusza się po dwuwymiarowej siatce, przyjmując jedno z czterech możliwych kierunków (góra, dół, lewo, prawo). Ruchy mrówki regulowane są przez następujące zasady:

- Jeśli mrówka znajduje się w komórce białej, wykonuje następujące operacje:
  
  I. Obrót o 90 stopni w prawo.
  
  II. Zmiana koloru komórki na przeciwny.
  
  III. Przesunięcie się o jedną komórkę do przodu.
  

- Jeśli mrówka znajduje się w komórce czarnej, wykonuje następujące operacje:
  
  I. Obrót o 90 stopni w lewo.
  
  II. Zmiana koloru komórki na przeciwny.
  
  III Przesunięcie się o jedną komórkę do przodu.
  

## Działanie programu

Program symuluje mrówkę Langtona i zapisuje każdą iterację w pliku.

## Argumenty

- `-m <liczba wierszy>` (wymagany): Liczba wierszy siatki. Warunki: m > 0.

- `-n <liczba kolumn>` (wymagany): Liczba kolumn siatki. Warunki: n > 0.

- `-i <liczba iteracji>` (wymagany): Liczba iteracji symulacji. Warunki: i > 0.

- `-r <kierunek startowy>` (niewymagany): Kierunek startowy mrówki. Oznaczenia: 0 - góra, 1 - dół, 2 - prawo, 3 - lewo.

- `-p <przedrostek plików>` (niewymagany): Przedrostek nazw plików wynikowych.

- `-z <zapelnienie czarnymi procentowo>` (niewymagany): Procentowe zaplanowanie komórek czarnych. Warunki: 0 <= z <= 100.

- `-x <początkowa pozycja mrówki X>` (niewymagany): Początkowa pozycja mrówki wzdłuż osi X. Warunki: 0 <= x < n.

- `-y <początkowa pozycja mrówki Y>` (niewymagany): Początkowa pozycja mrówki wzdłuż osi Y. Warunki: 0 <= y < m.

**Kompilacja:**
```bash
make
```

**Przykładowe użycie:**
```bash
mrowka -m 10 -n 10 -i 1000 -r 0 -p langton -z 30 -x 5 -y 5

