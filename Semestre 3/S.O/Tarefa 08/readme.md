# 🎃 Noite Sombria

> 🦇 **Organizador web de Halloween:** contagem regressiva, sorteio de fantasia e lista de tarefas da festa, tudo em uma única página.

🧛 **Acesse em:** https://hallowenies.netlify.app/

| 🏷️ Item | 📋 Detalhe |
| --- | --- |
| **Tipo** | Aplicação web de página única (HTML, CSS e JavaScript puros) |
| **Tema visual** | Preto, creme, vermelho-laranja e verde, inspirado em pôsteres de Halloween 👻 |
| **Backend / banco de dados** | Nenhum. Os dados ficam no navegador (`localStorage`) |
| **Funciona offline?** | Parcialmente: o código roda sem internet se a página já estiver em cache, mas as fontes vêm do Google Fonts e, sem elas, o navegador usa fontes de reserva |
| **Custo** | Gratuito 🆓 |

---

## 🗺️ Índice

1. [🎯 Objetivo](#-objetivo)
2. [⚠️ Problema](#️-problema)
3. [📦 Escopo](#-escopo)
4. [⚙️ Requisitos funcionais](#️-requisitos-funcionais)
5. [🛡️ Requisitos não funcionais](#️-requisitos-não-funcionais)
6. [🧰 Tecnologias utilizadas](#-tecnologias-utilizadas)
7. [🏗️ Arquitetura](#️-arquitetura)
8. [🚀 Instalação e execução](#-instalação-e-execução)
9. [🔧 Configuração](#-configuração)
10. [🔌 APIs, banco de dados e variáveis de ambiente](#-apis-banco-de-dados-e-variáveis-de-ambiente)
11. [🧪 Testes](#-testes)
12. [🌐 Deploy](#-deploy)
13. [📖 Glossário](#-glossário)

---

## 🎯 Objetivo

Oferecer uma ferramenta web **simples e gratuita** que ajude pessoas a planejar e aproveitar o Halloween (**31 de outubro**), reunindo em um só lugar:

- ⏳ a **contagem regressiva** até a data;
- 🧛 a **escolha da fantasia**;
- ✅ a **organização das tarefas** da festa.

**Objetivos específicos**

| 🏁 Objetivo | 💡 Na prática |
| --- | --- |
| Reduzir o tempo gasto decidindo a fantasia | Um clique entrega uma ideia pronta, como "Bruxa retrô anos 80" |
| Acompanhar o progresso dos preparativos | Uma barra mostra quanto da lista já foi feito |
| Funcionar sem cadastro, instalação ou conta | Basta abrir a página |

---

## ⚠️ Problema

Quem organiza uma festa de Halloween costuma **deixar tudo para a última hora** 😱:

1. 📝 **Tarefas espalhadas** em mensagens, notas e na memória.
2. 🤔 **Indecisão** na escolha da fantasia.
3. ⏰ **Falta de noção de prazo.**

> 💥 **Resultado:** estresse, compras apressadas e itens esquecidos.

| 😖 Dor do usuário | 🛠️ Solução |
| --- | --- |
| Tarefas soltas e esquecidas | Lista única com barra de progresso ✅ |
| Dificuldade de escolher a fantasia | Sorteio de ideias de fantasia 🎲 |
| Sensação de que "ainda dá tempo" | Contagem regressiva sempre visível ⏳ |

---

## 📦 Escopo

### ✅ Dentro do escopo

- ⏳ Contagem regressiva até 31/10, com dias, horas, minutos e segundos.
- 🎲 Sorteio de fantasias por combinação de personagem e estilo.
- 📋 Lista de tarefas com marcação, exclusão e progresso.
- 💾 Salvamento local dos dados no navegador.
- 📱 Interface responsiva, no tema escuro inspirado em pôsteres de Halloween.

### 🚫 Fora do escopo

- 🔐 Contas de usuário e login.
- 🔄 Sincronização entre dispositivos.
- 🛒 Compra de produtos ou integração com lojas.
- 💌 Convites, confirmação de presença e chat.
- 📲 Aplicativo nativo para Android ou iOS.

### 👥 Público e premissas

| 🔖 Tema | 📌 Descrição |
| --- | --- |
| **Público** | Pessoas de 12 anos ou mais que organizam ou participam de festas temáticas |
| **Premissa** | O usuário possui um navegador moderno |
| **Restrição** | Os dados ficam só no aparelho. ⚠️ Limpar o navegador apaga a lista |

---

## ⚙️ Requisitos funcionais

**Prioridade:** 🔴 Alta · 🟡 Média · 🟢 Baixa

| Código | Requisito | Prioridade |
| --- | --- | --- |
| **RF01** | Exibir o tempo restante até o próximo 31 de outubro, atualizado a cada segundo | 🔴 |
| **RF02** | Sortear uma fantasia combinando personagem e estilo a cada clique | 🔴 |
| **RF03** | Salvar uma fantasia favorita e exibi-la ao reabrir o sistema | 🟡 |
| **RF04** | Adicionar tarefas, com texto de até 80 caracteres | 🔴 |
| **RF05** | Marcar uma tarefa como concluída ou desfazer a marcação | 🔴 |
| **RF06** | Excluir tarefas | 🟡 |
| **RF07** | Mostrar a porcentagem de tarefas concluídas em uma barra de progresso | 🟡 |
| **RF08** | Manter tarefas e favorita salvas entre as visitas | 🔴 |
| **RF09** | Exibir uma mensagem quando a lista estiver vazia | 🟢 |

---

## 🛡️ Requisitos não funcionais

| Código | Categoria | Requisito |
| --- | --- | --- |
| **RNF01** | 🙂 Usabilidade | Ações em até dois cliques, com textos claros em português |
| **RNF02** | ⚡ Desempenho | Carregar em menos de 2 s em 4G e responder às ações em menos de 100 ms |
| **RNF03** | 📱 Responsividade | Funcionar a partir de 360 px de largura, sem rolagem horizontal |
| **RNF04** | ♿ Acessibilidade | Foco visível no teclado, contraste adequado, rótulos nos campos e respeito à preferência de movimento reduzido |
| **RNF05** | 🌐 Compatibilidade | Versões recentes de Chrome, Firefox, Safari e Edge |
| **RNF06** | 🔒 Privacidade | Nenhum dado pessoal enviado a servidores |
| **RNF07** | 🧱 Confiabilidade | Continuar funcionando na sessão se o armazenamento local estiver indisponível |
| **RNF08** | 🧹 Manutenibilidade | Código em um único arquivo HTML, organizado por seções |

---

## 🧰 Tecnologias utilizadas

| 🔧 Tecnologia | 📝 Uso no projeto |
| --- | --- |
| **HTML5** | Estrutura da página, com rótulos e atributos de acessibilidade (`aria-label`, `aria-live`) |
| **CSS3** | Variáveis CSS (`:root`), Flexbox, Grid, `clip-path`/`border-radius` para os dentes e presas, textura de grão com SVG embutido, `prefers-reduced-motion` |
| **JavaScript (ES6+)** | Toda a lógica, sem frameworks nem bibliotecas |
| **Web Storage API (`localStorage`)** | Persistência de tarefas e fantasia favorita |
| **SVG inline** | Fantasmas decorativos |
| **Google Fonts** | Rubik Wet Paint (título), Bagel Fat One (destaques) e Archivo (texto) |
| **Netlify** | Hospedagem estática |

> ℹ️ Não há `package.json`, etapa de build, backend nem dependências para instalar.

---

## 🏗️ Arquitetura

A aplicação é **estática e do lado do cliente**: um único arquivo `index.html` contém estrutura, estilos e scripts. Não há servidor próprio.

```text
┌───────────────────────── Navegador ─────────────────────────┐
│                                                             │
│   index.html                                                │
│   ├── 🎨 <style>   → tema, layout, responsividade           │
│   ├── 🧱 <body>    → cabeçalho + aplicativo                 │
│   └── ⚙️ <script>  → lógica                                 │
│          │                                                  │
│          ▼                                                  │
│   💾 localStorage  (chaves: "fav" e "tarefas")              │
└─────────────────────────────────────────────────────────────┘
          ▲
          │ somente carrega o arquivo e as fontes
   🌐 Netlify (HTML)      🔤 Google Fonts (CSS das fontes)
```

### 🧩 Organização dos componentes

| 🧱 Componente | 📍 Elemento | ⚙️ Função (JavaScript) | 📋 Requisitos |
| --- | --- | --- | --- |
| **Contagem regressiva** ("dentes") | `#count` | `alvo()` calcula a data do próximo 31/10; `tick()` redesenha a cada segundo | RF01 |
| **Sorteador de fantasia** | `#fant`, `#sort`, `#fav`, `#favtxt` | Listas `per` (personagens) e `est` (estilos); `showFav()` | RF02, RF03 |
| **Lista da festa** | `#f`, `#novo`, `#lista`, `#vazio` | `render()` desenha a lista; `salvar()` grava e redesenha | RF04 a RF07, RF09 |
| **Barra de progresso** | `#bar` | Atualizada dentro de `render()` | RF07 |
| **Camada de armazenamento** | objeto `store` | `store.get(chave, padrão)` e `store.set(chave, valor)`, ambos com `try/catch` | RF08, RNF07 |

### 🔁 Fluxo de dados

```text
 Ação do usuário (clique / envio de formulário)
          │
          ▼
 Atualiza o array em memória  (ex.: tarefas.push(...))
          │
          ▼
 salvar() ──► store.set() ──► localStorage
          │
          ▼
 render() ──► redesenha a lista e a barra de progresso
```

### 📁 Estrutura sugerida do repositório

```text
noite-sombria/
├── index.html      # aplicação completa
├── README.md       # esta documentação
└── netlify.toml    # (opcional) configuração de deploy
```

---

## 🚀 Instalação e execução

### ✅ Pré-requisitos

| 📦 Item | 🔖 Obrigatório? | 📝 Observação |
| --- | --- | --- |
| Navegador moderno (Chrome, Firefox, Safari ou Edge) | Sim | Versões recentes |
| Git | Para clonar o repositório | Opcional se baixar o ZIP |
| Python 3 **ou** Node.js | Não | Só para abrir um servidor local, se preferir |

### 📥 Instalação

```bash
git clone https://github.com/Milkaarz/noite-sombria.git
cd noite-sombria
```

### ▶️ Execução

**Opção 1: abrir direto.** Dê dois cliques em `index.html`.

**Opção 2: servidor local (recomendado).**

```bash
# com Python 3
python3 -m http.server 8000

# ou com Node.js
npx serve .
```

Depois acesse `http://localhost:8000`.

---

## 🔧 Configuração

O projeto não exige configuração para rodar. Se quiser personalizar, edite o `index.html`:

| ✏️ O que mudar | 📍 Onde |
| --- | --- |
| Personagens das fantasias | Array `per` no `<script>` |
| Estilos das fantasias | Array `est` no `<script>` |
| Tarefas iniciais | Valor padrão de `store.get('tarefas', [...])` |
| Cores do tema | Variáveis em `:root` (`--blood`, `--pump`, `--grn`, `--ink`, `--bg`) |
| Data da contagem | Função `alvo()` (mês `9` = outubro, dia `31`) |

---

## 🔌 APIs, banco de dados e variáveis de ambiente

| 📚 Item | 📋 Situação |
| --- | --- |
| **APIs próprias** | Não há. O sistema não faz requisições a servidores, exceto o carregamento das fontes |
| **Banco de dados** | Não há. Os dados ficam no `localStorage` do navegador |
| **Variáveis de ambiente** | Não há. Nenhuma chave ou segredo é necessário |

### 💾 Dados guardados no `localStorage`

| 🔑 Chave | 🧾 Formato | 📝 Exemplo |
| --- | --- | --- |
| `tarefas` | Lista de objetos `{ t: texto, d: concluída }` | `[{"t":"Comprar doces","d":false}]` |
| `fav` | Texto | `"Bruxa retrô anos 80"` |

---

## 🧪 Testes

O projeto não possui testes automatizados. A verificação é **manual**, seguindo o roteiro abaixo.

| 🧪 Caso | 👣 Passos | ✅ Resultado esperado | 📋 Requisito |
| --- | --- | --- | --- |
| CT01 | Abrir a página | Os dentes mostram dias, horas, minutos e segundos e o segundo muda sozinho | RF01 |
| CT02 | Clicar em "Sortear fantasia" várias vezes | Surge uma combinação nova de personagem e estilo | RF02 |
| CT03 | Sortear, clicar em "Salvar favorita" e recarregar | A favorita continua exibida | RF03, RF08 |
| CT04 | Adicionar uma tarefa | Ela aparece na lista | RF04 |
| CT05 | Marcar e desmarcar uma tarefa | O texto é riscado e volta ao normal | RF05 |
| CT06 | Clicar em × | A tarefa some | RF06 |
| CT07 | Concluir metade das tarefas | A barra verde chega a cerca de 50% | RF07 |
| CT08 | Recarregar a página | Tarefas e estados continuam | RF08 |
| CT09 | Excluir todas as tarefas | Aparece a mensagem de lista vazia | RF09 |
| CT10 | Reduzir a janela até 360 px | Sem rolagem horizontal da página | RNF03 |
| CT11 | Navegar só com o teclado (Tab) | O foco fica visível em todos os controles | RNF04 |
| CT12 | Abrir em Chrome, Firefox, Safari e Edge | Funciona igual nos quatro | RNF05 |

💡 Para medir desempenho e acessibilidade, rode o **Lighthouse** (aba "Lighthouse" das ferramentas do desenvolvedor do Chrome).

---

## 🌐 Deploy

O site está publicado na **Netlify**: https://hallowenies.netlify.app/

### Opção 1: arrastar e soltar

1. Acesse https://app.netlify.com/drop.
2. Arraste a pasta do projeto (com o `index.html` na raiz).

### Opção 2: integração com o GitHub (deploy contínuo)

1. No Netlify, escolha **Add new site → Import an existing project** e conecte o repositório.
2. Deixe **Build command** em branco.
3. Defina **Publish directory** como `.` (a raiz).
4. A cada `git push`, o site é atualizado automaticamente.

> ⚠️ O arquivo principal precisa se chamar `index.html` e ficar na raiz, para a Netlify abri-lo como página inicial.

---

## 📖 Glossário

| 🔤 Termo | 💬 Significado |
| --- | --- |
| **Escopo** | Lista do que o sistema faz e do que não faz |
| **Requisito funcional (RF)** | Algo que o sistema deve *fazer* |
| **Requisito não funcional (RNF)** | Uma qualidade que o sistema deve *ter* (rapidez, segurança, acessibilidade) |
| **Responsivo** | Que se adapta a telas de qualquer tamanho |
| **localStorage** | Espaço no navegador onde o site guarda informações, mesmo após fechar a página |
| **Deploy** | Publicação do site na internet |
| **Contraste** | Diferença entre cor do texto e do fundo, que garante boa leitura |

---

<p align="center">🎃 👻 🦇 🕸️ 🕯️<br><b>Noite Sombria</b> · Halloween 31/10</p>
