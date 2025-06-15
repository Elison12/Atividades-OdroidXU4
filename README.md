
# Atividades laboratóriais com ODROID-XU4 

Repositório destinado a compartilhar roteiros e atividades que podem ser realizadas com a placa ODROID-XU4 em disciplinas de caracter prático em cursos de graduação em Computação.


# Instalação de Sistema Operacional
## Instalação de SO Linux/Android no ODROID-XU4 usando balenaEtcher

Esta seção explica como instalar um sistema operacional Linux ou Android no seu **ODROID-XU4** utilizando o **balenaEtcher**, uma ferramenta simples e eficaz para gravar imagens em cartões microSD ou eMMC.

## Pré-requisitos
- **ODROID-XU4**  
- **Cartão microSD ou módulo eMMC** (recomendado mínimo 16GB para melhor desempenho)  
- **Computador com Windows, macOS ou Linux**  
- **Cabo USB ou leitor de cartões**  
- **Imagem do sistema desejada** (ex: Ubuntu, Android, DietPi, Armbian, etc.)  
  - *Links para imagens oficiais:*  
    - [Hardkernel (ODROID-XU4)](https://wiki.odroid.com/odroid-xu4/os_images/os_images)  
    - [Armbian](https://www.armbian.com/odroid-xu4/)  
    - [DietPi](https://dietpi.com/)  

## Passo a Passo: Gravação da Imagem com balenaEtcher

### 1. Baixe e instale o balenaEtcher
- Acesse o site oficial: [https://www.balena.io/etcher/](https://www.balena.io/etcher/)  
- Faça o download da versão compatível com seu sistema operacional (Windows, macOS ou Linux).  
- Instale o programa seguindo as instruções do instalador.  

### 2. Prepare a imagem do sistema
- Baixe a imagem do sistema (`.img` ou `.iso`) desejada para o ODROID-XU4.  
- Extraia o arquivo (geralmente compactado em `.zip` ou `.gz`) se necessário.  

### 3. Conecte o cartão microSD/eMMC ao computador
- Insira o cartão microSD no leitor ou conecte o módulo eMMC via adaptador USB.  
- Certifique-se de que não há dados importantes no cartão, pois **todos os dados serão apagados**.  

### 4. Grave a imagem usando balenaEtcher
1. Abra o **balenaEtcher**.  
2. Clique em **"Flash from file"** e selecione a imagem baixada (`.img` ou `.iso`).  
3. Clique em **"Select target"** e escolha o cartão microSD/eMMC conectado.  
4. Clique em **"Flash!"** para iniciar a gravação.  
5. Aguarde até que o processo seja concluído (pode levar alguns minutos).  

### 5. Finalização e inicialização no ODROID-XU4
- Quando a gravação terminar, o balenaEtcher verificará automaticamente a gravação.  
- Ejecte o cartão com segurança do computador.  
- Insira o cartão microSD/eMMC no ODROID-XU4.  
- Conecte a fonte de alimentação e inicie o sistema.  

## Possíveis Problemas e Soluções
- **ODROID não inicia:**  
  - Verifique se a imagem é compatível com o XU4.  
  - Tente regravar a imagem ou usar outro cartão.  
- **Problemas de corrupção:**  
  - Use o comando `fsck` (Linux) ou ferramentas como `SD Card Formatter` (Windows) para formatar o cartão antes de gravar.  
- **Erro no balenaEtcher:**  
  - Execute o programa como administrador (Windows/macOS) ou com `sudo` (Linux).  

## Referências Úteis
- [Documentação oficial do ODROID-XU4](https://wiki.odroid.com/odroid-xu4/odroid-xu4)  
- [Fórum da Hardkernel](https://forum.odroid.com/)  

Agora seu ODROID-XU4 está pronto para rodar Linux ou Android! 🚀  

**Nota:** Algumas imagens podem exigir configurações adicionais após a instalação (como expansão de partição ou configuração de rede). Consulte a documentação específica do sistema escolhido.  
## Autores

- [@Elison12](https://www.github.com/Elison12)


## Referência

 - [Hardkernel](https://www.hardkernel.com/)
 - [ODROID-XU4 wiki](https://wiki.odroid.com/odroid-xu4/odroid-xu4)
 - [Odroid Magazine](https://magazine.odroid.com/)
 - [Balena etcher](https://etcher.balena.io/)

