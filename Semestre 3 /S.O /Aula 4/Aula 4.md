# 🖥️ FATEC — Disciplina: Sistemas Operacionais
**Docente:** Prof. Me. Deivison S. Takatu  
**Tópico:** Arquitetura do SO, Modos de Execução e Instalação Prática

---

## 1. Fundamentos & Arquitetura do SO

### 🎯 A Camada de Abstração
O Sistema Operacional (SO) funciona como a interface intermediária entre as aplicações do usuário e os componentes de hardware.

+---------------------------------------------------+
|               Aplicações de Usuário              |
+---------------------------------------------------+
|            Sistema Operacional (Kernel)          |
+---------------------------------------------------+
|                     Hardware                      |
+---------------------------------------------------+

> **Sem um SO, a aplicação precisaria:**
> * Gerenciar alocação física de CPU e memória RAM.
> * Implementar protocolos diretos para discos e dispositivos E/S.
> * Tratar segurança e isolamento de processos por conta própria.

---

### 🧩 Módulos Principais do SO

| Componente | Função Principal |
| :--- | :--- |
| **Kernel (Núcleo)** | Controle central dos recursos críticos e instruções diretas de hardware. |
| **Gerenciamento de Processos** | Criação, escalonamento e finalização de tarefas de software. |
| **Gerenciamento de Memória** | Mapeamento, isolamento e alocação de memória física e virtual. |
| **Sistema de Arquivos** | Estruturação hierárquica e persistência de dados em disco. |
| **Entrada e Saída (E/S)** | Controle de fluxo de comunicação com periféricos. |
| **Drivers de Dispositivos** | Módulos de tradução lógica para hardwares específicos. |

---

### 🛡️ Modos de Execução do Processador

[ Aplicação ] ---> System Call (Chamada de Sistema) ---> [ Kernel ]
(Modo Usuário - Restrito)                             (Modo Kernel - Privilegiado)

* **Modo Usuário:** Instruções executadas com acesso restrito à memória e periferia, garantindo a estabilidade e segurança global.
* **System Calls:** Interface de comunicação formal onde o programa solicita serviços protegidos do Kernel.
* **Modo Kernel:** Nível máximo de privilégio com acesso irrestrito ao hardware e às instruções críticas da CPU.

---

### ⚙️ Programa vs. Processo vs. Thread

* **Programa:** Código estático armazenado em disco (ex.: `chrome.exe`).
* **Processo:** Programa em execução carregado na memória RAM com seu próprio espaço de endereçamento.
* **Thread:** Subfluxo de execução dentro do processo, compartilhando memória e recursos com outras threads do mesmo processo.

---

### 🔄 Reutilização de Arquiteturas Existentes
A adaptação de kernels maduros reduz o tempo de desenvolvimento, garante estabilidade e reaproveita drivers já validados.

* **Raspberry Pi OS:** Derivado do **Debian Linux**, otimizado para a arquitetura ARM.
* **PlayStation 4 (Orbis OS):** Derivado do **FreeBSD**, customizado para jogos e multimídia.

---

## 2. Atividade 1 — Fluxo Interno de Instalação de um SO

| Etapa | O que Acontece | Componentes do SO Envolvidos | Função Prática |
| :---: | :--- | :--- | :--- |
| **1** | **Boot BIOS/UEFI** | Drivers de E/S básico | Localiza a mídia bootável e os barramentos USB. |
| **2** | **Carga do Kernel** | Kernel, Gestão de Memória, Modo Kernel | Carrega o núcleo na RAM e assume o controle em nível privilegiado. |
| **3** | **Particionamento** | Sistema de Arquivos, Driver de Disco | Cria tabelas de partição (GPT/MBR) e formata com estruturas de arquivos (ext4, NTFS). |
| **4** | **Cópia de Arquivos** | Gestão de Processos, Sistema de Arquivos | Descompacta os binários e monta a árvore raiz do sistema no disco. |
| **5** | **Instalação de Drivers** | Drivers de Dispositivos, Subsistema de E/S | Configura a comunicação direta com os periféricos detectados na máquina. |
| **6** | **Bootloader & Modo Usuário** | Bootloader, Modos de Execução, Processos | Grava o gerenciador de inicialização (ex.: GRUB) e transfere o controle final para o Modo Usuário. |

---

## 3. Atividade 2 — Estudo Comparativo de SOs Derivados

### 📊 Tabela de Sistemas e Bases Originárias

| SO Derivado | Base Originária | Foco do SO Derivado | Principais Diferenças & Adaptações |
| :--- | :--- | :--- | :--- |
| **Raspberry Pi OS** | Debian (Linux) | Placas ARM, prototipagem e educação | Recompilado para instrução ARM; utiliza a interface leve PIXEL e traz softwares educacionais integrados. |
| **Unix** | MULTICS | Computação corporativa e mainframes | Simplificou a arquitetura complexa do MULTICS com filosofia modular, código em C e diretórios em árvore. |
| **Linux** | MINIX | Kernel de uso geral e alto desempenho | Substituiu o microkernel acadêmico do MINIX por um kernel monolítico de alta performance e código aberto. |
| **Lakka** | LibreELEC (Linux) | Emulação de consoles (*retrogaming*) | Removeu a interface de mídias Kodi e integra o frontend *RetroArch* diretamente na RAM. |
| **Game Boy Boot ROM** | Arquitetura LR35902 | Inicialização e autenticação de hardware | Firmware ultraenxuto (256 bytes) que executa a rolagem do logotipo, valida o *checksum* do cartucho e desativa a si próprio. |

---

### 📝 Resumo Técnico dos Projetos

#### 🍇 Raspberry Pi OS
Distribuição Linux oficial para computadores Raspberry Pi. Baseada no **Debian**, é recompilada para a arquitetura ARM, empregando o ambiente gráfico PIXEL e um pacote de softwares voltados para o ensino de programação e projetos de hardware.

#### 🐧 Unix
Criado no início dos anos 1970 nos laboratórios Bell a partir dos conceitos do **MULTICS**. O Unix adotou uma estrutura modular baseada em "faça apenas uma coisa e faça bem", simplificando o sistema de arquivos e tornando o código portável com a linguagem C.

#### 🐧 Linux
Projetado por Linus Torvalds em 1991 a partir do estudo do **MINIX** (sistema acadêmico criado por Andrew Tanenbaum). O Linux evoluiu como um kernel monolítico voltado para alto desempenho em computadores de uso geral e servidores, sob licença livre.

#### 🎮 Lakka
Transforma computadores e placas ARM em consoles de retrogaming. Baseia-se no **LibreELEC**, porém inicializa diretamente na interface do *RetroArch*, eliminando a sobrecarga de ambientes desktop tradicionais para focar no desempenho da emulação.

#### 🕹️ Game Boy Boot ROM
Micro-SO gravado na memória de leitura do Nintendo Game Boy clássico (processador **Sharp LR35902**). Executa tarefas críticas em 256 bytes: toca a vinheta inicial, exibe o logotipo da Nintendo na tela, checa a integridade do cartucho e desconecta-se da memória para conceder acesso direto ao jogo.

---

### 🔬 Análise dos Componentes de Execução

+-----------------------------------------------------------------------------------------+
|                                NÍVEL DE ABSTRAÇÃO                                       |
+-----------------------------------------------------------------------------------------+
| [ Game Boy Boot ROM ]   ---> Comunicação direta com registradores do hardware (Sem SO)  |
| [ Lakka / Raspbian ]   ---> Abstração completa via Kernel Linux e Drivers de Dispositivo|
| [ Unix / Linux ]        ---> Evolução de chamadas de sistema e alocação de memória RAM |
+-----------------------------------------------------------------------------------------+


---

## 📚 Referências Bibliográficas

1. **AWASTHI, A.; RAWAT, V.** *Ramificação e Tarefas do Sistema Operacional*. Edições Nosso Conhecimento, 2023.
2. **DENARDIN, G. W.; BARRIQUELLO, C. H.** *Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados*. Editora da UFRGS, 2014.
3. **DOWNEY, Allen B.** *Think OS: A Brief Introduction to Operating Systems*. Green Tea Press, 2015.
4. **SILBERSCHATZ, A.; GALVIN, P. B.; GAGNE, G.** *Fundamentos de Sistemas Operacionais*. 9. ed. LTC, 2015.
5. **STALLINGS, W.** *Sistemas Operacionais: Conceitos e Projetos*. 8. ed. Pearson, 2015.
6. **TANENBAUM, A. S.; BOS, H.** *Sistemas Operacionais Modernos*. 4. ed. Pearson, 2016.
