# Monitoring - IoT Arduino

Monitoring suhu dan kelembaban udara menggunakan sensor DHT11/22 yang terintegrasi dengan mikrokontroler NodeMCU berbasis Internet of Things (IoT). 
Proyek kali ini menggunakan thingspeak sebagai media penyimpan data sekaligus menyajikan data pengukuran secara per 20 detik. Oleh karena itu, kita dapat memanfaatkan thingspeak sebagai sumber informasi data yang dapat digunakan untuk keperluan website buatan kita sendiri yaitu dengan cara mengambil data dalam bentuk iframe.

Pembuatan website pada proyek ini amat sederhana hanya membutuhkan file dengan extension ```.html``` sudah dapat dijakankan secara localhost dari browser.
Untuk dapat menggunakan proyek ini silahkan buka folder ```website``` menggunakan **Visual Studio Code** lalu pasang plugin **Live Server** guna untuk menjalankan file ```html``` secara live.
Sementara styling saya menggunakan **bootstrap** yang memudahkan kita untuk mendesain bentuk website dengan mudah dan icon dari fontawesome digunakan untuk mempercantik tampilan.


### Alat dan Bahan
1. Board NodeMCU
2. Sensor DHT11/22
3. Kabel USB
4. Kabel penghubung
5. Protoboard/Breadboard

### Informasi - Website
- [Arduino](https://arduino.cc)
- [Thingspeak](https://thisngpseak.com)
- [Bootstrap](https://getbootstrap.com)
- [Fontawesome](http://fontawesome.com)
- [Live Serve](https://marketplace.visualstudio.com/items?itemName=ritwickdey.LiveServer)
- [VS Code](https://code.visualstudio.com/)

### UI/UX
![screencapture-127-0-0-1-5500-index-html-2021-06-06-01_11_40](https://user-images.githubusercontent.com/43200304/120901340-60eb6180-c664-11eb-8964-75dddfd42c83.png)
![screencapture-127-0-0-1-5500-data-html-2021-06-06-01_12_00](https://user-images.githubusercontent.com/43200304/120901338-5fba3480-c664-11eb-929c-d2c4bbbb5c63.png)

### Tutorial Youtube
- Klik [disini](https://youtube.com/Duino_Elektronik)
