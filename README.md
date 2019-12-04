---
author:
- Nicolas Vadkerti
title: CR RKHUNTER
---

<https://github.com/SlaynPool/CR_Rkhunter->

Définitions
===========

Rootkit
-------

Un rootKit est un, ou plusieurs logiciels dont le but est de péréniser
un accés. Le plus souvent, il sert a dissimuler la porte ouverte sur une
machine une fois l'accés à celle-ci obtenue.

0days
-----

Une faille 0 days est un bug d'un logiciel qui laisse des failles sur
une machines. On l'appelle 0days car il n'est pas encore patché voir
connu par les dévellopeurs du logiciel. Les 0days sont donc très
dangereuse. De fait, quand une faille 0days est découverte, on ne peut
savoir depuis quand elle est realisable, ni si quelqu'un l'a exploité.
On peut citer Hearthbleed qui utiliser une faille OpenSSL comme exemple
d'ancienne faille 0 days qui à fais du bruit.

Virus
-----

s Le principe d'un virus Informatique est exactement le même q'un virus
Biologique. On peut donc le définir comme un programe qui à pour but de
se répliquer, souvent dans d'autres hôtes d'un réseau, dans le but de
prendre le controle des machines. L'utilisations peut etre par exemple
d'obtenir des bots pour des attaques par deni de service.

CVE
---

Common Vulnerabilities and Exposures Le CVE est un dictionnaire de
faille Informatique connu maintenue par le MITRE, un organisme publique
Americain. Ce dictionnaire sert de "norme " aux outils de sécurté comme
les antivirus par exemple.

La notion de Hash
-----------------

Le principe d'un hash, est simple à comprendre. L'idée est d'avoir un
algorithme qui prend un fichier quelconque en entrée, et renvoie une
signature de celui de taille constante et surout unique. L'idée est donc
de, ci je calcule le hash d'un fichier, si je modifie mon fichier, le
hash sera completement different. On peut donc s'assurer que personne
n'a modifier mon fichier grace à ce hash. Un algorithme de hashage n'est
plus considéré comme fiable, à partir du moment où pour deux fichiers
differents, nous somme capable de générer des hashs partiellement
similaires ou entierement similaires

Protection contre les Rootkit: le cas de rkhunter
=================================================

 Installation de rkhunter 
-------------------------

-   ``` {#commande/installRkhunter.txt .default caption="Installation de RKHUNTER" label="commande/installRkhunter.txt" style="Style1"}
    [slaynpool@MiniZbeub]~$ cd .env/build/
    [slaynpool@MiniZbeub]build$ cp ~/Telechargements/rkhunter-1.4.6.tar.gz .
    [slaynpool@MiniZbeub]build$ tar -xvf rkhunter-1.4.6.tar.gz
    ...
    [slaynpool@MiniZbeub]build$ cd rkhunter-1.4.6/
    [slaynpool@MiniZbeub]rkhunter-1.4.6$ su - root
    Mot de passe : 
    [root@MiniZbeub]/home/slaynpool/.env/build/rkhunter-1.4.6# ./installer.sh --install
    ```
