# cuckoo

## 实验目的

- 安装并使用cuckoo
- 任意找一个程序，在cuckoo中trace获取软件行为的基本数据。

## 实验过程

- 安装配置cuckoo
  - cuckoo sandbox仅完全支持python2.7

    ```bash
    sudo apt-get install python2.7
    sudo apt install python-pip
    sudo apt install python3-pip
    ```

  - 安装相关的包

    ```bash
    sudo apt-get install python python-pip python-dev libffi-dev libssl-dev
    sudo apt-get install python-virtualenv python-setuptools
    sudo apt-get install libjpeg-dev zlib1g-dev swig
    ```

  - 安装数据库

    ```bash
    sudo apt-get install mongodb
    sudo apt-get install mysql-server mysql-client libmysqlclient-dev
    sudo mysql_secure_installation
    mysql -uroot -p
    ```

  - 安装tcpdump

    ```bash
    sudo apt-get install tcpdump apparmor-utils
    sudo setcap cap_net_raw,cap_net_admin=eip /usr/sbin/tcpdump
    ```

  - 先使用pip安装好以下库，否则安装cuckoo时会报错

    ```bash
    pip install -U pip setuptools
    pip install pycrypto
    pip install pillow
    sudo apt-get install yara
    sudo apt-get install python-yara
    pip install yara
    pip install python-dev
    ```

  - 安装cuckoo并初始化cuckoo

    ```bash
    pip install -U cuckoo
    cuckoo init
    ```

  - 启动cuckoo

    ```bash
    . venv/bin/activate
    cuckoo
    ```

    ![ ](image\cuckoo启动.JPG)