# モバイル音源からBluetooth接続してスピーカーを鳴らす-380円で買えるDACは素晴らしくバランスの取れた良い音がする？

WCMCU-1334をWemos d1-mini-ESP32にI2S接続
![31EA432F-44CB-435D-9379-BCF96623DF02_1_102_o](https://github.com/user-attachments/assets/3bd2be1e-f6c2-48ec-915b-7ce60ffbe906)
**使うI2SのDACはUDA-1334A（フィリップス設計）**

![Image 20240830 044727](https://github.com/user-attachments/assets/0d998775-aa11-4b46-b49f-5936fc7d64e2)
**結線図**
**使用DACモジュール：UDA-1334A**
オランダのNXP Semiconductors N.V. (NXP) is a public Dutch company製のDAC．

![image](https://github.com/user-attachments/assets/4f22c76f-b9d8-426d-8e54-4471831496e3)

**■基本仕様：**
 General

- 2.4 to 3.6 V power supply voltage
- On-board PLL to generate the internal system clock:
  - –  OperatesasanasynchronousDAC,regeneratingthe internal clock from the WS signal (called audio mode)
  - –  Generatesaudiorelatedsystemclock(output)based on 32, 48 or 96 kHz sampling frequency (called video mode).
- Integrated digital filter plus DAC
- Supports sample frequencies from 16 to 100 kHz in
  asynchronous DAC mode

<https://pdf.datasheetcatalog.com/datasheet/philips/UDA1334ATS_2.pdf>

![image](https://github.com/user-attachments/assets/c5b5eaed-461f-4f55-83a9-7fdc72b332f0)
![image](https://github.com/user-attachments/assets/d69ac52e-e211-4a99-b40a-9d2901a48835)

Bluetooth受信＆   DACへの流し込みを行うCPUはESP-32ベースのWemos d1-mini_ESP32.
![image](https://github.com/user-attachments/assets/e307c5df-6b45-4bde-a2e0-47feb0ea97e7)

ESP32：Wi-FiとBluetoothを内蔵する低コスト、低消費電力なSoCのマイクロコントローラ。 TensilicaのXtensa LX6マイクロプロセッサを採用しデュアルコアとシングルコア版のバリエーションがある。 ESP32は、上海に拠点を置くEspressif Systemsが開発し、台湾積体電路製造（TSMC）の40nm工程で製造されている[2]。 ESP8266の後継製品にあたる。
これを使いやすいサイズに納めたのがWemosの**d1-mini_ESP32**。
日本の電波法に則った「技適取得済み」モジュール。
これを、上の回路図のように組み立て、小さなピルケースに納めました。
