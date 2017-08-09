
# Arduino Code

There are very good Arduino tutorials available on the internet. As such I am only providing a rough outline of how to do it.

1. Install the [Arduino IDE](https://www.arduino.org/)

2. Connect the Arduino via the USB cable. 
  A green LED on the board lights up.
  ![Green ON light on Arduino UNO board](../images/board-on.png)

3. Download the [.ino file](../TMSuino/TMSuino.ino) and open it with the Arduino IDE.

4. In the Arduino IDE open the "Tools" menu and make sure "Board:" is set to "Arduino/Genuino UNO"
  ![Tools menu](../images/ide-tools-menu-board.png)
  
5. In the same menu make sure "Port:" is not greyed-out. It should point to the Arduino device as "COM1" or "COM2" or "COMx" or "/dev/ttyACM0" depending on your operating system.
  ![Tools menu](../images/ide-tools-menu-port.png)
  On ubuntu you might need to type: 
```bash
sudo chmod a+rw /dev/ttyACM0
```
  otherwise the next step might fail.

6. Click "Upload"
  ![Upload button in Arduino IDE](../images/upload-button.png)
  There is a row of three yellow LEDs on the board. The two leftmost yellow LEDs on the board should flicker for a short moment, that's the upload.
  
7. After a few seconds, the rightmost of the yellow LEDs should light up and stay constantly alight.
  If it blinks fast, one of the coil connections is broken or connected in the wrong way.
  In that case go back to wiring and check all connections.
  
<table>
<tr><td style="text-align: center;"> OK </td><td style="text-align: center;"> Problem </td></tr>
<tr><td width="189px"><img id="OKimg" width="189px" src="../images/board-led13.png" /></td><td width="189px"><img id="ERRORimg" width="189px" src="../images/board-led13.png" /></td></tr>
</table>
  
<script type="text/javascript">

var imagelist = ["../images/board-led13.png", "../images/board-on.png"];
var img_ok = 0;
var img_err = 0;

//function blink_ok() {
//    img_ok = 1 - img_ok;
//    document.getElementById("OKimg").setAttribute("src", imagelist[img_ok]);
//}

function blink_error() {
    img_err = 1 - img_err;
    document.getElementById("ERRORimg").setAttribute("src", imagelist[img_err]);
}
//setInterval(blink_ok, 1000);
setInterval(blink_error, 100);
</script>
  
#### If it blinks normally once per second, go on to [fix all cables](../fixing/README.html).

#### If you have problems even after re-checking the wiring look into [Troubleshooting/Diagnostics](../troubleshooting/README.md)

[Main Page](../README.md)
