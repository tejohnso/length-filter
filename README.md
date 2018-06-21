## FLEN - Length filter for STDIN

### Overview

FLEN will read STDIN and output newline delimited words to stdout if
they pass the length requirements. The first parameter is the minimum word length and the second parameter is the maximum length.

For example:

``` bash
> echo "house" |flen 5
house

> echo "house" |flen 7
```

### Installation

#### AUR

Download [the AUR snapshot](https://aur.archlinux.org/cgit/aur.git/snapshot/flen.tar.gz) then extract and build:

``` bash
curl -s "https://aur.archlinux.org/cgit/aur.git/snapshot/flen.tar.gz" |tar xz --directory=/tmp
cd /tmp/flen
makepkg
sudo pacman -U flen[tab]
```

#### SNAP

``` bash
sudo snap install flen
```

### Compilation from source

``` bash
g++ -std=c++17 -O3 -Wall -o flen flen.cpp dictionary.cpp
```
