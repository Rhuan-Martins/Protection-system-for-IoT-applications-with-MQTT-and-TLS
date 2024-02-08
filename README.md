# Resumo Pessoal
<img src="https://raw.githubusercontent.com/MicaelliMedeiros/micaellimedeiros/master/image/computer-illustration.png" min-width="400px" max-width="400px" width="400px" align="right" alt="Computador iuriCode">

<p align="justify"> 
  Engenheiro de Controle e Automação formado pelo IFSP (Instituto Federal de Educação, Ciência e Tecnologia de São Paulo), com habilidades e  experiência em chão de fábrica, equipamentos industriais e processos de produção.<br>
</p>

<p align="left">
  🦄 Linguagens: <strong><img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/> <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" /> <img src="https://img.shields.io/badge/C%23-239120?style=for-the-badge&logo=c-sharp&logoColor=white" /> <img src="https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white" />.</strong>
</p>

## Tema do trabalho de conclusão: Ferramentas de segurança de dados para sistemas IOT
> Orientado: Rhuan Martins de Souza; 
> Orientador: Esdras Nicoletto da Cunha

### 💻 Resumo
<p align="justify"> A automação residencial é uma área da tecnologia que estuda a automatização de uma
residência ou habitação para oferecer conforto, praticidade e segurança. Nas últimas décadas, muitos
profissionais se concentraram em conectar equipamentos, sensores e atuadores à Internet, para permitir
que os usuários controlem e monitorem as coisas a qualquer hora e em qualquer lugar. Diversos
equipamentos IoT(Internet of things) podem ter problemas em relação a segurança de informações,
por estarem diretamente conectados à rede doméstica, além de toda a comunicação facilitada, o
equipamento também fica suscetível à diversos ataques, que comprometem as suas funcionalidades,
criando caminhos, onde usuários não autorizados podem aproveitar as brechas de segurança e roubar
dados pessoais diretamente da rede doméstica. Este trabalho comprova uma metodologia de aplicação
de IOT, utilizando um Raspberry Pi, onde os principais sistemas de proteção e comunicação estão
configurados, o microcontrolador ESP32, que é responsável por receber os dados do sensor de
gás(MQ-02) e os envia-los ao Raspberry Pi com segurança e praticidade. Assim como qualquer
sistema IoT, que traz os benefícios da integração de equipamentos digitais e gera automatização de
tarefas, mas com foco principal na proteção dos dados do sistema e dos dispositivos conectados à
rede, através de ferramentas de segurança e boas práticas de design de rede, visando diminuir as
fragilidades possíveis nos dispositivos conectados à rede.</p>

# Anotações utilizadas para apresentar juntamente com os slides
<p align="justify">
  
Slide 1 - Apresentação/agradecimento pela participação da banca

Slide 2 - Introdução:

Dispositivos IoT, ou Internet das Coisas, são aparelhos que possuem conexão com a internet e que coletam, processam e transmitem dados sem a necessidade de intervenção humana direta. Eles podem ser sensores, atuadores, controladores, equipamentos de monitoramento, entre outros. 

Um exemplo do benefício dos dispositivos IoT é a domótica, sendo o conjunto de tecnologias utilizadas para automatizar e integrar funções de uma residência. Com a IoT, é possível controlar diversos dispositivos eletrônicos, como luzes, termostatos, sistemas de segurança, aparelhos eletrodomésticos, entre outros, por meio de uma única plataforma. Isso traz maior comodidade para o usuário, além de reduzir o consumo de energia elétrica. A domótica é apenas um dos muitos exemplos de como a IoT pode transformar a maneira como vivemos.

Slide 3 - Justificativa 

O questionamento que eu gostaria de fazer é, em termos de segurança

Mas até que ponto é seguro adicionar diversos equipamentos diretamente a uma rede domestica? 

Desde antes da internet, já haviam pessoas que procuravam modos de atrapalhar o funcionamento de dispositivos ou modificar mensagens enviadas, existem relatos de que no começo dos anos 1900, haviam mensagem de código morse que foram modificadas, por manipulação de ondas de rádio e isso se mantêm até hoje. 

Adicionar diversos equipamentos diretamente a uma rede pode apresentar riscos à segurança, especialmente se esses dispositivos não forem projetados com medidas de segurança adequadas. Dispositivos IoT geralmente possuem recursos limitados portanto, podem ser mais vulneráveis a ataques cibernéticos. Além disso, muitos dispositivos IoT são fabricados por empresas diferentes, cada uma com suas próprias práticas de segurança, o que pode resultar em uma rede heterogênea com dispositivos que variam amplamente em termos de segurança.

É importante adotar medidas de segurança para minimizar esses riscos, como a segmentação da rede para separar dispositivos críticos de dispositivos menos seguros, o uso de senhas fortes e criptografia de dados, além de manter os dispositivos atualizados com as últimas correções de segurança. Também é recomendável evitar conectar dispositivos IoT diretamente à Internet sem proteção adequada, como firewalls e sistemas de detecção de intrusão.

Slide 4 - Objetivos

Diante desses fatos, a ideia é implementar um sistema Iot com enfoque em automação residencial de uma maneira que traga segurança tanto para o sistema em si, quanto para os usuários da rede. 

Objetivos específicos:
- Analisar se há um bom funcionamento entre web servers e raspberry pi.
- Verificar como o Design de redes afeta a movimentação e privacidade dos dados do usuário do sistema. 
- Implementar um sistema de comunicação seguro entre dispositivos IoT

Slide 5- Pesquisa Bibliográfica  
 
Com o avanço da tecnologia, a interconexão de dispositivos inteligentes tem se tornado cada vez mais comum. Essa rede de dispositivos, conhecida como Internet das Coisas (IoT), traz consigo inúmeras possibilidades para tornar nossas vidas mais eficientes e convenientes. No entanto, a complexidade da estrutura de sistemas IoT pode trazer desafios para sua implementação e segurança. 

Iremos decorrer os seguintes tópicos:

Estrutura de sistemas IoT

Ataques utilizados em IoTs

Meios de proteção aplicáveis 

Slide 6 - Estrutura do sistema 
 
Nesse primeiro tópico, abordaremos a estrutura de sistemas IoT e suas principais características

Neste caso, teremos um Iot com quatro camadas, sendo essas camadas, de aplicação, de processamento, de transporte e de percepção, respectivamente responsáveis pela interface IHM, web-server, transmissão e recebimento de dados e por último, a camada responsável pelos sensores e atuadores. 

Slide 7 - Ataques utilizados em Iots

Para esse caso, alguns dos ataques são:  

Injeções de códigos maliciosos; reprogramação forçada do sistema; Structured Query Language(SQL) Injection; Ataques de Interceptação de dados; DDOS(Denial-of-service) (ataque de negação de serviço); ataques de roteamento, entre outros.

Alguns desses ataques podem gerar o sequestro da rede em que o sistema IoT está conectado, disponibilizando todos os dados que são trafegados pela rede ao invasor, possibilitando acesso aos dispositivos conectados a rede(celulares, computadores, tvs smart, qualquer coisa previamente conectada a rede), facilitando o acesso a dados pessoais, acesso a compras na internet, logins, senhas, conversas, tudo que é enviado ou recebido dentro desses dispositivos, pode ser acessado. 

Slide 8 - Proteções aplicadas

Com o crescimento exponencial de dispositivos IoT conectados, a segurança desses equipamentos tornou-se uma preocupação crescente. A falta de padronização e de medidas de segurança adequada torna os dispositivos vulneráveis a ataques cibernéticos e invasões, o que pode levar a graves consequências, como vazamento de informações confidenciais, interrupção de serviços essenciais e danos à integridade física dos usuários.

Nesse contexto, o design de rede e a implementação de mecanismos de segurança eficientes são fundamentais para garantir a proteção dos dispositivos IoT. Através da utilização de redes segregadas, controle de acesso, autenticação e criptografia, é possível reduzir os riscos de ataques e garantir a confidencialidade, integridade e disponibilidade dos dados transmitidos pelos dispositivos IoT.

Slide 9 - Conexão com protocolo TLS (Transport Layer Security).

O TLS (Transport Layer Security) é um protocolo de segurança utilizado para proteger a comunicação entre aplicações através da Internet

Utiliza criptografia para garantir a privacidade e a integridade dos dados transmitidos, além de fornecer autenticação para verificar a identidade dos envolvidos na comunicação. 

Ele utiliza criptografia de chave pública para estabelecer um canal seguro entre as partes envolvidas, 

Criptografia com chave pública é um esquema unilateral(criptografia assimétrica) que usa um par de chaves para encriptação: uma chave pública, que encripta dados, e uma chave privada correspondente, secreta para desencriptação. Você diz sua chave pública para todos enquanto que você mantém sua chave privada em segredo. Qualquer um com uma cópia de sua chave pública, pode, então, encriptar informação que só você pode ler(você é o receptor e as pessoas que tem a sua chave pública é que podem encriptar a informação para você), ou seja, nem mesmo as pessoas que encriptaram a informação para você, descobrem a informação original.

Slide 10 - TLS - funcionamento do handshake no projeto

1- O cliente envia uma solicitação de conexão(Olá).
2- O servidor responde com o certificado digital que contém a chave pública.
3- O cliente verifica o certificado(APÊNDICE A, contida da linha treze até a linha, trinta e dois) 
4- O cliente gera uma chave de sessão usando a chave pública do servidor.
5- O cliente envia o certificado.
6- O servidor verifica o certificado do cliente.
7- O cliente termina o reconhecimento
8- O servidor termina o reconhecimento.
9- Inicia-se a troca de mensagens criptografada pela própria chave da sessão.

O processo de negociação do TLS envolve um handshake entre o cliente e o servidor, no qual são trocadas informações como as versões suportadas pelo cliente e pelo servidor, chaves criptográficas, algoritmos de criptografia e outros parâmetros de segurança. O objetivo deste processo é estabelecer uma conexão segura entre o cliente e o servidor antes que qualquer dado seja transmitido.

Dessa forma, a chave privada nunca é compartilhada. 

Slide 11 - DMZ

DMZ significa "Zona Desmilitarizada", é uma área de rede separada que atua como uma camada intermediária de segurança entre a rede interna de uma organização e a Internet pública. A DMZ é geralmente usada para hospedar serviços ou aplicativos que precisam estar acessíveis a usuários externos, como servidores web.

A ideia por trás da DMZ é fornecer um espaço limitado e controlado para permitir a comunicação entre a rede interna da organização e a Internet, reduzindo assim o risco de ataques diretos à rede interna. Os servidores na DMZ são configurados com políticas de segurança mais rigorosas do que os servidores na rede interna, com acesso limitado apenas aos serviços necessários para seu funcionamento.

Explicar a estrutura

Slide 12 - Metodologia

Os pontos principais da metodologia são: equipamentos e a estrutura implementada; implementação do OpenHabian; implementação do MQTT e TLS e da DMZ.

Slide 13 - Equipamentos e estrutura implementada

Hardware: Será utilizado um Raspberry pi 3 model b, um micro-computador, com um processador Quad Core 1.2GHz, 1 GB de memória RAM, e wireless(rede sem fio), responsável por receber os dados enviados pelo ESP32, e disponibilizá-los através da interface OpenHABian; 
um microcontrolador ESP32(dual core, com conectividade wifi de baixo custo e consumo de energia); 

um módulo de sensor de gás(MQ-02) com faixa de detecção de gás inflamável de 300 a 10000 ppm(partes por milhão), que indica concentração do gás em um milhão de partes de ar; 

um roteador TL-WR949N(Onde será aplicado a DMZ na porta onde o RPi fica conectado) 

e também um computador com o sistema Windows(servirá para acessar o webserver gerado pelo OpenHABian e configuração do roteador). 

Software e protocolos: Será utilizado o OpenHABian, que junta o sistema operacional Linux e o software de automação residencial openhab, o mesmo será responsável por gerar a interface homem-máquina e permitir/negar o envio de comandos por dispositivos autorizados na rede; 

PUTTY, terminal de simulação open source, que cria conexões seguras com canais criptografados; 

protocolo MQTT, para comunicação entre o RPi e o ESP32, o MQTT Broker utilizado será o Eclipse Mosquitto; 

Openssl, uma biblioteca de criptografia que suporta protocolos como o TLS; 

TPCDUMP, ferramenta utilizada para visualizar e examinar pacotes de rede em tempo real, verificando a segurança da rede e o seu desempenho;

UFW(The Uncomplicated Firewall) estrutura para gerenciar o filtro da internet, bem como uma interface de linha de comando para manipular o firewal(PITT, 2007).

Slide 14 - Implementação do OpenHabian

Este é um setup simples, consiste em acessar no repositório da openhab a imagem do openhabian, e utilizar um software como o Etcher para gravar a imagem no cartão SD e inserir o cartão no Raspberry, ligar o raspberry e deixa-lo se auto configurar durante aproximadamente 30 minutos. Apos o setup. Poderá acessar por SSH ou pelo webserver utilizando o navegador na porta 8080. 

No primeiro acesso, será configurado o usuário administrador, com nome e senha. 

Slide 15 - Implementação do MQTT e TLS

Para configurar o MQTT com Eclipse e TLS em um Raspberry Pi via SSH, é necessário seguir alguns passos. Primeiramente, é preciso instalar o MQTT Broker Mosquitto e, em seguida, configurá-lo para usar o protocolo TLS. Gerar um par de chaves e certificados utilizando o OpenSSL. Após gerados, os certificados devem ser copiados para o diretório do Mosquitto.

Em seguida, é preciso configurar o cliente MQTT para usar o protocolo TLS. Isso envolve a geração de um par de chaves e certificados para o cliente MQTT, também usando o OpenSSL. O cliente deve ser configurado para se conectar ao Mosquitto usando o protocolo MQTT com TLS.

Por fim, é importante testar a conexão para verificar se tudo está funcionando corretamente. Isso pode ser feito utilizando ferramentas como o mosquitto_sub para se inscrever em um tópico e o mosquitto_pub para publicar uma mensagem em um tópico. Se a conexão estiver funcionando corretamente, as mensagens devem ser criptografadas com o protocolo TLS.

Slide 16 - Implementação do TLS

Primeiramente, o TLS irá usar os algoritmos RSA e 3DES

RSA: significa "Rivest-Shamir-Adleman", sendo um algoritmo criptográfico de chave pública criado por Ron Rivest, Adi Shamir e Leonard Adleman em 1977. 

A segurança do RSA é baseada na dificuldade de fatorar números inteiros grandes em seus fatores primos.

O processo de encriptação começa com o remetente transformando a mensagem em um número inteiro, e em seguida, criptografando esse número com a chave pública do destinatário. A mensagem criptografada é então enviada ao destinatário, que usa sua chave privada para descriptografar a mensagem de volta para o texto original.

O processo de geração das chaves RSA envolve a escolha de dois números primos grandes e distintos, e a computação do produto desses números, que é utilizado como o módulo para o algoritmo. Em seguida, é gerado um valor de expoente de criptografia, que é relativamente primo ao valor de phi, o que garante a existência de uma chave de descriptografia correspondente.

O algoritmo RSA é amplamente utilizado em sistemas de segurança de informação, como criptografia de e-mails e autenticação em sistemas de criptomoedas. No entanto, a sua segurança pode ser comprometida por meio de ataques de força bruta, fatoração de números primos grandes ou ataques a implementações vulneráveis.

3DES:Triple Data Encryption Standard) é uma versão aprimorada do algoritmo de criptografia DES, que usa três chaves de 56 bits em vez de uma única chave. Ele é amplamente utilizado em sistemas de segurança de dados para criptografar informações confidenciais, como senhas e números de cartão de crédito.

O 3DES usa um processo de criptografia em bloco, em que cada bloco de dados é criptografado separadamente. O algoritmo executa uma operação conhecida como cifração, que embaralha os bits do bloco de dados para produzir uma sequência aparentemente aleatória de bits. Isso é feito três vezes com chaves diferentes para garantir maior segurança.

Esses comandos, têm a função de, respectivamente, instalar o openssl; gerar uma chave privada com algoritmo RSA é criptografada por algoritmo 3DES, salvar essa chave no arquivo ca.key(chave do cliente) com o tamanho de 2048 bits; gerar a “entidade” responsável por emitir e gerenciar o certificado digitais CA(Certificate Authority); gerar a chave do servidor; cria um certificado de requisição CSR(Certificate Signing Request), que contém informações sobre o servidor, como nome de domínio, e é usada para solicitar o certificado assinado pela autoridade de certificação CA, sendo responsável por estabelecer a identidade do servidor para os clientes que se conectam ao serviço; cria o certificado do MQTT Broker, utilizando os certificados e chaves já criados, juntamente com um número de série único do certificado. 

Também é necessário criar um arquivo de texto, no diretório “/etc/mosquitto/conf.d”:

Esse arquivo será carregado e iniciado no MQTT Broker, ditando as regras de funcionamento dele, identificando os certificados e a chave do servidor, além da preferência de comunicação pelo protocolo TLS 1.2. A configuração em relação ao MQTT Broker diretamente no openhan, acessada, com qualquer navegador web pela porta 8080 tem poucas diferenças da anterior, basta adicionar a porta 8883, manter o usuário e senha escolhidos, e adicionar a hash(resumo) do CA nas configurações avançadas. 

Slide 17 - Implementação da DMZ

A DMZ (zona desmilitarizada) é uma rede separada que é configurada em um roteador para permitir o acesso direto à Internet para um dispositivo específico. Isso é útil para dispositivos que precisam de acesso externo, como servidores web, sem comprometer a segurança da rede interna.

Para configurar uma DMZ em um roteador comum, é necessário acessar as configurações do roteador e encontrar a opção para configurar a DMZ. Em seguida, é necessário selecionar o endereço IP do dispositivo que será colocado na DMZ. Este endereço IP será exposto diretamente à Internet, sem as proteções do firewall do roteador.

Uma vez configurada a DMZ, o dispositivo selecionado terá acesso direto à Internet, mas permanecerá isolado da rede interna. É importante lembrar que colocar um dispositivo na DMZ expõe-no a ameaças externas, portanto, é importante garantir que o dispositivo esteja adequadamente protegido com mecanismos de segurança, como atualizações de software regulares e autenticação forte.

Slide 18 - Resultados obtidos

Nessa primeira figura temos uma resposta ideal e apresenta as conexões estabelecidas, observa-se em vermelho, as conexões do MQTT Broker, e em azul, as conexões estabelecidas entre o MQTT Broker e o MQTT Client.

Nesse caso, temos uma conexão pela porta 1883, sem o protocolo TLS, para visualizarmos como os dados trafegam na rede

Utilizando o TPCDump, podemos observar essa resposta abaixo

Observamos os dados no retângulo verde, os equipamentos que estão se comunicando, IP 192.168.0.100(RPi) está recebendo informações do IP 192.168.0.102 (ESP32), os dados estão sendo publicados no tópico “myHome/gasSensor” (no quadrado vermelho), o número ao lado do tópico corresponde ao valor do sensor. A conexão entre o microcontrolador e o servidor MQTT foi estabelecida com sucesso mediante a utilização da porta 1883, mas de acordo com a figura 6, nota-se que o sistema está vulnerável em relação aos dados dos pacotes enviados, e recebidos.

Slide 19 - Resultados obtidos

Vemos os dados de forma diferente, pois se trata do tráfego após a implementação de todos os algoritmos(RSA, 3DES e protocolo de comunicação TLS), no quadrado verde, os equipamentos que estão se comunicando, IP 192.168.0.100(RPi) está recebendo informações do IP 192.168.0.103(ESP32), os dados estão sendo publicados no tópico myHome/gasSensor, mas não é possível identificar o tópico de publicação e nem o conteúdo dos pacotes. 

Com base na sequência do handshake e na metodologia implementada, é nítido que as táticas foram implementadas de forma correta e tiveram a funcionalidade explorada. Após gerar todos os certificados e chaves necessárias, assim como liberar as portas por meio do UFW e configurar o MQTT Broker no Openhab, obtemos esse resultado, mostrando o tráfego dos dados na porta 8883. 

Utilizando um protocolo TLS com chaves e certificados gerados pelo OpenSSL, os dados trocados entre o MQTT broker e o MQTT client são criptografados, o que reduz a possibilidade da interceptação e manipulação por parte de terceiros mal-intencionados.

Slide 20 - Considerações finais

Considerando o sistema, é possível concluir que a utilização de um protocolo seguro de comunicação como o TLS pode trazer diversos benefícios em termos de segurança e privacidade para a transmissão de dados em sistemas IoT. A utilização do MQTT como protocolo de comunicação também mostrou-se eficiente, permitindo a troca de mensagens de forma assíncrona. Além disso, a utilização do Raspberry Pi como centralizador do sistema, juntamente com o uso do OpenHABian como sistema operacional, permitiu uma fácil integração entre os diferentes componentes do projeto, bem como a disponibilidade de ferramentas de gerenciamento e monitoramento. A utilização do UFW para gerenciamento de portas, bem como a geração e uso de chaves e certificados criptográfados com o OpenSSL, da mais segurança da comunicação entre os dispositivos, evitando possíveis ataques externos, tais como:

Interceptação de dados

Modificação de dados

Spoofing onde um atacante tenta se passar por um dispositivo legítimo. 

Ataques de negação de serviço (DoS): o uso de TLS também pode ajudar a prevenir ataques DoS que tentam inundar o MQTT broker com solicitações falsas ou excessivas, pois o protocolo TLS tem recursos para limitar o número de conexões por segundo.

Sniffing: o uso de TLS também ajuda a prevenir ataques de sniffing, onde um atacante tenta capturar informações sensíveis

Assim, conclui-se que a utilização da arquitetura proposta, com a combinação de diferentes tecnologias e ferramentas, permitiu a criação de um sistema de monitoramento (IoT) da qualidade do ar de forma segura, eficiente e com baixo consumo de recursos.

Slide 21 - Limitações 

Uma limitação desse sistema é a falta de um firewall físico na DMZ. Embora o firewall do sistema operacional (como o UFW neste caso) possa ajudar a bloquear tráfego indesejado, um firewall físico dedicado pode oferecer uma proteção mais robusta. Um firewall físico pode inspecionar o tráfego de rede em um nível mais profundo e tomar decisões de bloqueio com base em políticas específicas de segurança. No entanto, a implementação de um firewall físico também adiciona complexidade ao sistema e pode aumentar os custos de infraestrutura.

Outra limitação é que o sistema não oferece proteção contra ataques de força bruta. Se um atacante conseguir acesso às chaves de criptografia ou senhas, ele poderá tentar adivinhar a chave ou senha através de tentativa e erro. Para minimizar esse risco, é importante escolher senhas seguras e utilizar medidas adicionais de autenticação, como a autenticação em dois fatores.
Além disso, o sistema não oferece proteção contra ataques de phishing, que são aqueles em que um atacante tenta enganar o usuário final para obter informações confidenciais, como senhas ou chaves de criptografia. É importante que os usuários finais sejam treinados para reconhecer esse tipo de ataque e evitar clicar em links suspeitos ou fornecer informações confidenciais.

Slide 22 - Agradecimento.</p>
