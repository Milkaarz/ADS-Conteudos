# 📚 FATEC — Disciplina: Sistemas Operacionais

**Docente:** Prof. Me. Deivison S. Takatu

**Tópico:** Panorama de Sistemas Operacionais & Práticas de Versionamento (Git)

## 1. Classificação e Ecossistemas de Sistemas Operacionais

### 📊 Visão Geral dos Tipos de SO

| 

| **Categoria** | **Foco Principal** | **Exemplo de Aplicação** | **Ambientes / Exemplos** | 
| **Mainframes** | Processamento em lote (*batch*), TPS e altíssima E/S | Bancos, e-commerce crítico | OS/360, OS/390, z/OS, Linux para Mainframe | 
| **Servidores** | Serviços de rede, escalabilidade e compartilhamento | Servidores Web, BD, AD | Linux, Windows Server | 
| **Multiprocessadores** | Computação paralela e balanceamento entre núcleos | Computação científica, HPC | Linux, UNIX | 
| **Pessoais (Desktop)** | Usabilidade, interface gráfica (GUI) e multimídia | Produtividade diária, jogos | Windows, macOS, Linux | 
| **Móveis (Mobile)** | Gestão de energia, sensores e *sandboxing* | Smartphones e tablets | Android, iOS | 
| **Embarcados** | Tarefas dedicadas, recursos enxutos (ROM/Flash) | Eletrodomésticos, carros | Embedded Linux, QNX, VxWorks | 
| **Nós Sensores** | Baixíssimo consumo, comunicação sem fio e eventos | Agricultura de precisão, IoT | TinyOS, Contiki | 
| **Tempo Real (RTOS)** | Cumprimento rígido de prazos (*deadlines*) | Controle de voo, streaming | VxWorks, FreeRTOS | 
| **Smart Cards** | Altíssima segurança física e lógica em hardware restrito | Cartões bancários, SIM cards | Java Card OS | 

### ⏱️ Detalhamento: Sistemas de Tempo Real (RTOS)

* **Hard Real-Time:** Erros de tempo provocam falhas catastróficas (ex.: sistemas aviônicos e automotivos).

* **Soft Real-Time:** Atrasos causam apenas perda de qualidade do serviço (ex.: jogos online e reprodução de vídeo).

## 2. Guia Prático de Git e Workflow

### 🚀 O que é o Git?

Sistema distribuído de controle de versão criado por **Linus Torvalds**. Garante o histórico de alterações, rastreabilidade e colaboração via repositórios locais e remotos (ex.: GitHub).

### ⚙️ Setup Inicial (Terminal)

```
# Definir identidade do autor
git config --global user.name "<Seu Nome>"
git config --global user.email "<Seu Email>"

# Checar versão instalada
git --version

```

### 🔄 Fluxo de Trabalho no VS Code

1. **Inicializar:** Abra a pasta do projeto no VS Code e clique em *Inicializar Repositório* na aba *Controle de Código-Fonte*.

2. **Registrar:** Inscreva uma mensagem direta e execute o **Commit**.

3. **Sincronizar:** Publique a *branch* para vincular ao GitHub (público ou privado).

## 3. Boas Práticas de Versionamento

> 💡 **Diretrizes para um Histórico Limpo:**
>
> * **Commits Atômicos:** Faça alterações pequenas e frequentes.
>
> * **Mensagens Claras:** Explique *o que* foi feito e *por que*.
>
> * **Estratégia de Branches:** Mantenha a branch principal (`main`/`master`) estável.
>
> * **Validação:** Rode testes automatizados antes de mesclar (*merge*) alterações.

## 4. Laboratório Prático — Atividades

### 🧪 Atividade 1: Integração e Autenticação

Configuração de credenciais globais e autenticação da IDE (VS Code) com a conta do GitHub para suporte a operações de `push`, `pull` e `commit`.

```
git config --global user.name "<Seu Nome>"
git config --global user.email "<Seu Email>"
git --version

```

### 🧪 Atividade 2: Ciclo de Vida e Restauração

Criação de um repositório local (exemplo: arquivo teórico sobre a *Teoria do Big Bang*), sincronização com o GitHub, simulação de exclusão da pasta local e recuperação do projeto via:

```
git clone <url-do-repositorio>

```

### 🧪 Atividade 3: Análise de Repositórios Públicos

#### 1. `rampatra/photography` (Portfólio Fotográfico)

> Portfólio fotográfico estático construído com **Jekyll** e automatizado com **Gulp/Node.js** para deploy no **GitHub Pages**.

* **Estrutura de Diretórios:**

  * `images/` (`fulls/`, `thumbs/`)

  * `_layouts/` e `_includes/`

  * `assets/` (scripts, estilos SCSS/CSS, fontes)

| **Arquivo** | **Descrição** | 
| `_config.yml` | Configurações globais | 
| `index.html` | Página inicial da galeria | 
| `gulpfile.mjs` | Automação de build | 
| `package.json` | Dependências Node.js | 
| `Gemfile` | Dependências Ruby (Jekyll) | 
| `CNAME` | Domínio personalizado | 

#### 2. `jonathansick/awesome-astronomy` (Recursos para Astronomia)

> Lista curada (*Awesome List*) de recursos, códigos, conjuntos de dados e comunidades voltados para **astronomia profissional**.

* **Estrutura de Diretórios:** Diretório raiz simplificado sem subpastas.

| **Arquivo** | **Descrição** | 
| `README.md` | Guia central com links e categorias | 
| `CONTRIBUTING.md` | Diretrizes para Pull Requests | 
| `LICENSE` | Licença CC0 1.0 (Domínio Público) | 

#### 3. `ibaaj/awesome-OpenSourcePhotography` (Fotografia Open Source)

> Catálogo colaborativo (*Awesome List*) de softwares, bibliotecas, firmwares e utilitários de código aberto para **fotografia e vídeo**.

* **Estrutura de Diretórios:** Repositório focado puramente em documentação na raiz.

| **Arquivo** | **Descrição** | 
| `README.md` | Guia categorizado (editores RAW, hacks de firmware, etc.) | 
| `CONTRIBUTING.md` | Diretrizes para inclusão de novos projetos | 

#### 4. `projectM-visualizer/projectm` (Visualizador de Música)

> Biblioteca e motor de **visualização de música** multiplataforma em C/C++, compatível com os presets do **Milkdrop**.

* **Estrutura de Diretórios:**

  * `src/libprojectM/` (núcleo de renderização gráfica e áudio PCM/FFT)

  * `presets/` (efeitos visuais `.milk`)

  * `cmake/` e `.github/` (CI/CD e compilação)

| **Arquivo** | **Descrição** | 
| `CMakeLists.txt` | Script mestre de compilação | 
| `BUILDING.md` | Guia de compilação (Linux, Windows, macOS) | 
| `LICENSE.txt` | Licença LGPL-2.1 | 

#### 5. `Pathoschild/SMAPI` (Modding API para Stardew Valley)

> A API e carregador de mods (*Modding API*) oficial da comunidade para o jogo **Stardew Valley** em .NET/C#.

* **Estrutura de Diretórios:**

  * `src/SMAPI/` (núcleo do injetor/loader, eventos e logs)

  * `src/SMAPI.ModBuildConfig/` e `src/SMAPI.Installer/`

  * `docs/` e `build/`

| **Arquivo** | **Descrição** | 
| `SMAPI.sln` | Solução Visual Studio / .NET | 
| `README.md` | Visão geral e instruções | 
| `LICENSE` | Licença GPL-3.0 | 

## 📖 Referências Bibliográficas

* DENARDIN, G. W.; BARRIQUELLO, C. H. **Sistemas Operacionais de Tempo Real e sua Aplicação em Sistemas Embarcados**. Editora da UFRGS, 2014.

* SILBERSCHATZ, A.; GALVIN, P. B.; GAGNE, G. **Fundamentos de Sistemas Operacionais**. 9. ed. LTC, 2015.

* STALLINGS, W. **Sistemas Operacionais: Conceitos e Projetos**. 8. ed. Pearson, 2015.

* TANENBAUM, A. S.; BOS, H. **Sistemas Operacionais Modernos**. 4. ed. Pearson, 2016.
