# ☁️ Resumo da Aula 07 – Projeto: Nuvem e Sistemas Operacionais

## 🎯 1. Objetivo da aula

Evoluir a API da aula anterior (**Node.js + Express**, que mostrava hostname, plataforma, arquitetura, CPUs, memória e uptime) para um **📊 dashboard completo de monitoramento do SO**, publicá-lo na **☁️ nuvem (Render)** e comparar a execução **💻 local** com a **🌐 nuvem**.

```
💻 API local      🐙 GitHub        ☁️ Render          🌐 URL pública        📝 Relatório
Node + Express ─▶ repositório ───▶ Web Service ─────▶ seu-projeto.        ─▶ comparativo
                                                      onrender.com
```

---

## ☁️ 2. Conceitos de computação em nuvem

> 💡 **Mudança de paradigma:** deixa-se de investir em hardware físico (**CAPEX** 🏗️) e passa-se a contratar recursos como serviço, sob demanda, pela internet (**OPEX** 💳), sobre ambientes virtualizados.

🧩 A **virtualização** é a base da nuvem e é gerenciada por um **hypervisor**.

### ✅ Características da nuvem (modelo NIST)

| | Característica | Descrição |
|---|---|---|
| 🤖 | **Autoatendimento** | O usuário provisiona recursos sem intervenção humana |
| 🌍 | **Acesso amplo** | Acessível pela internet, por vários dispositivos |
| 🏊 | **Pool de recursos** | Recursos compartilhados (multi-tenant), alocados dinamicamente |
| 📈 | **Elasticidade** | Expande ou reduz recursos rapidamente conforme a demanda |
| 🧾 | **Serviço mensurável** | Consumo monitorado e cobrado (pay-per-use) |

### 🍰 Modelos de serviço

```
┌──────────────────────────────────────────────────────────┐
│ 📦 SaaS  → Software pronto (provedor gerencia TUDO)      │
├──────────────────────────────────────────────────────────┤
│ 🚀 PaaS  → Plataforma (você cuida só do CÓDIGO) ← Render │
├──────────────────────────────────────────────────────────┤
│ 🏗️ IaaS  → Infraestrutura (você cuida do SO + apps)      │
└──────────────────────────────────────────────────────────┘
```

| Modelo | 🏢 Provedor gerencia | 👤 Cliente gerencia |
|---|---|---|
| 🏗️ **IaaS** | Hardware, rede, virtualização | SO e aplicações |
| 🚀 **PaaS** | Infraestrutura e SO | Apenas o código |
| 📦 **SaaS** | Tudo | Só usa o software |

---

## 🚀 3. Render (PaaS)

- 🌐 Hospedagem em nuvem moderna: Node.js, Python e outras linguagens
- 🔗 Integração fácil com **Git** e **deploy contínuo automático**
- 🆓 Planos gratuitos para projetos pequenos
- 📈 Escalabilidade automática e monitoramento integrado
- 🔒 **Certificado SSL gratuito**
- 🎓 Ideal para APIs, microsserviços e projetos acadêmicos

---

## 🛠️ 4. Passo a passo

### 💻 4.1 Criar a API local

| Passo | Ação |
|---|---|
| 1️⃣ | Criar uma pasta e abrir no **VS Code** |
| 2️⃣ | `npm install express` |
| 3️⃣ | `npm install cors express` |
| 4️⃣ | Criar o `index.js` seguindo o [exemplo do professor](https://github.com/deivisontakatu/exemplo-express-so/blob/main/index.js) |
| 5️⃣ | Executar com `node index.js` ▶️ |

> 🔐 **CORS:** mecanismo de segurança do navegador que controla o acesso entre domínios diferentes.

### ☁️ 4.2 Deploy no Render

| Passo | Ação |
|---|---|
| 1️⃣ | 🐙 Fazer commit do projeto em um repositório **GitHub** |
| 2️⃣ | 👤 Criar conta em **dashboard.render.com** |
| 3️⃣ | ➕ **New → Web Service** e conectar o repositório |
| 4️⃣ | ⚙️ **Build:** `npm install` · **Start:** `node index.js` |
| 5️⃣ | 🎉 Acessar `seu-projeto.onrender.com` |

---

## 📊 5. O que o dashboard exibe

### 🧭 Painel executivo (indicadores)

| 🧠 RAM | ⚙️ CPU média | ⏱️ Uptime | 📁 Arquivos | 🌐 IP principal | 🟢 Status |
|:---:|:---:|:---:|:---:|:---:|:---:|
| % de uso | % médio | formatado | do projeto | da máquina | NORMAL |

### 🗂️ Cards de detalhe

| Card | Conteúdo |
|---|---|
| 📌 **Sistema** | Host, SO, release (kernel), plataforma, arquitetura, endianness, versão do Node |
| 👤 **Usuário** | Usuário, home, temp, shell, UID, GID |
| 🧠 **Memória RAM** | Total, usada, livre, por CPU, barra de uso |
| ⚙️ **CPU** | Núcleos, modelo, load average, uso por core |
| 🌐 **Rede** | IP principal, interfaces, IPv4/IPv6 |
| 📁 **Arquivos** | Lista com nome, tipo e tamanho |
| ⏰ **Tempo** | Uptime, timezone, ISO |
| 🔐 **Aplicação** | PID, diretório, memória do Node, caminho do executável |
| ☁️ **Ambiente** | Local ou Render, `PORT`, `NODE_ENV`, kernel AWS |

### 🔍 Exemplo real no Render

```
🐧 SO .......... Linux (kernel 6.8.0-...-aws), x64
⚙️ CPU ......... AMD EPYC 7R13 · 8 núcleos
🧠 RAM ......... ~30 GB totais
👤 Usuário ..... render
🔌 PORT ........ 10000
🏭 NODE_ENV .... production
```

---

## ⚖️ 6. Local 💻 vs Nuvem ☁️

| Aspecto | 💻 Local | ☁️ Nuvem (Render) |
|---|---|---|
| 🐧 SO / kernel | Ex.: Windows (kernel próprio) | Linux em contêiner (AWS) |
| 🔌 Porta | Definida por você (ex.: 3000) | Definida pela plataforma (`PORT`) |
| 🏭 Ambiente | Desenvolvimento | `NODE_ENV=production` |
| 🏗️ Infraestrutura | Sua máquina | Remota, virtualizada |
| 🌍 Acesso | `localhost` | URL pública com SSL |

**🔑 Conclusões:**

- 🧱 **Abstração de hardware:** o PaaS esconde a complexidade do SO e provisiona contêineres otimizados.
- 🧬 **Interação com o kernel:** o módulo `os` do Node mostra as diferenças práticas entre os ambientes.
- 🔄 **Portabilidade:** a mesma aplicação roda em ambientes diferentes, vantagem das arquiteturas modernas com microsserviços e nuvem.
- 🧩 Conceitos em destaque: **virtualização**, **infraestrutura remota** e **serviços sob demanda**.

---

## 📝 7. Atividade e entrega

- [ ] 1️⃣ Criar a aplicação local com Express exibindo informações do SO
- [ ] 2️⃣ Enviar ao GitHub e fazer o deploy no Render
- [ ] 3️⃣ Acessar na nuvem e **comparar** com a execução local (variáveis de ambiente, porta, infraestrutura)
- [ ] 4️⃣ 🏆 **Desafio:** escolher outra plataforma semelhante ao Render, fazer o deploy e comparar os servidores
- [ ] 5️⃣ 📄 **Entrega final:** relatório comparativo com a documentação (Manual) salva no repositório da disciplina

---

## 📚 8. Referências da aula

- 📖 TANENBAUM, A. S.; BOS, H. *Sistemas Operacionais Modernos*. 4. ed. Pearson, 2016.
- 📖 SILBERSCHATZ, A.; GALVIN, P. B.; GAGNE, G. *Fundamentos de Sistemas Operacionais*. 9. ed. LTC, 2015.
- 📖 STALLINGS, W. *Sistemas Operacionais: Conceitos e Projetos*. 8. ed. Pearson, 2015.
- 📖 DENARDIN, G. W.; BARRIQUELLO, C. H. *Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados*. UFRGS, 2014.
- 📖 AWASTHI, A.; RAWAT, V. *Ramificação e Tarefas do Sistema Operacional*. Edições Nosso Conhecimento, 2023.
- 📖 DOWNEY, A. B. *Think OS: A Brief Introduction to Operating Systems*. Green Tea Press, 2015.
- 🎩 RED HAT. *Red Hat Enterprise Linux – System Administration Guide*.
- 🐳 DOCKER INC. *Docker Documentation*. <https://docs.docker.com>
