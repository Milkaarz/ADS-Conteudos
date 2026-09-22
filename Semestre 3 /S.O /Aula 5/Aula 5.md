# 🖥️ FATEC — Disciplina: Sistemas Operacionais
**Docente:** Prof. Me. Deivison S. Takatu  
**Tópico:** Introdução à Virtualização & Prática com Oracle VirtualBox

---

## 1. 📘 Fundamentos da Virtualização

Virtualização é a abstração das capacidades do hardware físico para criar ambientes isolados e independentes (Máquinas Virtuais).

+-------------------------------------------------------+
|          Sistema Convidado (Guest OS - Linux)         |
+-------------------------------------------------------+
|            Hypervisor / Camada de Virtualização       |
+-------------------------------------------------------+
|         Sistema Hospedeiro (Host OS - Windows)        |
+-------------------------------------------------------+
|                    Hardware Físico                    |
+-------------------------------------------------------+


### 💡 Benefícios Operacionais

| Pilar | Impacto Prático |
| :--- | :--- |
| **Consolidação** | Redução de custos através do aproveitamento máximo de uma única infraestrutura física. |
| **Isolamento** | Execução de testes de segurança, novos softwares e *malwares* em ambiente estanque. |
| **Flexibilidade** | Captura de estado (*Snapshots*) e reinstalações instantâneas sem risco ao Host. |
| **Multi-OS** | Execução simultânea de múltiplos sistemas operacionais (Windows, Linux, Unix). |

---

## 2. ⚙️ Componentes da Arquitetura

1. **🖥️ Host (Hospedeiro):** O sistema operacional primário executado diretamente na máquina física.
2. **🧠 Hypervisor (Monitor de VM):** Software intermediário encarregado de fatiar, gerenciar e alocar processador, RAM, armazenamento e placas de rede.
3. **💻 Guest (Convidado):** O SO secundário isolado dentro do contêiner virtual.

---

## 3. 🛠️ Ferramenta: Oracle VirtualBox

O **VirtualBox** é uma solução gratuita e de código aberto para virtualização do tipo *Hosted* (Tipo 2), compatível com Windows, macOS, Linux e Solaris.

* **Módulo de Armazenamento:** Gerenciador de mídias ISO e discos virtuais (`.vdi`, `.vhd`, `.vmdk`).
* **Networking:** Módulos de rede (NAT, Modo Bridge, Rede Interna e Host-Only).
* **Gestão de Recursos:** Limitações de núcleos de CPU e alocação de memória RAM.

---

## 4. 🚀 Workflow de Criação de VM

[ 1. Nova VM ] ➔ [ 2. Alocar RAM/CPU ] ➔ [ 3. Criar Disco Virtual ] ➔ [ 4. Anexar ISO ] ➔ [ 5. Boot & Instalação ]


> **Exemplo de Distribuição Leve:** *Tiny Core Linux*  
> Imagem ISO de ~17 MB a 248 MB, arquitetura modular e consumo mínimo de memória RAM, ideal para ambientes virtuais enxutos.

---

## 5. 🔌 Manual de Prática: Instalação do Lubuntu no VirtualBox

### 📋 Ficha Técnica da VM

| Parâmetro | Configuração Adotada | Justificativa Técnica |
| :--- | :--- | :--- |
| **Nome & SO** | Lubuntu-VM (Linux / Ubuntu 64-bit) | Distribuição leve focada em usabilidade e baixo consumo. |
| **Memória RAM** | 2048 MB (2 GB) | Desempenho fluído e prevenção de paginação excessiva. |
| **Disco Virtual** | 16 GB (VDI, Alocação Dinâmica) | Espaço suficiente para o SO sem reservar bloco rígido no Host. |
| **Tabela de Partição**| MBR (Master Boot Record) | Estrutura clássica de inicialização em modo BIOS. |
| **Sistema de Arquivos**| `ext4` | Sistema de arquivos nativo do Linux com *journaling*. |

---

### 💿 Roteiro de Particionamento Manual

1. **Inicialização:** Boot efetuado a partir do arquivo `.iso` carregado no leitor óptico virtual.
2. **Particionamento:** Seleção da opção **Particionamento Manual** durante a instalação.
3. **Criação da Tabela:** Definição da tabela MBR para disco virtual `/dev/sda`.
4. **Partição Raiz (`/`):**
   * **Tamanho:** 100% do espaço (16 GB).
   * **Ponto de Montagem:** `/` (raiz).
   * **Formatação:** `ext4`.
5. **Instalação do GRUB:** Gravado no MBR do disco (`/dev/sda`).

---

### ⚙️ Análise Técnica e Diagnóstico

#### 🔹 Tabela MBR vs. GPT
A escolha do padrão **MBR** simplifica a estrutura de boot no disco virtual de 16 GB sob BIOS tradicional, dispensando partições UEFI específicas (como `/boot/efi`).

#### 🔹 Ausência de Partição Swap
Como o Lubuntu roda no ambiente com 2 GB de RAM dedicados e o foco da aplicação é leve, priorizou-se o espaço contíguo no disco de 16 GB para a partição raiz `/`, evitando perda de desempenho associada à paginação em disco virtual.

#### 🔹 Árvore Única de Arquivos
Diferente das unidades de disco isoladas do Windows (`C:`, `D:`), o Linux consolida todo o armazenamento sob o ponto de montagem raiz `/`.

#### 🔹 Bootloader (GRUB)
A gravação do GRUB no setor zero (`/dev/sda`) garante que o firmware encontre o setor de inicialização do Linux logo no boot do contêiner.

---

## 📚 Referências Bibliográficas

1. **AWASTHI, A.; RAWAT, V.** *Ramificação e Tarefas do Sistema Operacional*. Edições Nosso Conhecimento, 2023.
2. **DENARDIN, G. W.; BARRIQUELLO, C. H.** *Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados*. Editora da UFRGS, 2014.
3. **DOCKER INC.** *Docker Documentation*. Documentação Oficial.
4. **DOWNEY, Allen B.** *Think OS: A Brief Introduction to Operating Systems*. Green Tea Press, 2015.
5. **RED HAT.** *Red Hat Enterprise Linux – System Administration Guide*. Documentação Oficial.
6. **SILBERSCHATZ, A.; GALVIN, P. B.; GAGNE, G.** *Fundamentos de Sistemas Operacionais*. 9. ed. LTC, 2015.
7. **STALLINGS, W.** *Sistemas Operacionais: Conceitos e Projetos*. 8. ed. Pearson, 2015.
8. **TANENBAUM, A. S.; BOS, H.** *Sistemas Operacionais Modernos*. 4. ed. Pearson, 2016.
