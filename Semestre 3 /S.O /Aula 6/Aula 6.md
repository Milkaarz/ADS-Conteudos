# ☁️ Nuvem & Sistemas Operacionais
> **Faculdade de Tecnologia (Fatec)**  
> **Disciplina:** Sistemas Operacionais  
> **Professor:** Prof. Me. Deivison S. Takatu  

---

## 📑 Sumário
1. [Conceitos Fundamentais](#1-conceitos-fundamentais)
2. [Arquitetura e Modelos de Serviço](#2-arquitetura-e-modelos-de-serviço)
3. [Tecnologias e Ferramentas Modernas](#3-tecnologias-e-ferramentas-modernas)
4. [Guia Prático: Construindo e Publicando uma API](#4-guia-prático-construindo-e-publicando-uma-api)
5. [Atividades Práticas e Avaliação](#5-atividades-práticas-e-avaliação)
6. [Manual de Web Service (API Node.js no Render)](#6-manual-de-web-service---api-nodejs-na-plataforma-render)
7. [Referências Bibliográficas](#7-referências-bibliográficas)

---

## 1. 📘 Conceitos Fundamentais

> 💡 **Computação em Nuvem:** Mudança de paradigma onde as organizações deixam de investir em hardware físico (**CAPEX**) para contratar recursos computacionais como serviço sob demanda pela internet (**OPEX**), utilizando ambientes virtualizados.

### 🏛️ Características da Nuvem (Modelo NIST)

| Característica | Descrição Prática |
| :--- | :--- |
| ⚡ **Autoatendimento** | O usuário provisiona recursos (VMs, bancos) automaticamente sem intervenção humana. |
| 🌐 **Acesso Amplo** | Serviços acessíveis via internet por diversos dispositivos (PCs, tablets, smartphones). |
| 🔄 **Pool de Recursos** | Recursos compartilhados (*multi-tenant*) e alocados dinamicamente entre usuários. |
| 📈 **Elasticidade** | Capacidade do sistema expandir ou contrair recursos rapidamente conforme a demanda. |
| 📊 **Serviço Mensurável** | Uso monitorado para garantir a cobrança exata pelo consumo (*pay-per-use*). |

---

## 2. ⚙️ Arquitetura e Modelos de Serviço

A **virtualização** é a base da nuvem, onde um *hypervisor* gerencia os recursos físicos para múltiplas Máquinas Virtuais (VMs). A entrega desses recursos divide-se em três camadas principais:

* 🏗️ **IaaS (Infraestrutura como Serviço)**
  * **Gestão do Provedor:** Hardware, rede e virtualização.
  * **Gestão do Cliente:** Sistema Operacional e aplicações.
  * *Exemplos:* AWS EC2, Azure VMs.

* 🚀 **PaaS (Plataforma como Serviço)**
  * **Gestão do Provedor:** Infraestrutura completa e Sistema Operacional.
  * **Gestão do Cliente:** Apenas lógica de código e deploy.
  * *Exemplos:* Google App Engine, Render.

* 📦 **SaaS (Software como Serviço)**
  * **Gestão do Provedor:** Aplicação completa e infraestrutura.
  * **Gestão do Cliente:** Apenas utilização do serviço.
  * *Exemplos:* Google Workspace, Microsoft 365.

---

## 3. 🛠️ Tecnologias e Ferramentas Modernas

* 🐳 **Containers (Docker):** Empacotam aplicação e dependências em unidades isoladas que compartilham o *kernel* do SO hospedeiro. Mais leves e rápidos que VMs tradicionais.
* ☸️ **Orquestração (Kubernetes):** Gerencia, escala e garante a alta disponibilidade dos containers em execução.
* 🧩 **Microsserviços:** Arquitetura que divide grandes sistemas em serviços independentes e desacoplados, comunicando-se via APIs/Web Services.

---

## 4. 🚀 Guia Prático: Construindo e Publicando uma API

### 💻 Fase 1: Configuração Local (Node.js & Express)
1. **Inicializar Projeto:** Criar a pasta `cloud-so-app` e abrir no VS Code.
2. **Instalar Dependências:** Executar `npm install express cors` no terminal.
3. **Desenvolver Código:** Criar o arquivo `index.js` consumindo o módulo nativo `os`.
4. **Testar Localmente:** Executar `node index.js` e validar no navegador ou cliente HTTP (Ex: Insomnia/Postman).

### ☁️ Fase 2: Deploy na Nuvem (Render)
1. **Controle de Versão:** Realizar *commit* e *push* do projeto para o GitHub.
2. **Acesso à Plataforma:** Acessar [dashboard.render.com](https://dashboard.render.com).
3. **Novo Serviço:** Selecionar **"New Web Service"** e conectar o repositório do GitHub.
4. **Configuração de Execução:**
   * **Build Command:** `npm install`
   * **Start Command:** `node index.js`

> ℹ️ **Por que usar o Render (PaaS)?**
> Foco total em produtividade e simplicidade, abstraindo completamente o SO. Oferece deploy automático via GitHub, HTTPS/SSL gratuito e excelente suporte para microsserviços.

---

## 5. 📌 Atividades Práticas e Avaliação

1. Criar uma aplicação local utilizando **Express.js** para expor informações do SO (*Hostname*, arquitetura, CPU, memória RAM livre/total).
2. Subir o código para o **GitHub** e realizar o deploy no **Render**.
3. Acessar a aplicação pública e comparar as informações retornadas com as da máquina local.
4. Documentar o processo na forma de um **Manual técnico** para inclusão no repositório.

---

# 🔌 Manual de Web Service - API Node.js na Plataforma Render

### 🧠 Objetivo
Demonstrar a criação de um Web Service (API REST) capaz de extrair informações do Sistema Operacional e sua posterior implantação (deploy) em um ambiente PaaS (Render), associando a prática aos conceitos teóricos de Cloud e SO.

---

### 🛠️ Instalação e Ambiente

| Componente | Função |
| :--- | :--- |
| **Node.js & Express.js** | Ambiente de execução e framework Web/Backend. |
| **GitHub** | Versionamento de código e fluxo de Integração Contínua (CI). |
| **Render** | Provedor de Nuvem PaaS para hospedagem da API. |
| **Host Local** | Sistema Operacional hospedeiro (Windows 10/11). |

---

### 💻 Criação da Aplicação Local

1. **Configuração Inicial:**
   * Inicialização do projeto via `npm init -y`.
   * Instalação dos pacotes `express` (roteamento) e `cors` (controle de acesso HTTP).

2. **Uso do Módulo Native `os`:**
   * Coleta de métricas diretamente do SO:
     * `os.hostname()`
     * `os.platform()`
     * `os.cpus()`
     * `os.totalmem()`
     * `os.freemem()`

3. **Definição de Portas:**
   * Configuração para escutar a porta local `3000` ou a porta atribuída dinamicamente pelo ambiente de nuvem (`process.env.PORT`).

---

### 📀 Deploy no Render

```
[Repositório GitHub] ──(Webhook)──> [Render Build Engine] ──> [Container Linux] ──> [URL Publica HTTPS]
```

1. Commit do código-fonte e envio para o GitHub.
2. Vinculação da conta do Render ao repositório do projeto.
3. Criação do serviço do tipo **Web Service**.
4. Definição do ambiente de execução: **Node**.
5. Configuração dos comandos:
   * **Build:** `npm install`
   * **Start:** `node index.js`
6. Aguardo da finalização da build do container e disponibilização da URL pública.

---

### 🔍 Testes Realizados & Resultados

* **Ambiente Local (Windows):** Retornou dados reais do hardware da máquina do desenvolvedor (ex: Arquitetura x64, 16GB RAM, CPU Intel/AMD física).
* **Ambiente de Nuvem (Render):** Retornou métricas da infraestrutura virtualizada do provedor (ex: Kernel Linux, recursos limitados do plano free).

> **Conclusão dos Testes:** A aplicação manteve o mesmo comportamento em ambos os ambientes, demonstrando a portabilidade das aplicações baseadas em Web Services.

---

### ⚙️ Análise Técnica

#### 🔹 Abstração de Hardware (PaaS)
Ao utilizar o Render, a gestão do Sistema Operacional fica oculta do desenvolvedor. A plataforma provisiona um container Linux isolado, instala o runtime necessário e executa a aplicação.

#### 🔹 Interação com o Kernel
As chamadas do módulo `os` executam *system calls* diretas ao Kernel do sistema hospedeiro. Isso justifica os retornos distintos entre o ambiente Windows (local) e o ambiente Linux (nuvem).

#### 🔹 Containers e Multi-tenancy
O uso de containers no Render garante o isolamento da aplicação em um ambiente *multi-tenant*, otimizando a distribuição no pool de recursos e permitindo a escala do serviço.

---

### 📊 Vantagens & Desafios

#### ✅ Vantagens Observadas
* Foco exclusivo no desenvolvimento do código.
* Deploy contínuo (CI/CD) automático a cada `git push`.
* Certificado de segurança (HTTPS/SSL) pré-configurado.

#### ⚠️ Desafios Encontrados
* Garantir o uso de `process.env.PORT` para o roteamento correto de tráfego.
* Compreender a política de *sleep* (inatividade) da plataforma no plano gratuito.

---

### 🧾 Conclusão

A prática comprovou a eficiência dos modelos PaaS no ciclo de desenvolvimento moderno. A camada de Sistema Operacional é convenientemente abstraída para otimizar o deploy, enquanto a consulta interna ao módulo `os` permitiu observar nitidamente a diferença entre ambientes físicos locais e instâncias virtualizadas em nuvem.

---

## 7. 📚 Referências Bibliográficas

1. **TANENBAUM, Andrew S.; BOS, Herbert.** *Sistemas Operacionais Modernos.* 4. ed. São Paulo: Pearson, 2016.
2. **SILBERSCHATZ, Abraham; GALVIN, Peter B.; GAGNE, Greg.** *Fundamentos de Sistemas Operacionais.* 9. ed. Rio de Janeiro: LTC, 2015.
3. **STALLINGS, William.** *Sistemas Operacionais: Conceitos e Projetos.* 8. ed. São Paulo: Pearson, 2015.
4. **DENARDIN, G. W.; BARRIQUELLO, C. H.** *Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados.* Porto Alegre: Editora da UFRGS, 2014.
5. **AWASTHI, A.; RAWAT, V.** *Ramificação e Tarefas do Sistema Operacional.* Edições Nosso Conhecimento, 2023.
6. **DOWNEY, Allen B.** *Think OS: A Brief Introduction to Operating Systems.* Green Tea Press, 2015.
7. **RED HAT.** *Red Hat Enterprise Linux – System Administration Guide.* Documentação Oficial.
8. **DOCKER INC.** *Docker Documentation.* Documentação Oficial. Disponível em: <https://docs.docker.com>.
