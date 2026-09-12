# 🖥️ Manual de Instalação e Configuração de Máquina Virtual com Linux (Lubuntu) 🐧

## 1. 🎯 Introdução

Este manual tem como objetivo documentar o passo a passo para a instalação do **Oracle VM VirtualBox**, criação de uma máquina virtual (MV), instalação de um sistema operacional Linux leve (**Lubuntu**) e exploração de suas funcionalidades básicas. Esta atividade prática é fundamental para o entendimento de virtualização de sistemas operacionais e gerenciamento de recursos de hardware. 🛠️

---

## 2. 📋 Pré-requisitos e Requisitos de Sistema

* **💻 Hardware Anfitrião (Host):**
  * Processador com suporte a virtualização de hardware ativado na BIOS/UEFI (Intel VT-x ou AMD-V). ⚙️
  * Mínimo de 4 GB de memória RAM (recomenda-se 8 GB ou mais). 🧠
  * Pelo menos 15 GB de espaço livre em disco para a máquina virtual. 💾
* **📦 Software Necessário:**
  * **Oracle VM VirtualBox** (baixado do site oficial). 🌐
  * **Arquivo ISO do Lubuntu** (versão LTS recomendada, ex: Lubuntu 22.04 LTS ou superior, conhecido por sua leveza utilizando o ambiente gráfico LXQt). 💿

---

## 3. 📥 Passo a Passo: Instalação do Oracle VirtualBox

1. **Download:** Acesse o site oficial do [VirtualBox](https://www.virtualbox.org/) e baixe o instalador compatível com o seu sistema operacional anfitrião (Windows, macOS ou Linux). 🌍
2. **Execução do Instalador:** Abra o arquivo baixado e siga o assistente de instalação clicando em **Avançar** (*Next*) nas telas padrão. ▶️
3. **Dependências de Rede:** Durante a instalação, o instalador pode avisar sobre reinicialização temporária das interfaces de rede (aviso de desconexão de rede). Confirme para prosseguir. 🛜
4. **Finalização:** Clique em **Concluir** (*Finish*) para abrir o VirtualBox pela primeira vez. 🎉

---

## 4. 🛠️ Criação da Máquina Virtual

1. No painel principal do VirtualBox, clique no botão **Novo** (*New*) (ícone azul com estrela verde). ➕
2. Na janela de criação, defina as seguintes configurações básicas:
   * **Nome:** `Lubuntu-VM` (ou outro identificador de sua preferência). 🏷️
   * **Pasta da Máquina:** Local padrão ou de sua escolha. 📁
   * **Imagem ISO:** Selecione o arquivo `.iso` do Lubuntu baixado anteriormente. 💿
   * **Tipo:** `Linux` 🐧
   * **Versão:** `Ubuntu (64-bit)`
3. **Configuração de Hardware:**
   * **Memória RAM:** Defina ao menos **2048 MB (2 GB)** para garantir estabilidade na instalação e uso gráfico. 🧠
   * **Processador (CPU):** Atribua pelo menos **2 núcleos** de CPU (conforme a disponibilidade do seu computador host). ⚡
4. **Disco Rígido Virtual:**
   * Selecione **Criar um novo disco rígido virtual agora**. 💽
   * Defina o tamanho recomendado de **15 GB a 20 GB** (o formato VDI padrão do VirtualBox é adequado).
5. Clique em **Terminar** (*Finish*) para criar a máquina virtual. ✔️

---

## 5. 💿 Instalação do Sistema Operacional (Lubuntu)

1. Com a máquina virtual recém-criada selecionada na lista lateral, clique no botão **Iniciar** (*Start*). ▶️
2. O sistema inicializará a partir da imagem ISO. Na tela de boas-vindas do boot do Lubuntu, selecione a opção de iniciar a instalação (*Start Lubuntu* ou *Install Lubuntu*). 🚀
3. **Instalador Gráfico:**
   * **Idioma:** Selecione o idioma desejado (ex: *Português do Brasil*). 🌐
   * **Localização e Teclado:** Confirme o fuso horário e o layout correto do seu teclado (ex: *Abnt2* ou *Portuguese (Brazil)*). ⌨️
   * **Particionamento de Disco:** Escolha a opção padrão **Apagar disco** (*Erase disk*) — lembre-se de que esta ação afeta apenas o disco virtual isolado da máquina virtual. 🗑️
   * **Identificação do Usuário:** Insira seu nome, nome da máquina (*hostname*), nome de usuário e uma senha segura. 👤🔐
4. **Conclusão da Instalação:** Aguarde o término da cópia dos arquivos e configuração do sistema. Ao final, clique em **Reiniciar Agora** (*Restart Now*). 🔄
5. **Remoção da Mídia:** Caso o VirtualBox solicite, remova o disco óptico virtual (a ISO) das configurações de armazenamento ou pressione Enter quando indicado pelo sistema. ⏏️

---

## 6. 🧪 Teste e Exploração das Funcionalidades

Após o primeiro boot, faça login com as credenciais criadas durante a instalação. Recomenda-se explorar as seguintes funcionalidades para validar o ambiente:

### 6.1. ⚙️ Ferramentas e Recursos do Sistema
* **Ambiente Gráfico LXQt:** Navegue pelos menus do sistema e observe o baixo consumo de recursos de memória RAM e processamento em comparação com distribuições mais pesadas (como Ubuntu GNOME ou Windows). 🪶
* **Gerenciador de Pacotes e Atualizações:** Abra o terminal (`QTerminal`) e execute atualizações do sistema para garantir integridade e pacotes atualizados: 💻
  ```bash
  sudo apt update && sudo apt upgrade -y
  ```
* **Navegador e Rede:** Abra o navegador pré-instalado (como o Firefox ou Falkon) e valide a conectividade de rede (NAT configurado por padrão pelo VirtualBox). 🌐

### 6.2. 🚀 Recursos Avançados do VirtualBox
* **Adicionais para Convidado (Guest Additions):** No menu superior da janela da máquina virtual, selecione *Dispositivos > Inserir imagem de CD dos Adicionais para Convidado*. Isso permite melhor integração de tela cheia, resolução dinâmica e compartilhamento de área de transferência (Ctrl+C / Ctrl+V) entre o Host e a Guest. 🖥️📋
* **Criação de Snapshots (Pontos de Restauração):** No painel do VirtualBox, utilize a aba de Instantâneos (*Snapshots*) para tirar uma captura do estado atual da máquina limpa. Isso permite testes seguros com possibilidade de retorno imediato caso ocorra falha. 📸🛡️

---

## 7. 🏁 Conclusão

O processo de virtualização com o Oracle VirtualBox e o Lubuntu demonstrou-se eficiente, permitindo a execução de um sistema operacional completo e funcional com consumo reduzido de recursos de hardware. 🏆 A documentação deste procedimento serve como base padrão para o laboratório da disciplina, assegurando a reprodutibilidade do ambiente de desenvolvimento e testes. 📚
