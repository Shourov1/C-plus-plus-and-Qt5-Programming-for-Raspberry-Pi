# Introduction to C++ and Qt5 for Raspberry Pi

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

I have done some projects using [C++](https://en.wikipedia.org/wiki/C%2B%2B) and [Qt5](https://doc.qt.io/qt-5/qt5-intro.html) with [Raspberry Pi](https://www.raspberrypi.org/products/raspberry-pi-3-model-b/)

## How to start

To install WiringPi library to use the GPIO pins of Raspberry Pi.

```bash
git clone git://git.drogon.net/wiringPi
cd wiringPi/
git pull origin
./build
```
To see the Raspberry Pi GPIO pins details.

```bash
gpio readall
```
To install Qt5.

```bash
sudo apt-get update
sudo apt-get upgrade
sudo apt-get install qt5-default
sudo apt-get install qtcreator
sudo apt-get install qtdeclarative5-dev
sudo apt-get install qtbase5-examples
sudo apt-get install qtbase5-doc-html
```


## Built With
* [Raspberry Pi 3b](https://www.raspberrypi.org/products/raspberry-pi-3-model-b/).
* [Qt5](https://doc.qt.io/qt-5/qt5-intro.html).
* [Os for the Pi (NOOBS)](https://www.raspberrypi.org/downloads/).

## Author

* **Md Shariful Alam** - [Shariful](https://github.com/Shourov1)

## Acknowledgments

* **[Barbara Hohensee](https://www.udemy.com/introduction-to-cplusplus-and-qt5-programming-for-raspberry-pi/learn/lecture/6412938#overview) - for providing the Course on [Udemy](https://www.udemy.com/).
