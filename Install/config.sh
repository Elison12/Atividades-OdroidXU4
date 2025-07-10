#!/bin/bash

echo "Iniciando a instalação e configuração de pacotes..."

echo "Instalando software-properties-common..."
sudo apt install -y software-properties-common

echo "Adicionando o PPA hardkernel/ppa..."
sudo add-apt-repository ppa:hardkernel/ppa -y

echo "Atualizando a lista de pacotes..."
sudo apt update

# Instalação dos pacotes odroid-wiringpi, libwiringpi-dev e build-essential
echo "Instalando odroid-wiringpi, libwiringpi-dev e build-essential..."
sudo apt install -y odroid-wiringpi libwiringpi-dev build-essential

echo "Configuração e instalação de pacotes concluídas!"

# chmod +x config_odroid.sh
# ./config_odroid.sh