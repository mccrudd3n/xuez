Xuez Core
=====================

Setup
---------------------
[Xuez Core](http://github.com/xuez/xuez/releases) is the original Xuez client and it builds the backbone of the network. However, it downloads and stores the entire history of Xuez transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run Xuez on your native platform.

### Unix

Unpack the files into a directory and run:

- bin/32/xuez-qt (GUI, 32-bit) or bin/32/xuezd (headless, 32-bit)
- bin/64/xuez-qt (GUI, 64-bit) or bin/64/xuezd (headless, 64-bit)

### Windows

Unpack the files into a directory, and then run xuez-qt.exe.

### OSX

Drag Xuez-Qt to your applications folder, and then run Xuez-Qt.

### Need Help?

* Ask for help on [Discord (External Link)] (https://discord.gg/ajVxF2)

Building
---------------------
The following are developer notes on how to build Xuez on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The Xuez repo's [root README](https://github.com/xuez/xuez/blob/master/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://dev.visucore.com/bitcoin/doxygen/) ***TODO***
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
