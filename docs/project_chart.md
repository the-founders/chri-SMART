# chri-SMART
[스마트시티 만들기 키트](http://bplab.kr/shop_view/?idx=154)를 활용하여 크리스마스의 주제로 제작한 경북대학교 센트럴 파크

---

## Table of Contents
* [General Info](#general-information)
* [Technologies Used](#technologies-used)
* [Features](#features)
* [Setup](#setup)
* [Usage](#usage)
* [Project Status](#project-status)
* [Acknowledgements](#acknowledgements)


## General Information
- IoT를 활용한 크리스마스의 공원을 모형으로 구현했다. 
- 2022 2학기 경북대학교 기초창의공학설계 수업에서 진행한 프로젝트이다.
- IoT를 실생활에 접목 시킨 모형 작품을 만들고자 하여 진행했다.


## Technologies Used
- Arduino IDE - version 2.0.1
- hd44780 - version 1.3.2
- DHT sensor library - version 1.4.4


## Features
- 현재 기온 및 습도를 알려주는 전광판
- 사람이 지나갈 때 더 밝아지는 스마트 가로등
- 미디어 아트
    - 반복적으로 움직이는 산타
    - 소리 감지 시, 불이 켜지는 트리
    - 접근 감지 시, 코가 밝아지는 루돌프


## Setup
1. 아두이노 IDE를 설치한다.
2. hd44780 라이브러리를 설치한다.
3. DHT sensor library 라이브러리를 설치한다.
4. 아두이노를 연결한다.
5. 코드를 업로드한다.


## Usage
- 날씨 전광판
    - 전원 연결 시, 따로 건드리지 않아도 현재 기온과 습도를 알려주는 전광판이 작동한다.

- 스마트 가로등
    - 손가락 또는 물체를 가로등에 가까이 접근하면 가로등이 더욱 밝아진다.
    - 가로등에서 손가락 또는 물체를 떼면 가로등이 약간 어두워진다.
    - 가로등의 기본 목적에 맞게 평소에는 약하게 빛나는 상태로 유지되다가, 사람이 지나가면 밝아지는 기능을 구현했다.

- 움직이는 산타
    - 전원 연결 시, 산타가 반복적으로 움직인다.

- 불이 켜지는 트리
    - 소리를 감지하면 트리의 불이 더 밝아진다.

- 코가 밝아지는 루돌프
    - 루돌프에 손가락을 가까이 접근하면 코가 밝아진다.


## Project Status
Project is: _complete_


## Acknowledgements
- [[아두이노] 아두이노로 I2C LCD 다양하게 제어하기](https://youtu.be/rHWgC55VhiQ)
- [[아두이노] 초음파센서로 거리 측정하여 LED 제어하기](https://youtu.be/JqOR2UOKBSw)
- [[아두이노] DHT11 온·습도 센서로 온도와 습도 측정하기 with LCDI2C](https://youtu.be/e10dHVRLWZk)
- [[아두이노 강좌] 14. 아두이노로 서보모터 제어하기](http://wiki.vctec.co.kr/opensource/arduino/servocontrol)


#
Created by [@the-founders](https://github.com/the-founders)