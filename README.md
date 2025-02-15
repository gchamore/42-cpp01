# 🧠 C++ - Module 01

## 📝 Présentation

Le module **C++ 01** est une continuation du **Module 00**, abordant des notions plus avancées telles que l’**allocation mémoire, les pointeurs, les références et le switch statement**.  
Ce module vise à renforcer la compréhension des concepts fondamentaux de **C++98**, tout en explorant l’impact de l’allocation dynamique et des références sur la gestion de la mémoire.  

---

## 🛠️ Fonctionnalités

- **Exercice 00 : BraiiiiiiinnnzzzZ**
  - Implémentation d’une **classe Zombie** avec une méthode `announce()`.
  - Création de zombies sur **la stack et le heap** (`newZombie()` et `randomChump()`).
  - Gestion des **constructeurs et destructeurs**.

- **Exercice 01 : Moar brainz!**
  - Création d’une **horde de zombies**.
  - Allocation dynamique et gestion de **tableaux d’objets**.

- **Exercice 02 : HI THIS IS BRAIN**
  - Manipulation des **pointeurs et références** sur une chaîne de caractères.
  - Affichage des **adresses mémoire** et des valeurs correspondantes.

- **Exercice 03 : Unnecessary violence**
  - Implémentation des classes **Weapon, HumanA et HumanB**.
  - Gestion des références et pointeurs sur objets.

- **Exercice 04 : Sed is for losers**
  - Manipulation des fichiers en **C++** pour remplacer du texte.
  - Interdiction de `std::string::replace()`.

- **Exercice 05 : Harl 2.0**
  - Utilisation de **pointeurs vers fonctions membres**.
  - Automatisation des plaintes d'un personnage fictif `Harl`.

- **Exercice 06 : Harl filter**
  - Introduction au **switch statement**.
  - Filtrage des messages de `Harl` en fonction de leur niveau d’importance.

---

## 📌 Technologies Utilisées

- **C++ 98**  
- **Allocation dynamique (`new` / `delete`)**  
- **Pointeurs et références**  
- **Gestion des fichiers en C++**  
- **Switch statement et pointeurs sur fonctions**  

---

## 🏗️ Structure du Projet

📂 ex00  
┣ 📜 Makefile  
┣ 📜 Zombie.cpp  
┣ 📜 Zombie.hpp  
┣ 📜 main.cpp  
┣ 📜 newZombie.cpp  
┗ 📜 randomChump.cpp  

📂 ex01  
┣ 📜 Makefile  
┣ 📜 Zombie.cpp  
┣ 📜 Zombie.hpp  
┣ 📜 main.cpp  
┗ 📜 zombieHorde.cpp  

📂 ex02  
┣ 📜 Makefile  
┗ 📜 main.cpp  

📂 ex03  
┣ 📜 HumanA.cpp  
┣ 📜 HumanA.hpp  
┣ 📜 HumanB.cpp  
┣ 📜 HumanB.hpp  
┣ 📜 Makefile  
┣ 📜 Weapon.cpp  
┣ 📜 Weapon.hpp  
┗ 📜 main.cpp  

📂 ex04  
┣ 📜 Makefile  
┗ 📜 main.cpp  

📂 ex05  
┣ 📜 Harl.cpp  
┣ 📜 Harl.hpp  
┣ 📜 Makefile  
┗ 📜 main.cpp  

📂 ex06  
┣ 📜 Harl.cpp  
┣ 📜 Harl.hpp  
┣ 📜 Makefile  
┗ 📜 main.cpp  

---

## 🔥 Difficultés Rencontrées

- **Allocation et libération de mémoire** : Éviter les fuites mémoire avec `new` et `delete`.  
- **Différences entre stack et heap** : Comprendre quand utiliser l'un ou l'autre.  
- **Gestion des références et pointeurs** : Bien distinguer `&` et `*`.  
- **Manipulation de fichiers en C++** : Remplacer du texte sans utiliser `std::string::replace()`.  
- **Utilisation de pointeurs sur fonctions** : Implémenter `Harl 2.0` sans `if/else`.  
- **Découverte du `switch statement`** : Utilisé dans `Harl filter`.  

---

## 🏗️ Mise en place

1. **Cloner le dépôt** :
  ```bash
  git clone https://github.com/ton-repo/cpp01.git
  ```

**Exercice 00** : 
   ```bash
   cd ex00
   make
   ./zombie
   make fclean
   ```

**Exercice 01** :
  ```bash
   cd ex01
   make
   ./zombieHorde
   make fclean
   ```

**Exercice 02** :
   ```bash
   cd ex02
   make
   ./brain
   make fclean
   ```

**Exercice 03** :
   ```bash
   cd ex03
   make
   ./violence
   make fclean
   ```

**Exercice 04** :
   ```bash
   cd ex04
   make
   ./sed input.txt s1 s2
   make fclean
   ```

**Exercice 05** :
   ```bash
   cd ex05
   make
   ./harl
   make fclean
   ```

**Exercice 06** :
   ```bash
   cd ex06
   make
   ./harlFilter "WARNING"
   make fclean
   ```

---

## 👨‍💻 Équipe  

👤 Grégoire Chamorel (Gchamore)  

---

## 📜 Projet réalisé dans le cadre du cursus 42.  

Tu peux bien sûr modifier ce README selon tes besoins, ajouter plus de détails sur ton approche et des instructions d’installation précises. 🚀  
