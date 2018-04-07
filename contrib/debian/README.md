
Debian
====================
This directory contains files used to package xuezd/xuez-qt
for Debian-based Linux systems. If you compile xuezd/xuez-qt yourself, there are some useful files here.

## xuez: URI support ##


xuez-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install xuez-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your xuezqt binary to `/usr/bin`
and the `../../share/pixmaps/xuez128.png` to `/usr/share/pixmaps`

xuez-qt.protocol (KDE)

