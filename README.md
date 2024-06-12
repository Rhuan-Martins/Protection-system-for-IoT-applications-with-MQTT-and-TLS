# Personal Summary
<img src="https://raw.githubusercontent.com/MicaelliMedeiros/micaellimedeiros/master/image/computer-illustration.png" min-width="400px" max-width="400px" width="400px" align="right" alt="Computador iuriCode">

<p align="justify"> 
  Control and Automation engineer graduated from the IFSP (Federal Institute of Education, Science and Technology of São Paulo), with skills and experience on the shop floor, industrial equipment and production processes.<br>
</p>

<p align="left">
  🦄 I code with: <strong><img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white"/> <img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" /> <img src="https://img.shields.io/badge/C%23-239120?style=for-the-badge&logo=c-sharp&logoColor=white" /> <img src="https://img.shields.io/badge/Python-3776AB?style=for-the-badge&logo=python&logoColor=white" />.</strong>
</p>

## Final paper topic: Data security tools for IOT systems
> Oriented: Rhuan Martins de Souza; 
> Advisor: Esdras Nicoletto da Cunha

### 💻 Abstract
<p align="justify"> Home automation is an area of technology that studies the automation of a
home to offer comfort, practicality and security. In recent decades, many
professionals have focused on connecting equipment, sensors and actuators to the Internet, to allow users to
users to control and monitor things anytime, anywhere. Various
IoT (Internet of Things) equipment can have problems with information security,
Because they are directly connected to the home network, in addition to all the facilitated communication, the
equipment is also susceptible to various attacks that compromise its functionality,
creating paths where unauthorized users can take advantage of security breaches and steal personal data directly from the home network.
personal data directly from the home network. This work demonstrates a methodology for applying
using a Raspberry Pi, where the main protection and communication systems are configured, the microcontroller
the ESP32 microcontroller, which is responsible for receiving data from the gas sensor (MQ-02) and the
sensor (MQ-02) and sending it to the Raspberry Pi safely and conveniently. As with any
IoT system, which brings the benefits of integrating digital equipment and automating
automation of tasks, but with the main focus on protecting the system's data and the devices connected to the
network, using security tools and good network design practices, with the aim of reducing the possible
possible weaknesses in the devices connected to the network.</p>

# Notes used to present along with the slides
<p align="justify">
  
Slide 1 - Presentation/thank you for participating in the panel

Slide 2 - Introduction:

IoT devices, or the Internet of Things, are devices that have an internet connection and that collect, process and transmit data without the need for direct human intervention. They can be sensors, actuators, controllers, monitoring equipment and so on. 

One example of the benefits of IoT devices is home automation, which is the set of technologies used to automate and integrate functions in a home. With IoT, it is possible to control various electronic devices, such as lights, thermostats, security systems, household appliances, among others, through a single platform. This brings greater convenience to the user, as well as reducing electricity consumption. Home automation is just one of many examples of how IoT can transform the way we live.

Slide 3 - Justification 

The question I would like to ask is, in terms of security

But how safe is it to add several devices directly to a home network? 

Since before the internet, there have been people looking for ways to disrupt the operation of devices or modify messages sent, there are reports that in the early 1900s, there were Morse code messages that were modified by manipulating radio waves and this continues today. 

Adding multiple devices directly to a network can pose security risks, especially if these devices are not designed with adequate security measures. IoT devices generally have limited resources and can therefore be more vulnerable to cyber attacks. In addition, many IoT devices are manufactured by different companies, each with their own security practices, which can result in a heterogeneous network with devices that vary widely in terms of security.

It is important to adopt security measures to minimize these risks, such as segmenting the network to separate critical devices from less secure ones, using strong passwords and data encryption, and keeping devices up to date with the latest security patches. It is also advisable to avoid connecting IoT devices directly to the Internet without adequate protection, such as firewalls and intrusion detection systems.

Slide 4 - Objectives

Given these facts, the idea is to implement an IoT system with a focus on home automation in a way that brings security both to the system itself and to the users of the network. 

Specific objectives:
- Analyze whether there is a good functioning between web servers and raspberry pi.
- Check how network design affects the movement and privacy of the system's user data. 
- Implement a secure communication system between IoT devices

Slide 5- Bibliographic Research  
 
With the advance of technology, the interconnection of smart devices has become increasingly common. This network of devices, known as the Internet of Things (IoT), brings with it countless possibilities to make our lives more efficient and convenient. However, the complexity of the structure of IoT systems can pose challenges for their implementation and security. 

We will go through the following topics:

Structure of IoT systems

Attacks used in IoT

Applicable means of protection 

Slide 6 - System structure 
 
In this first topic, we'll look at the structure of IoT systems and their main characteristics

In this case, we will have an IoT with four layers: application, processing, transport and perception, respectively responsible for the HMI interface, web-server, data transmission and reception, and finally, the layer responsible for sensors and actuators. 

Slide 7 - Attacks used on Iots

For this case, some of the attacks are:  

Malicious code injections; forced system reprogramming; Structured Query Language(SQL) Injection; Data Interception Attacks; DDOS(Denial-of-service); routing attacks, among others.

Some of these attacks can lead to the hijacking of the network to which the IoT system is connected, making all the data that is trafficked over the network available to the attacker, enabling access to devices connected to the network (cell phones, computers, smart TVs, anything previously connected to the network), facilitating access to personal data, access to purchases on the internet, logins, passwords, conversations, everything that is sent or received within these devices can be accessed. 

Slide 8 - Protections applied

With the exponential growth of connected IoT devices, the security of this equipment has become a growing concern. The lack of standardization and adequate security measures makes devices vulnerable to cyber attacks and intrusions, which can lead to serious consequences such as the leakage of confidential information, the interruption of essential services and damage to the physical integrity of users.

In this context, network design and the implementation of efficient security mechanisms are key to ensuring the protection of IoT devices. By using segregated networks, access control, authentication and encryption, it is possible to reduce the risk of attacks and guarantee the confidentiality, integrity and availability of the data transmitted by IoT devices.

Slide 9 - Connection with TLS (Transport Layer Security) protocol.

TLS (Transport Layer Security) is a security protocol used to protect communication between applications over the Internet

It uses cryptography to guarantee the privacy and integrity of the data transmitted, as well as providing authentication to verify the identity of those involved in the communication. 

It uses public key cryptography to establish a secure channel between the parties involved, 

Public key cryptography is a one-way scheme (asymmetric cryptography) that uses a pair of keys for encryption: a public key, which encrypts data, and a corresponding, secret private key for decryption. You tell everyone your public key while keeping your private key secret. Anyone with a copy of your public key can then encrypt information that only you can read (you are the receiver and the people who have your public key are the ones who can encrypt the information for you), i.e. not even the people who encrypted the information for you discover the original information.

Slide 10 - TLS - how the handshake works in the project

1- The client sends a connection request (Hello).
2- The server responds with the digital certificate containing the public key.
3- The client verifies the certificate(APPENDIX A, contained from line thirteen to line thirty-two) 
4- The client generates a session key using the server's public key.
5- The client sends the certificate.
6- The server verifies the client's certificate.
7- The client finishes the reconnaissance
8- The server finishes the acknowledgment.
9- The exchange of messages begins, encrypted by the session key itself.

The TLS negotiation process involves a handshake between the client and server, in which information is exchanged such as the versions supported by the client and server, cryptographic keys, encryption algorithms and other security parameters. The aim of this process is to establish a secure connection between the client and the server before any data is transmitted.

In this way, the private key is never shared.

Slide 11 - DMZ

DMZ stands for "Demilitarized Zone" and is a separate network area that acts as an intermediate layer of security between an organization's internal network and the public Internet. The DMZ is generally used to host services or applications that need to be accessible to external users, such as web servers.

The idea behind the DMZ is to provide a limited and controlled space to allow communication between the organization's internal network and the Internet, thus reducing the risk of direct attacks on the internal network. Servers in the DMZ are configured with stricter security policies than servers on the internal network, with access limited to only the services necessary for their operation.

Explain the structure

Slide 12 - Methodology

The main points of the methodology are: equipment and the structure implemented; implementation of OpenHabian; implementation of MQTT and TLS and the DMZ.

Slide 13 - Equipment and structure implemented

Hardware: A Raspberry pi 3 model b will be used, a micro-computer with a Quad Core 1.2GHz processor, 1 GB of RAM, and wireless (wireless network), responsible for receiving the data sent by the ESP32, and making it available via the OpenHABian interface; 
an ESP32 microcontroller (dual core, with low-cost wifi connectivity and low power consumption); 

a gas sensor module (MQ-02) with a flammable gas detection range of 300 to 10000 ppm (parts per million), which indicates the concentration of the gas in one million parts of air; 

a TL-WR949N router (where the DMZ will be applied to the port where the RPi is connected) 

and a Windows computer (to access the webserver generated by OpenHABian and configure the router). 

Software and protocols: OpenHABian will be used, which combines the Linux operating system and the openhab home automation software, which will be responsible for generating the human-machine interface and allowing/denying the sending of commands by authorized devices on the network; 

PUTTY, an open source simulation terminal that creates secure connections with encrypted channels; 

MQTT protocol, for communication between the RPi and the ESP32, the MQTT Broker used will be Eclipse Mosquitto; 

Openssl, a cryptography library that supports protocols such as TLS; 

TPCDUMP, a tool used to visualize and examine network packets in real time, verifying network security and performance;

UFW (The Uncomplicated Firewall), a framework for managing the Internet filter, as well as a command line interface for manipulating the firewall (PITT, 2007).

Slide 14 - Implementing OpenHabian

This is a simple setup, consisting of accessing the openhabian image from the openhab repository, using software such as Etcher to record the image on the SD card and inserting the card into the Raspberry, turning on the raspberry and letting it configure itself for approximately 30 minutes. After setup. You can access it via SSH or via the webserver using the browser on port 8080. 

On first access, the administrator user will be configured, with a name and password. 

Slide 15 - Implementing MQTT and TLS

To set up MQTT with Eclipse and TLS on a Raspberry Pi via SSH, you need to follow a few steps. First, you need to install the MQTT Broker Mosquitto and then configure it to use the TLS protocol. Generate a key pair and certificates using OpenSSL. Once generated, the certificates must be copied to the Mosquitto directory.

Next, you need to configure the MQTT client to use the TLS protocol. This involves generating a key pair and certificates for the MQTT client, also using OpenSSL. The client must be configured to connect to Mosquitto using the MQTT protocol with TLS.

Finally, it is important to test the connection to check that everything is working correctly. This can be done using tools such as mosquitto_sub to subscribe to a topic and mosquitto_pub to publish a message in a topic. If the connection is working properly, messages should be encrypted with the TLS protocol.

Slide 16 - Implementing TLS

Firstly, TLS will use the RSA and 3DES algorithms

RSA: stands for "Rivest-Shamir-Adleman" and is a public key cryptographic algorithm created by Ron Rivest, Adi Shamir and Leonard Adleman in 1977. 

RSA's security is based on the difficulty of factoring large integers into their prime factors.

The encryption process begins with the sender transforming the message into an integer, and then encrypting this number with the recipient's public key. The encrypted message is then sent to the recipient, who uses their private key to decrypt the message back to the original text.

The process of generating RSA keys involves choosing two large, distinct prime numbers and computing the product of these numbers, which is used as the modulus for the algorithm. An encryption exponent value is then generated, which is relatively prime to the value of phi, which guarantees the existence of a corresponding decryption key.

The RSA algorithm is widely used in information security systems, such as email encryption and authentication in cryptocurrency systems. However, its security can be compromised through brute force attacks, factoring of large prime numbers or attacks on vulnerable implementations.

3DES (Triple Data Encryption Standard) is an improved version of the DES encryption algorithm, which uses three 56-bit keys instead of a single key. It is widely used in data security systems to encrypt sensitive information such as passwords and credit card numbers.

3DES uses a block encryption process, in which each block of data is encrypted separately. The algorithm performs an operation known as encryption, which scrambles the bits of the data block to produce an apparently random sequence of bits. This is done three times with different keys to ensure greater security.

These commands have the function of, respectively, installing openssl; generating a private key with the RSA algorithm that is encrypted by the 3DES algorithm, saving this key in the file ca. key (client key) file with a size of 2048 bits; generate the "entity" responsible for issuing and managing the digital CA (Certificate Authority) certificate; generate the server key; create a CSR (Certificate Signing Request) certificate, which contains information about the server, such as the domain name, and is used to request the certificate signed by the CA (Certificate Authority), and is responsible for establishing the server's identity for clients connecting to the service; create the MQTT Broker certificate, using the certificates and keys already created, along with a unique certificate serial number. 

It is also necessary to create a text file in the "/etc/mosquitto/conf.d" directory:

This file will be loaded and started in the MQTT Broker, dictating its operating rules, identifying the certificates and the server key, as well as the preference for communication using the TLS 1.2 protocol. The configuration of the MQTT Broker directly in openhan, accessed with any web browser via port 8080, has few differences from the previous one: just add port 8883, keep the user and password chosen, and add the CA hash (summary) in the advanced settings. 

Slide 17 - DMZ implementation

A DMZ (demilitarized zone) is a separate network that is configured on a router to allow direct access to the Internet for a specific device. This is useful for devices that need external access, such as web servers, without compromising the security of the internal network.

To set up a DMZ on a regular router, you need to access the router's settings and find the option to set up the DMZ. Next, you need to select the IP address of the device that will be placed in the DMZ. This IP address will be directly exposed to the Internet, without the protections of the router's firewall.

Once the DMZ has been set up, the selected device will have direct access to the Internet, but will remain isolated from the internal network. It is important to remember that placing a device in the DMZ exposes it to external threats, so it is important to ensure that the device is adequately protected with security mechanisms, such as regular software updates and strong authentication.

Slide 18 - Results obtained

In this first figure we have an ideal response and shows the connections established, we can see in red, the connections from the MQTT Broker, and in blue, the connections established between the MQTT Broker and the MQTT Client.

In this case, we have a connection through port 1883, without the TLS protocol, so we can see how the data travels on the network

Using TPCDump, we can see this response below

We can see the data in the green rectangle, the devices that are communicating, IP 192.168.0.100 (RPi) is receiving information from IP 192.168.0.102 (ESP32), the data is being published in the "myHome/gasSensor" topic (in the red square), the number next to the topic corresponds to the value of the sensor. The connection between the microcontroller and the MQTT server was successfully established using port 1883, but according to figure 6, it can be seen that the system is vulnerable with regard to the data in the packets sent and received.

Slide 19 - Results obtained

We see the data differently, as it is traffic after the implementation of all algorithms (RSA, 3DES and TLS communication protocol), in the green square, the equipment that is communicating, IP 192.168.0.100(RPi) is receiving information from IP 192.168.0.103(ESP32), the data is being published in the myHome/gasSensor topic, but it is not possible to identify the publication topic or the content of the packets. 

Based on the handshake sequence and the innovative methodology, it is clear that the tactics were correctly innovative and had their functionality explored. After all generating the possible certificates and keys, as well as releasing the ports through UFW and configuring the MQTT Broker in Openhab, we obtain this result, showing data traffic on port 8883. 

Using a TLS protocol with keys and certificates generated by OpenSSL, data exchanged between the MQTT broker and the MQTT client is encrypted, which reduces the possibility of interception and manipulation by malicious third parties.

Slide 20 - Final considerations

Considering the system, it is possible to conclude that the use of a secure communication protocol such as TLS can bring several benefits in terms of security and privacy for data transmission in IoT systems. The use of MQTT as a communication protocol also proved to be efficient, allowing the exchange of messages asynchronously. Furthermore, the use of Raspberry Pi as the system's centralizer, together with the use of OpenHABian as the operating system, allowed easy integration between the different components of the project, as well as the availability of management and monitoring tools. The use of UFW for port management, as well as the generation and use of keys and certificates encrypted with OpenSSL, provides greater security for communication between devices, avoiding possible external attacks, such as:

Data interception

Data modification

Spoofing where an attacker tries to impersonate a legitimate device. 

Denial of Service (DoS) attacks: Using TLS can also help prevent DoS attacks that attempt to flood the MQTT broker with false or excessive requests, as the TLS protocol has capabilities to limit the number of connections per second.

Sniffing: Using TLS also helps prevent sniffing attacks, where an attacker attempts to capture sensitive information

Thus, it is concluded that the use of the proposed architecture, with the combination of different technologies and tools, allowed the creation of an air quality monitoring system (IoT) in a safe, efficient way and with low resource consumption.

Slide 21 - Limitations 

A limitation of this system is the lack of a physical firewall in the DMZ. While the operating system's firewall (like UFW in this case) can help block unwanted traffic, a dedicated physical firewall can offer more robust protection. A physical firewall can inspect network traffic at a deeper level and make blocking decisions based on specific security policies. However, implementing a physical firewall also adds complexity to the system and can increase infrastructure costs.

Another limitation is that the system does not offer protection against brute force attacks. If an attacker gains access to encryption keys or passwords, he or she may attempt to guess the key or password through trial and error. To minimize this risk, it is important to choose strong passwords and use additional authentication measures, such as two-factor authentication.
Additionally, the system does not offer protection against phishing attacks, which are those in which an attacker attempts to trick the end user into obtaining confidential information such as passwords or encryption keys. It is important that end users are trained to recognize this type of attack and avoid clicking on suspicious links or providing sensitive information.

Slide 22 - Thank you.</p>
