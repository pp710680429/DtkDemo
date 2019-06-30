# DtkDemo

    这个样例是用Dtk来制作deepin UI的。
    如果你想使用Dtk开发程序，但是又不知道怎样入手的话，你可以克隆这个项目，直接在上面开发。这个样例十分的简单，但是却已经配置好了Dtk相关的类，可以直接使用！

---
## 说明

### DtkDemo.pro
    修改 TARGET = DtkDemo 为你自己的项目名[ TARGET = DtkDemo ---> TARGET = 你自己的项目名]


### main.cpp
    在main.cpp中，你可以修改软件名称，增加你自己的专属Log（a.setProductIcon(QIcon":/images/icon.svg"));  //设置Logo）

### mainwindow.cpp
    在这儿，你可以设置程序的图标，设置窗口大小 

### widget.cpp/widget.h/widget.ui
    这三个文件是界面文件，你对程序和各种功能的实现和界面设计，应该在这儿进行操作。
    在此demo中，我在界面(widget.ui)中加入了一个QLable、QPushButton和QTextEdit。
    你可以在widget.h和widget.cpp中实现具体的功能。
    
---
## MIT 协议
---

## 开发平台和依赖说明
    开发平台：deepin 15.10.1
    Qt版本：Qt 5.7.1

    依赖：
    sudo apt-get install libdtkwidget-dev libdtkcore-dev dh-make
    sudo apt-get install libdframeworkdbus-dev libqrencode-dev libzbar-dev libdtkwm-dev libdtkcore-bin  libqtshadowsocks-dev fakeroot
