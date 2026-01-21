# 🧠 CPP Module 06 — École 42

> **Objectif du module :**  
> Approfondir la compréhension des **casts en C++**, de la **conversion de types**, du **polymorphisme** et de la **robustesse du code** face à des données imprévisibles.

---

## 📌 Présentation

Le **CPP Module 06** fait partie du cursus C++ de l’école 42.  
Ce module m’a permis de consolider ma maîtrise du **système de types du C++** et d’acquérir une meilleure compréhension des mécanismes internes du langage, notamment en lien avec la mémoire et le polymorphisme.

L’accent est mis sur l’écriture d’un code **sûr**, **rigoureux** et **maintenable**, respectant les bonnes pratiques du C++ moderne tout en restant conforme à la norme imposée par 42.

---

## 📂 Structure du projet

CPP06/
├── ex00/ # Scalar Conversion
├── ex01/ # Serialization
├── ex02/ # Identify Real Type
└── README.md


---

## 🧪 Détail des exercices & compétences acquises

---

### 🔹 ex00 — Scalar Conversion

**Description :**  
Conversion d’une chaîne de caractères vers différents types scalaires (`char`, `int`, `float`, `double`) en prenant en compte tous les cas limites possibles.

**Compétences développées :**
- Compréhension approfondie des **conversions de types**
- Utilisation maîtrisée des **casts explicites** (`static_cast`)
- Gestion des **erreurs**, des **overflows** et des valeurs spéciales (`nan`, `+inf`, `-inf`)
- Écriture de code **robuste face aux entrées utilisateur**
- Respect strict des formats d’affichage et de la précision

> 💡 Cet exercice m’a appris à anticiper les comportements indéfinis et à sécuriser les conversions, une compétence essentielle en environnement professionnel.

---

### 🔹 ex01 — Serialization

**Description :**  
Sérialisation et désérialisation d’un pointeur via un type entier (`uintptr_t`) sans altérer les données.

**Compétences développées :**
- Compréhension du **fonctionnement bas niveau du C++**
- Manipulation avancée des **pointeurs**
- Utilisation du `reinterpret_cast`
- Différence entre **représentation mémoire** et **abstraction**
- Approche rigoureuse de la gestion mémoire

> 💡 Ce projet m’a permis de mieux comprendre comment le C++ manipule les adresses mémoire et comment transférer des données de manière sûre.

---

### 🔹 ex02 — Identify Real Type

**Description :**  
Identification dynamique du type réel d’un objet à partir d’un pointeur ou d’une référence sur une classe de base.

**Compétences développées :**
- Maîtrise du **polymorphisme**
- Utilisation du `dynamic_cast`
- Compréhension du **RTTI (Run-Time Type Information)**
- Différence entre cast sur **pointeur** et sur **référence**
- Conception orientée objet claire et extensible

> 💡 Cet exercice m’a permis de comprendre concrètement le fonctionnement du polymorphisme en C++ et son impact à l’exécution.

---

```bash


🚀 Compétences globales acquises (orientation CV)

    Maîtrise avancée du système de types en C++

    Compréhension approfondie des différents types de cast

    Écriture de code robuste, fiable et sécurisé

    Meilleure lecture et compréhension de code C++ complexe

    Approche plus rigoureuse de la programmation orientée objet

🏁 Conclusion

Le CPP Module 06 m’a permis de franchir un cap important dans ma compréhension du langage C++.
Il m’a appris à manipuler les types et la mémoire avec précision, à éviter les pièges classiques du langage et à écrire un code plus fiable, directement exploitable dans un contexte professionnel.
