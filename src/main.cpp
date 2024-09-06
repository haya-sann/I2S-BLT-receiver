#include <Arduino.h>
#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

I2SStream i2s;
BluetoothA2DPSink a2dp_sink(i2s);

/*
d1 miniを使った場合、以下のようなエラーが出る場合がある。
このエラーを無視するには、setup関数の最初にWRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0);を追加する。
Brownout detector was triggered

rst:0xc (SW_CPU_RESET),boot:0x13 (SPI_FAST_FLASH_BOOT)
configsip: 0, SPIWP:0xee
clk_drv:0x00,q_drv:0x00,d_drv:0x00,cs0_drv:0x00,hd_drv:0x00,wp_drv:0x00
mode:DIO, clock div:2
load:0x3fff0030,len:1184
load:0x40078000,len:13232
load:0x40080400,len:3028
entry 0x400805e4
*/

#include "soc/soc.h"
#include "soc/rtc_cntl_reg.h"

void setup(){
  WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0); //disable brownout detector
    auto cfg = i2s.defaultConfig();
    cfg.pin_bck = 27;
    cfg.pin_ws = 26;
    cfg.pin_data = 25;
    i2s.begin(cfg);

    a2dp_sink.start("MyMusic_D1Mini");
}

void loop() {
}
