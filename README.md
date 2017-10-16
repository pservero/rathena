# Ragnarok Server rAthena
=======

Build Status: [![Build Status](https://travis-ci.org/rathena/rathena.png?branch=master)](https://travis-ci.org/rathena/rathena) [![Build status](https://ci.appveyor.com/api/projects/status/8574b8nlwd57loda/branch/master?svg=true)](https://ci.appveyor.com/project/rAthenaAPI/rathena/branch/master)

Daftar Isi
---------
1. Apa itu rAthena?
2. Tujuan Utama
3. Informasi Server
4. Persyaratan
5. Instalasi
  1. Cara Install XAMPP
  2. Konfigurasi Database
  3. Menjalankan Server
6. Akun GM
7. Tautan
8. Dokumentasi

## 1. Apa itu rAthena?
> rAthena is a collaborative software development project revolving around the
creation of a robust massively multiplayer online role playing game (MMORPG)
server package. Written in C, the program is very versatile and provides NPCs,
warps and modifications. The project is jointly managed by a group of volunteers
located around the world as well as a tremendous community providing QA and
support. rAthena is a continuation of the eAthena project.

## 2. Tujuan Utama
Tujuan utama yang dimaksudkan adalah tujuan dari pembuatan konten/branch ini,
bukan tujuan dari rAthena. Pada konten ini, bertujuan untuk menyediakan
konfigurasi minimal agar para pecinta Ragnarok Online yang ingin mencoba
membuat server Ragnarok Offline untuk **kepentingan menambah wawasan** mengenai
dunia dan mekanisme yang ada pada game Ragnarok Online secara umum.

## 3. Informasi Server

### Informasi Teknis
* Versi rAthena: Bisa dilihat pada [VERSION.md](https://github.com/pservero/rathena/blob/idro-client-supported/VERSION.md)
* Sistem Dasar: RENEWAL
* PACKETVER: 20131223
* Obfuscation Keys: Ya
* Max Character: 12 Slot + 3 Premium Slot
* Max Storage: 900
* Max Storage Guild: 900

### Fitur Server
* Terdapat Kafra dengan 3 storage, dapat ditemui di Prontera (146,172) dan Payon (168,228)
* NPC Cash berdasarkan idRO
* Cash Mall berdasarkan idRO
* Custom NPC event Kartu Ramadan dan Kemerdekaan berdasarkan idRO
* `@commands` tersedia: `@commands @go @warp @whereis @mobinfo @whodrops @iteminfo @exp @rates @hominfo @homstats @refresh @autoloot @alootid @autoloottype @autotrade @email`
* Novice Criatura Academy
* Delay hapus karakter: 10 detik
* Kode hapus karakter: Email, default email adalah `a@a.com` dapat diganti menggunakan `@email`

### Server Rate
* EXP Base: 5x
* EXP Job: 5x
* EXP MVP: 5x
* EXP Quest: 5x
* EXP Level Penalty: Ya
* Semua Drop: 10x
* Drop Level Penalty: Ya
* EXP Death Penalty: 1%

### Koneksi Database
* Username: ragnarok_offline
* Password: ragnarok_offline
* Database: ragnarok_offline
* Host: 127.0.0.1
* MySQL port: 3306

## 4. Persyaratan
Sebelum menjalankan server Ragnarok dengan rAthena, ada beberapa hal yang perlu
diinstall. Pada kesempatan kali ini, hanya fokus pada konten yang diasumsikan
untuk dijalankan pada sistem operasi Windows.

### XAMPP
Bundle yang berguna dari XAMPP adalah MySQL, Apache, PHP, dan PHPMyAdmin. MySQL
dibutuhkan untuk penyimpanan database server Ragnarok. Sedangkan Apache dan PHP
dibutuhkan untuk penggunaan PHPMyAdmin. PHPMyAdmin adalah 'control panel' berbasis
website untuk memodifikasi MySQL nantinya.

XAMPP untuk Windows dapat didownload pada link berikut:
* 32-bit: https://www.apachefriends.org/xampp-files/5.5.38/xampp-win32-5.5.38-2-VC11-installer.exe (106 MB)

### Notepad++
Tidak direkomendasikan menggunakan Notepad bawaan Windows untuk membuka dan
mengedit plain text file yang kompleks. Banyak keterbatasan pada Notepad bawaan
Windows, oleh karena itu dibutuhkan Notepad++ atau yang bisa disebut NPP.

Notepad++ untuk Windows dapat didownload pada link berikut:
* 32-bit: https://notepad-plus-plus.org/repository/7.x/7.2.2/npp.7.2.2.Installer.exe
* 64-bit: https://notepad-plus-plus.org/repository/7.x/7.2.2/npp.7.2.2.Installer.x64.exe

### Microsoft Visual Studio (Express)
Tool Microsoft Visual Studio (Express) tidak dibutuhkan pada konten ini, karena
sudah disediakan file hasil kompilasi yang menggunakan MSVS 2010 pada Windows 7
Ultimate SP 1.

Apabila pengguna mengininkan untuk mengkompilasi ulang, maka dapat
mendownload pada link berikut:
http://www.microsoft.com/visualstudio/en-us/products/2010-editions/visual-cpp-express

### Client Ragnarok Online
Client Ragnarok Online idRO yang dapat digunakan adalah milik LYTO bukan Gravindo
karena pada rilis milik Gravindo terdapat encryption key. Client Ragnarok Online
versi lain juga bisa digunakan, misalnya kRO.

## 5. Instalasi
Sebelium menginstall rAthena, diperlukan menginstall XAMPP dan mengkonfigurasi
database yang diperlukan

### 1. Cara Install XAMPP
Untuk instalasi XAMPP, dapat dilihat pada file [/doc/Instalasi-XAMPP.md](https://github.com/pservero/rathena/blob/idro-client-supported/doc/Instalasi-XAMPP.md)

### 2. Konfigurasi Database
Untuk mengkonfigurasi database, dapat dilihat pada file [/doc/Instalasi-XAMPP.md](https://github.com/pservero/rathena/blob/idro-client-supported/doc/Konfigurasi-Database.md)

### 3. Menjalankan Server
* Untuk menjalankan server, lakukan dengan mendobel-klik pada file `runserver.bat`
* Tunggu hingga semua server selesai dimuat.
* Server siap menerima login dari client.


## 6. Akun GM
Untuk login menggunakan akun GM 'bawaan', gunakan username dan password berikut:
* GM Male
  * Username: cydh
  * Password: cydh
* GM Female
  * Username: chyra
  * Password: chyra


## 7. Tautan
* File README.md yang asli
	* https://github.com/pservero/rathena/blob/idro-client-supported/RADME-Original.md

* rAthena Forums
	* https://rathena.org/

* GIT Repository
	* https://github.com/rathena/rathena

* Full Installation Instructions
	* [Windows](https://github.com/rathena/rathena/wiki/Install-on-Windows)
	* [CentOS](https://github.com/rathena/rathena/wiki/Install-on-Centos)
	* [Debian](https://github.com/rathena/rathena/wiki/Install-on-Debian)
	* [FreeBSD](https://github.com/rathena/rathena/wiki/Install-on-FreeBSD)
	
* rAthena IRC Channel
	* irc://irc.rizon.net/rathena
	* Web Chat: https://rathena.org/board/page/chat.html

* rAthena Discord Chat
	http://discord.rathena.org

* rAthena Wiki
	https://github.com/rathena/rathena/wiki

* Fork and Pull Request Q&A
	https://rathena.org/board/topic/86913-pull-request-qa/


## 8. More Documentation
rAthena has a large collection of help files and sample NPC scripts located in the /doc/
directory. These include detailed explanations of NPC script commands, atcommands (@),
group permissions, item bonuses, and packet structures, among many other topics. We
recommend that all users take the time to look over this directory before asking for
assistance elsewhere.
