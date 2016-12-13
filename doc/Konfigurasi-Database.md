# Konfigurasi Database Server Ragnarok Offline

## Perlu diketahui

Sebelum server Ragnarok Offline dijalan, diharuskan terlebih dahulu untuk mengatur database yang akan digunakan. Hal yang perlu diatur menurut file [inter_athena.conf](https://github.com/pservero/rathena/blob/idro-client-supported/conf/import/inter_conf.txt) adalah:
* MySQL Host: 127.0.0.1
* MySQL Port: 3306
* MySQL Username: ragnarok_offline
* MySQL Password: ragnarok_offline
* MySQL Database: ragnarok_offline

Credentials untuk char-server dan map-server:
* UserID: ragnarok
* Password (tanpa MD5): ragnarok

## Menambahkan User Account untuk server Ragnarok Offline
  1. Pastikan Server Apache pada XAMPP Control Panel telah berjalan.
  2. Buka web-browser, masukkan alamat http://localhost/phpmyadmin/
  3. Jika diminta untuk memasukkan username dan password, coba masukkan `root` sebagai username dan `` (kosong) untuk password.
  4. Klik menu `User Account`, untuk menambahkan user baru, klik `Add user account`.
  5. Masukkan `User name`: `ragnarok_offline`
  6. Pilih `Host` dengan Local atau ketikkan `localhost`
  7. Masukkan password `ragnarok_offline`
  8. Beri tanda centang pada `Grant all privileges on wildcard name (username\_%)`
  9. Beri tanda centang pada `Global privileges`
  10. Scroll ke bawah sediti, klik tombol `Go`

## Import Tables
  1. Masih di halaman PHPMyAdmin, klik menu `Databases`
  2. Buat database baru dengan menuliskan nama database `ragnarok_offline` pada kolom `Create database`
  3. Kemudian klik tombol `Create`
  4. Pilih database `ragnarok_offline` pada side-menu sebelah kiri
  5. Klik pada menu `Import`
  6. Klik tombol `Choose File`
  7. Carilah file `main.sql` pada folder `/sql-files/`, klik tombol `Open`
  8. Scroll ke bawah sedikit, tekanlah tombol `Go`
  9. Ulangilah langkah nomor 5, 6, dan pada langkah nomor 7, carilah file `logs.sql`
  10. Database siap digunakan

## Galeri proses konfigurasi
https://www.dropbox.com/sh/2dxauphrznn5gu3/AADr0C59UJW88vyEHYSS6S7ja?dl=0
