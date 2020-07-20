# Klee

## 实验目的

- 安装KLEE，完成官方[tutorials](https://klee.github.io/tutorials/testing-function/)。至少完成前三个，有时间的同学可以完成全部一共7个。

## 实验过程

- 安装klee
  - 安装docker

    ```bash
    sudo apt-get update
    sudo apt-get install -y apt-transport-https ca-certificates curl software-properties-common
    curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add -
    sudo add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu $(lsb_release -cs) stable"
    sudo apt-get update
    sudo apt-get install -y docker-ce
    systemctl status docker 
    ```

    ![ ](image\docker安装.JPG)
  - 用docker安装klee

    ```bash
    sudo docker pull klee/klee:2.0
    ```

  这步换了四五个国内镜像试了大概有几十次，总是提示time out无法成功 ，导致实验失败，解决方法是通过科学上网直接从源下载，会在两天之内想办法解决重新上传