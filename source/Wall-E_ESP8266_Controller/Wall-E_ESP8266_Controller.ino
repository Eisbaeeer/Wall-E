/*-------------------------------------------------------
 *                                .:+oyhdmNNMMMMNNmdhyo+:.                            
                         -+ydMMMMMMMMMMMMMMMMMMMMMMMMMMdy+-                       
                     .+hNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNh+.                   
                  .omMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmo.                
                /dMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMd/              
             `+NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo`           
            +NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNo          
          :mMMmyydMMMMMMMMMMMMMMMMMMMMMMNddNMMMMMMMMMMMMMMMMMMMMMMMMMMMMm:        
         sMMM/    .NMMMMMMMMmo:-/hMMMMMy   `hMMMMMMMMMMh. .hMMMMMMo` -mMMMy`      
       .dMMMN      yMMMMMMN+      yMMMMs    yMMMMMMMMMMs   `NMMMMh    dMMMMm.     
      -NMMMMm      yMMMMMs`      `dMMMMMmhhNMMMMMMMMMMMN`   oMMMM.   /MMMMMMN-    
     -NMMMMMm      sMMMh.       /NMMMMNo:-:yMMMMMMMMMMMMo   `MMMh    dMMMMMMMN-   
    `NMMMMMMd      sMm:       -dMMMMMM/.    dMMMMNy+:.```    yMM:    .``.:+hMMN.  
    hMMMMMMMd      o+       .yMMMMMMMMMM.   oMMm/            :MM            `sMd  
   /MMMMMMMMd             `oNMMMMMMMMMMM:   /Md`   `+yhhy-   `Md    /shhy/    :M+ 
   mMMMMMMMMd            /mMMMMMMMMMMMMM/   :M:   -NMMMMMs   `My    MMMMMMd    hN`
  :MMMMMMMMMd          -dMMMMMMMMMMMMMMM/   :M:   /MMMMMMs   `Mh    NMMMMMm    hM/
  yMMMMMMMMMd         :NMMMMMMMMMMMMMMMM/   :My    hMMMMM-   /MN    sMMMMM/   `MMy
  dMMMMMMMMMd           -+hNMMMMMMMMMMMM/   /MM/    +ddy-   `mMM+    +dmy-    hMMm
  NMMMMMMMMMd               -odMMMMMMMMM:   /MMM+          .dMMMM+          .hMMMM
  NMMMMMMMMMd      .`          `:smMMMMMy` .dMMMMmo-`  `-/yMMMMMMMmo:.  `./yMMMMMM
  dMMMMMMMMMd      sMms:`          .+NMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMm
  yMMMMMMMMMm      sMMMMMdo:         /MNs//sMMMMNNMMMMMMMMMMMMNysmMMMMMMMMMMMMMMMy
  :MMMMMMMMMm      sMMMMMMMMMho-    .dM+    sMd`  +MMMMMMMMMMM`   hMMMMMMMMMMMMMM/
   mMMMMMMMMm      yMMMMMMMMMMMMMdhmMMMm:../mM/   :MMMMMMMMMMM/   -MMMMMMMMMMMMMN 
   /MMMMMMMMN`     dMMMMMMMMMMMMMMMMMMMMmdNMMM.   oMMMMMMMMMMMm    hMMMMMMMMMMMM+ 
    hMMMMMMMMm+:-/hMMMMMNs+sNMMMMh+odMs`   :MN    hMMMMMMMNdhhh.   :MMMMMMMMMMMd  
    `mMMMMMMMMMMMMMMMMMM:   +MMMm    hys    ym    dMMMMd+.          mMMMMMMMMMN.  
     -NMMMMMMMMMMMMMMMMm    hMMMM/   .MM-   +m    mMMN:     `..     sMMMMMMMMN-   
      -NMMMMMMMMMMMMMMMs    MMMMMd    mM:   /m    dMM.   .yNMMMN.   +MMMMMMMN-    
       .dMMMMMMMMMMMMMMo   .MMMMMN    hM/   /N    hMm    dMMMMMM-   +MMMMMMm.     
         sMMMMMMMMMMMMMs   `NMMMMm    dM/   /M`   oMN`   sMMMMMM`   sMMMMMy`      
          -mMMMMMMMMMMMN`   /NMMM/   `MM:   /M:   :MMo   `hMMMMo    mMMMm:          
            +NMMMMMMMMMMh`   `//.    hMM:   /Ms   `MMM/    -+/.    sMMN+          
             `+mMMMMMMMMMm/        -dMMM:   oMm    mMMMy.        -hMNo`           
                /hMMMMMMMMMNyo++oymMMMMMmo/sNMMh//yMMMMMMds+++oymMd/              
                  .odMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMmo.                
                     .+yNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNh+.                   
                         ./sdNMMMMMMMMMMMMMMMMMMMMMMMMNdy+-                       
                              .:+oyhdmNNNMMNNNmdhyo+:.         
 *
 *
 * Pinout
 * Internal LED       (D0) 		GPIO 16
 * Motor A PWM        (D1) 		GPIO 05
 * Motor B PWM        (D2) 		GPIO 04
 * Motor A direction  (D3) 		GPIO 00
 * Motor B direction  (D4) 		GPIO 02
 * SCL                (D5) 		GPIO 14
 * SDA                (D6) 		GPIO 12
 * RX soft serial     (D7) 		GPIO 13
 * TX soft serial     (D8) 		GPIO 15
 * OutputEnable servo (SDD3) 	GPIO 10
 * 
 * Some helpful logic
 * and             &&
 * and_eq          &=
 * bitand          &
 * bitor           |
 * not             !
 * not_eq          !=
 * or              ||
 * or_eq           |=
 * xor             ^
 * xor_eq          ^=
 *          
 * Description: This project is a remix part of the Wall-E replica of chillibasket
 *              https://www.thingiverse.com/chillibasket
 *              I changed the electronic parts to one ESP32-CAM and one ESP8266 board.
 *              The ESP32-CAM works as access-point and streaming server. The ESP8266
 *              connect to the ESP32-CAM as Wifi client. The ESP8266 controls the Wall-E
 *              motors, servos and sound-module. The Wall-E are controllable through a web
 *              interface from any browser who connects to the accesspoint of the Wall-E.
 *              You have to connect to the Wall-E SID with the password 1234. After successful 
 *              connection you have to open a browser with the ip-address 192.168.4.200
 *              You will see a homepage with the streaming live video picture and a touch controller
 *              to control the Wall-E. Some additional buttons can be configured in source code for your
 *              own functions. See code "void handleFunktion1()" for more functions.
 *              
 * Info:        This code is not final. The code actually missing the servo part. There are example of servo control in code. 
 *              The following functions are realized and ready to run:
 *              - full control of motors in all directions
 *              - sound effects
 *              - Wifi
 *              - Camera streaming
 *              
 * ToDo:        - store the min and max values of servo motors in EEPROM
 *              - Page for setup of servo values to store in EEPROM
 *              - animations for Wall-E
 *              - adding functions to web-site
 *              
 * Hardware:    ESP8266
 *              Motorshield for ESP8266
 *              I2C Display SED
 *			        ESP32-CAM				
 *              Step-down converter from 12V to 5V (servo supply, DFPlayer and ESP VCC)
 *              LiIo pack with balance board
 * 
 * Date:         20200121
 * Modified:     Initial Version 1.0
 *
 * Author:       Eisbaeeer, https://github.com/Eisbaeeer               
 *               URL: http://www.weimars.net/?page_id=362
 *               URL: https://www.thingiverse.com/thing:4069116
 * 
 *  LICENSE: 		MIT License
 * 
 --------------------------------------------------------*/

#include <ESP8266WebServer.h>
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266HTTPUpdateServer.h>
#include <Servo.h>
#include "SSD1306Wire.h"   
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"     
#include <Adafruit_PWMServoDriver.h>

//Set Wifi ssid and password
const char* ssid = "Wall-E";
const char* password = "12345678";
const char* host = "Wall_E";
const char joystick_html[] PROGMEM="<html>\n\t<head>\n\t\t<meta charset=\"utf-8\">\n\t\t<meta name=\"viewport\" content=\"width=device-width, user-scalable=no, minimum-scale=1.0, maximum-scale=1.0\">\t\t\n\t\t<style>\n\t\tbody {\n\t\t\toverflow\t: hidden;\n\t\t\tpadding\t\t: 0;\n\t\t\tmargin\t\t: 0;\n\t\t\tbackground-color: #BBB;\n\t\t}\n\t\t#info {\n\t\t\tposition\t: absolute;\n\t\t\ttop\t\t: 0px;\n\t\t\twidth\t\t: 100%;\n\t\t\tpadding\t\t: 5px;\n\t\t\ttext-align\t: center;\n\t\t}\n\t\t#info a {\n\t\t\tcolor\t\t: #66F;\n\t\t\ttext-decoration\t: none;\n\t\t}\n\t\t#info a:hover {\n\t\t\ttext-decoration\t: underline;\n\t\t}\n\t\t#container {\n\t\t\twidth\t\t: 100%;\n\t\t\theight\t\t: 100%;\n\t\t\toverflow\t: hidden;\n\t\t\tpadding\t\t: 0;\n\t\t\tmargin\t\t: 0;\n\t\t\t-webkit-user-select\t: none;\n\t\t\t-moz-user-select\t: none;\n\t\t}\n\t\t</style>\n\n\t</head>\n\t<body>\n\n\t\n\t\t<div id=\"container\"></div>\n\t\t<div id=\"info\">\n\t\t\tTouch screen to control\n\t\t\t<br><img src=\"http://192.168.4.1:81/stream\" alt=\"Wall-E stream\" height=\"240\" width=\"320\">\n\t\t\t<p><b><button onclick=\"window.location.href = '/funktion1.html'\">Play sound</button>\n\t\t\t<p><b><button onclick=\"window.location.href = '/funktion2.html'\">Function 2 reserved</button>\n\t\t\t<br>\n\t\t\t</b><br/>\n\t\t\t<span id=\"result\"></span>\n\t\t</div> \n\t\t<script src=\"./virtualjoystick.js\"></script>\n\t\t<script>\n\t\t\tconsole.log(\"touchscreen is\", VirtualJoystick.touchScreenAvailable() ? \"available\" : \"not available\");\n\t\n\t\t\tvar joystick\t= new VirtualJoystick({\n\t\t\t\tcontainer\t: document.getElementById('container'),\n\t\t\t\tmouseSupport\t: true,\n\t\t\t\tlimitStickTravel\t: true,\n\t\t\t});\n\t\t\tjoystick.addEventListener('touchStart', function(){\n\t\t\t\tconsole.log('down')\n\t\t\t})\n\t\t\tjoystick.addEventListener('touchEnd', function(){\n\t\t\t\tconsole.log('up')\n\t\t\t})\n\t\t\tvar prevX = 0;\n\t\t\tvar prevY = 0;\n\t\t\tvar newX = 0;\n\t\t\tvar newY = 0;\n\t\t\tsetInterval(function(){\n\t\t\t\tvar outputEl\t= document.getElementById('result');\n\t\t\t\tnewX = Math.round(joystick.deltaX());\n\t\t\t\tnewY = Math.round(joystick.deltaY()) * -1;\n\t\t\t\toutputEl.innerHTML\t= '<b>Position:</b> '\n\t\t\t\t\t+ ' X:'+newX\n\t\t\t\t\t+ ' Y:'+newY;\n\t\t\t\tif ( newX != prevX || newY != prevY || newX!=0 || newY!=0){\n\t\t\t\t\tvar xhr = new XMLHttpRequest();\n\t\t\t\t\txhr.open('PUT', \"./jsData.html?x=\"+newX+\"&y=\"+newY)\n\t\t\t\t\txhr.send();\n\t\t\t\t\tsetTimeout(function(){xhr.abort();},100);\n\t\t\t\t}\n\t\t\t\tprevX = newX;\n\t\t\t\tprevY = newY;\n\t\t\t}, 150);\n\t\t</script>\n\t</body>\n</html>";
const char virtualjoystick_js[] PROGMEM="var VirtualJoystick\t= function(opts)\n{\n\topts\t\t\t= opts\t\t\t|| {};\n\tthis._container\t\t= opts.container\t|| document.body;\n\tthis._strokeStyle\t= opts.strokeStyle\t|| 'cyan';\n\tthis._stickEl\t\t= opts.stickElement\t|| this._buildJoystickStick();\n\tthis._baseEl\t\t= opts.baseElement\t|| this._buildJoystickBase();\n\tthis._mouseSupport\t= opts.mouseSupport !== undefined ? opts.mouseSupport : false;\n\tthis._stationaryBase\t= opts.stationaryBase || false;\n\tthis._baseX\t\t= this._stickX = opts.baseX || 0\n\tthis._baseY\t\t= this._stickY = opts.baseY || 0\n\tthis._limitStickTravel\t= opts.limitStickTravel || false\n\tthis._stickRadius\t= opts.stickRadius !== undefined ? opts.stickRadius : 100\n\tthis._useCssTransform\t= opts.useCssTransform !== undefined ? opts.useCssTransform : false\n\n\tthis._container.style.position\t= \"relative\"\n\n\tthis._container.appendChild(this._baseEl)\n\tthis._baseEl.style.position\t= \"absolute\"\n\tthis._baseEl.style.display\t= \"none\"\n\tthis._container.appendChild(this._stickEl)\n\tthis._stickEl.style.position\t= \"absolute\"\n\tthis._stickEl.style.display\t= \"none\"\n\n\tthis._pressed\t= false;\n\tthis._touchIdx\t= null;\n\t\n\tif(this._stationaryBase === true){\n\t\tthis._baseEl.style.display\t= \"\";\n\t\tthis._baseEl.style.left\t\t= (this._baseX - this._baseEl.width /2)+\"px\";\n\t\tthis._baseEl.style.top\t\t= (this._baseY - this._baseEl.height/2)+\"px\";\n\t}\n    \n\tthis._transform\t= this._useCssTransform ? this._getTransformProperty() : false;\n\tthis._has3d\t= this._check3D();\n\t\n\tvar __bind\t= function(fn, me){ return function(){ return fn.apply(me, arguments); }; };\n\tthis._$onTouchStart\t= __bind(this._onTouchStart\t, this);\n\tthis._$onTouchEnd\t= __bind(this._onTouchEnd\t, this);\n\tthis._$onTouchMove\t= __bind(this._onTouchMove\t, this);\n\tthis._container.addEventListener( 'touchstart'\t, this._$onTouchStart\t, false );\n\tthis._container.addEventListener( 'touchend'\t, this._$onTouchEnd\t, false );\n\tthis._container.addEventListener( 'touchmove'\t, this._$onTouchMove\t, false );\n\tif( this._mouseSupport ){\n\t\tthis._$onMouseDown\t= __bind(this._onMouseDown\t, this);\n\t\tthis._$onMouseUp\t= __bind(this._onMouseUp\t, this);\n\t\tthis._$onMouseMove\t= __bind(this._onMouseMove\t, this);\n\t\tthis._container.addEventListener( 'mousedown'\t, this._$onMouseDown\t, false );\n\t\tthis._container.addEventListener( 'mouseup'\t, this._$onMouseUp\t, false );\n\t\tthis._container.addEventListener( 'mousemove'\t, this._$onMouseMove\t, false );\n\t}\n}\n\nVirtualJoystick.prototype.destroy\t= function()\n{\n\tthis._container.removeChild(this._baseEl);\n\tthis._container.removeChild(this._stickEl);\n\n\tthis._container.removeEventListener( 'touchstart'\t, this._$onTouchStart\t, false );\n\tthis._container.removeEventListener( 'touchend'\t\t, this._$onTouchEnd\t, false );\n\tthis._container.removeEventListener( 'touchmove'\t, this._$onTouchMove\t, false );\n\tif( this._mouseSupport ){\n\t\tthis._container.removeEventListener( 'mouseup'\t\t, this._$onMouseUp\t, false );\n\t\tthis._container.removeEventListener( 'mousedown'\t, this._$onMouseDown\t, false );\n\t\tthis._container.removeEventListener( 'mousemove'\t, this._$onMouseMove\t, false );\n\t}\n}\n\n/**\n * @returns {Boolean} true if touchscreen is currently available, false otherwise\n*/\nVirtualJoystick.touchScreenAvailable\t= function()\n{\n\treturn 'createTouch' in document ? true : false;\n}\n\n/**\n * microevents.js - https://github.com/jeromeetienne/microevent.js\n*/\n;(function(destObj){\n\tdestObj.addEventListener\t= function(event, fct){\n\t\tif(this._events === undefined) \tthis._events\t= {};\n\t\tthis._events[event] = this._events[event]\t|| [];\n\t\tthis._events[event].push(fct);\n\t\treturn fct;\n\t};\n\tdestObj.removeEventListener\t= function(event, fct){\n\t\tif(this._events === undefined) \tthis._events\t= {};\n\t\tif( event in this._events === false  )\treturn;\n\t\tthis._events[event].splice(this._events[event].indexOf(fct), 1);\n\t};\n\tdestObj.dispatchEvent\t\t= function(event /* , args... */){\n\t\tif(this._events === undefined) \tthis._events\t= {};\n\t\tif( this._events[event] === undefined )\treturn;\n\t\tvar tmpArray\t= this._events[event].slice(); \n\t\tfor(var i = 0; i < tmpArray.length; i++){\n\t\t\tvar result\t= tmpArray[i].apply(this, Array.prototype.slice.call(arguments, 1))\n\t\t\tif( result !== undefined )\treturn result;\n\t\t}\n\t\treturn undefined\n\t};\n})(VirtualJoystick.prototype);\n\n//////////////////////////////////////////////////////////////////////////////////\n//\t\t\t\t\t\t\t\t\t\t//\n//////////////////////////////////////////////////////////////////////////////////\n\nVirtualJoystick.prototype.deltaX\t= function(){ return this._stickX - this._baseX;\t}\nVirtualJoystick.prototype.deltaY\t= function(){ return this._stickY - this._baseY;\t}\n\nVirtualJoystick.prototype.up\t= function(){\n\tif( this._pressed === false )\treturn false;\n\tvar deltaX\t= this.deltaX();\n\tvar deltaY\t= this.deltaY();\n\tif( deltaY >= 0 )\t\t\t\treturn false;\n\tif( Math.abs(deltaX) > 2*Math.abs(deltaY) )\treturn false;\n\treturn true;\n}\nVirtualJoystick.prototype.down\t= function(){\n\tif( this._pressed === false )\treturn false;\n\tvar deltaX\t= this.deltaX();\n\tvar deltaY\t= this.deltaY();\n\tif( deltaY <= 0 )\t\t\t\treturn false;\n\tif( Math.abs(deltaX) > 2*Math.abs(deltaY) )\treturn false;\n\treturn true;\t\n}\nVirtualJoystick.prototype.right\t= function(){\n\tif( this._pressed === false )\treturn false;\n\tvar deltaX\t= this.deltaX();\n\tvar deltaY\t= this.deltaY();\n\tif( deltaX <= 0 )\t\t\t\treturn false;\n\tif( Math.abs(deltaY) > 2*Math.abs(deltaX) )\treturn false;\n\treturn true;\t\n}\nVirtualJoystick.prototype.left\t= function(){\n\tif( this._pressed === false )\treturn false;\n\tvar deltaX\t= this.deltaX();\n\tvar deltaY\t= this.deltaY();\n\tif( deltaX >= 0 )\t\t\t\treturn false;\n\tif( Math.abs(deltaY) > 2*Math.abs(deltaX) )\treturn false;\n\treturn true;\t\n}\n\n//////////////////////////////////////////////////////////////////////////////////\n//\t\t\t\t\t\t\t\t\t\t//\n//////////////////////////////////////////////////////////////////////////////////\n\nVirtualJoystick.prototype._onUp\t= function()\n{\n\tthis._pressed\t= false; \n\tthis._stickEl.style.display\t= \"none\";\n\t\n\tif(this._stationaryBase == false){\t\n\t\tthis._baseEl.style.display\t= \"none\";\n\t\n\t\tthis._baseX\t= this._baseY\t= 0;\n\t\tthis._stickX\t= this._stickY\t= 0;\n\t}\n}\n\nVirtualJoystick.prototype._onDown\t= function(x, y)\n{\n\tthis._pressed\t= true; \n\tif(this._stationaryBase == false){\n\t\tthis._baseX\t= x;\n\t\tthis._baseY\t= y;\n\t\tthis._baseEl.style.display\t= \"\";\n\t\tthis._move(this._baseEl.style, (this._baseX - this._baseEl.width /2), (this._baseY - this._baseEl.height/2));\n\t}\n\t\n\tthis._stickX\t= x;\n\tthis._stickY\t= y;\n\t\n\tif(this._limitStickTravel === true){\n\t\tvar deltaX\t= this.deltaX();\n\t\tvar deltaY\t= this.deltaY();\n\t\tvar stickDistance = Math.sqrt( (deltaX * deltaX) + (deltaY * deltaY) );\n\t\tif(stickDistance > this._stickRadius){\n\t\t\tvar stickNormalizedX = deltaX / stickDistance;\n\t\t\tvar stickNormalizedY = deltaY / stickDistance;\n\t\t\t\n\t\t\tthis._stickX = stickNormalizedX * this._stickRadius + this._baseX;\n\t\t\tthis._stickY = stickNormalizedY * this._stickRadius + this._baseY;\n\t\t} \t\n\t}\n\t\n\tthis._stickEl.style.display\t= \"\";\n\tthis._move(this._stickEl.style, (this._stickX - this._stickEl.width /2), (this._stickY - this._stickEl.height/2));\t\n}\n\nVirtualJoystick.prototype._onMove\t= function(x, y)\n{\n\tif( this._pressed === true ){\n\t\tthis._stickX\t= x;\n\t\tthis._stickY\t= y;\n\t\t\n\t\tif(this._limitStickTravel === true){\n\t\t\tvar deltaX\t= this.deltaX();\n\t\t\tvar deltaY\t= this.deltaY();\n\t\t\tvar stickDistance = Math.sqrt( (deltaX * deltaX) + (deltaY * deltaY) );\n\t\t\tif(stickDistance > this._stickRadius){\n\t\t\t\tvar stickNormalizedX = deltaX / stickDistance;\n\t\t\t\tvar stickNormalizedY = deltaY / stickDistance;\n\t\t\t\n\t\t\t\tthis._stickX = stickNormalizedX * this._stickRadius + this._baseX;\n\t\t\t\tthis._stickY = stickNormalizedY * this._stickRadius + this._baseY;\n\t\t\t} \t\t\n\t\t}\n\t\t\n        \tthis._move(this._stickEl.style, (this._stickX - this._stickEl.width /2), (this._stickY - this._stickEl.height/2));\t\n\t}\t\n}\n\n\n//////////////////////////////////////////////////////////////////////////////////\n//\t\tbind touch events (and mouse events for debug)\t\t\t//\n//////////////////////////////////////////////////////////////////////////////////\n\nVirtualJoystick.prototype._onMouseUp\t= function(event)\n{\n\treturn this._onUp();\n}\n\nVirtualJoystick.prototype._onMouseDown\t= function(event)\n{\n\tevent.preventDefault();\n\tvar x\t= event.clientX;\n\tvar y\t= event.clientY;\n\treturn this._onDown(x, y);\n}\n\nVirtualJoystick.prototype._onMouseMove\t= function(event)\n{\n\tvar x\t= event.clientX;\n\tvar y\t= event.clientY;\n\treturn this._onMove(x, y);\n}\n\n//////////////////////////////////////////////////////////////////////////////////\n//\t\tcomment\t\t\t\t\t\t\t\t//\n//////////////////////////////////////////////////////////////////////////////////\n\nVirtualJoystick.prototype._onTouchStart\t= function(event)\n{\n\t// if there is already a touch inprogress do nothing\n\tif( this._touchIdx !== null )\treturn;\n\n\t// notify event for validation\n\tvar isValid\t= this.dispatchEvent('touchStartValidation', event);\n\tif( isValid === false )\treturn;\n\t\n\t// dispatch touchStart\n\tthis.dispatchEvent('touchStart', event);\n\n\tevent.preventDefault();\n\t// get the first who changed\n\tvar touch\t= event.changedTouches[0];\n\t// set the touchIdx of this joystick\n\tthis._touchIdx\t= touch.identifier;\n\n\t// forward the action\n\tvar x\t\t= touch.pageX;\n\tvar y\t\t= touch.pageY;\n\treturn this._onDown(x, y)\n}\n\nVirtualJoystick.prototype._onTouchEnd\t= function(event)\n{\n\t// if there is no touch in progress, do nothing\n\tif( this._touchIdx === null )\treturn;\n\n\t// dispatch touchEnd\n\tthis.dispatchEvent('touchEnd', event);\n\n\t// try to find our touch event\n\tvar touchList\t= event.changedTouches;\n\tfor(var i = 0; i < touchList.length && touchList[i].identifier !== this._touchIdx; i++);\n\t// if touch event isnt found, \n\tif( i === touchList.length)\treturn;\n\n\t// reset touchIdx - mark it as no-touch-in-progress\n\tthis._touchIdx\t= null;\n\n//??????\n// no preventDefault to get click event on ios\nevent.preventDefault();\n\n\treturn this._onUp()\n}\n\nVirtualJoystick.prototype._onTouchMove\t= function(event)\n{\n\t// if there is no touch in progress, do nothing\n\tif( this._touchIdx === null )\treturn;\n\n\t// try to find our touch event\n\tvar touchList\t= event.changedTouches;\n\tfor(var i = 0; i < touchList.length && touchList[i].identifier !== this._touchIdx; i++ );\n\t// if touch event with the proper identifier isnt found, do nothing\n\tif( i === touchList.length)\treturn;\n\tvar touch\t= touchList[i];\n\n\tevent.preventDefault();\n\n\tvar x\t\t= touch.pageX;\n\tvar y\t\t= touch.pageY;\n\treturn this._onMove(x, y)\n}\n\n\n//////////////////////////////////////////////////////////////////////////////////\n//\t\tbuild default stickEl and baseEl\t\t\t\t//\n//////////////////////////////////////////////////////////////////////////////////\n\n/**\n * build the canvas for joystick base\n */\nVirtualJoystick.prototype._buildJoystickBase\t= function()\n{\n\tvar canvas\t= document.createElement( 'canvas' );\n\tcanvas.width\t= 126;\n\tcanvas.height\t= 126;\n\t\n\tvar ctx\t\t= canvas.getContext('2d');\n\tctx.beginPath(); \n\tctx.strokeStyle = this._strokeStyle; \n\tctx.lineWidth\t= 6; \n\tctx.arc( canvas.width/2, canvas.width/2, 40, 0, Math.PI*2, true); \n\tctx.stroke();\t\n\n\tctx.beginPath(); \n\tctx.strokeStyle\t= this._strokeStyle; \n\tctx.lineWidth\t= 2; \n\tctx.arc( canvas.width/2, canvas.width/2, 60, 0, Math.PI*2, true); \n\tctx.stroke();\n\t\n\treturn canvas;\n}\n\n/**\n * build the canvas for joystick stick\n */\nVirtualJoystick.prototype._buildJoystickStick\t= function()\n{\n\tvar canvas\t= document.createElement( 'canvas' );\n\tcanvas.width\t= 86;\n\tcanvas.height\t= 86;\n\tvar ctx\t\t= canvas.getContext('2d');\n\tctx.beginPath(); \n\tctx.strokeStyle\t= this._strokeStyle; \n\tctx.lineWidth\t= 6; \n\tctx.arc( canvas.width/2, canvas.width/2, 40, 0, Math.PI*2, true); \n\tctx.stroke();\n\treturn canvas;\n}\n\n//////////////////////////////////////////////////////////////////////////////////\n//\t\tmove using translate3d method with fallback to translate > 'top' and 'left'\t\t\n//      modified from https://github.com/component/translate and dependents\n//////////////////////////////////////////////////////////////////////////////////\n\nVirtualJoystick.prototype._move = function(style, x, y)\n{\n\tif (this._transform) {\n\t\tif (this._has3d) {\n\t\t\tstyle[this._transform] = 'translate3d(' + x + 'px,' + y + 'px, 0)';\n\t\t} else {\n\t\t\tstyle[this._transform] = 'translate(' + x + 'px,' + y + 'px)';\n\t\t}\n\t} else {\n\t\tstyle.left = x + 'px';\n\t\tstyle.top = y + 'px';\n\t}\n}\n\nVirtualJoystick.prototype._getTransformProperty = function() \n{\n\tvar styles = [\n\t\t'webkitTransform',\n\t\t'MozTransform',\n\t\t'msTransform',\n\t\t'OTransform',\n\t\t'transform'\n\t];\n\n\tvar el = document.createElement('p');\n\tvar style;\n\n\tfor (var i = 0; i < styles.length; i++) {\n\t\tstyle = styles[i];\n\t\tif (null != el.style[style]) {\n\t\t\treturn style;\n\t\t}\n\t}         \n}\n  \nVirtualJoystick.prototype._check3D = function() \n{        \n\tvar prop = this._getTransformProperty();\n\t// IE8<= doesn't have `getComputedStyle`\n\tif (!prop || !window.getComputedStyle) return module.exports = false;\n\n\tvar map = {\n\t\twebkitTransform: '-webkit-transform',\n\t\tOTransform: '-o-transform',\n\t\tmsTransform: '-ms-transform',\n\t\tMozTransform: '-moz-transform',\n\t\ttransform: 'transform'\n\t};\n\n\t// from: https://gist.github.com/lorenzopolidori/3794226\n\tvar el = document.createElement('div');\n\tel.style[prop] = 'translate3d(1px,1px,1px)';\n\tdocument.body.insertBefore(el, null);\n\tvar val = getComputedStyle(el).getPropertyValue(map[prop]);\n\tdocument.body.removeChild(el);\n\tvar exports = null != val && val.length && 'none' != val;\n\treturn exports;\n}\n";
// Motor A
int PWMA = D1; //Speed control -D4
int AIN1 = D3; //Direction -D5
int aSpeed;
// Motor B
int PWMB = D2; //Speed control-d0
int BIN1 = D4; //Direction-d1
int bSpeed;
int espLED = D0;
boolean Direction;

// Initialize the OLED display using Arduino Wire:
SSD1306Wire display(0x3c, D6, D5);

// AD read for battery level
const int analogPin = A0;  	// ESP8266 Analog Pin ADC0 = A0
int battery = 0; 			// Variable, die den gelesenen Wert speichert
int battery_level = 0; 		// Showing battery level in 10 steps for solar display

// DFPlayer definitions
SoftwareSerial mySoftwareSerial(D7, D8); 	// RX, TX
DFRobotDFPlayerMini myDFPlayer;
void printDetail(uint8_t type, int value);

// Servo Board definitions
#define SR_OE 10           // Servo shield output enable pin (SDD3)
#define SERVOS 8           // Number of servo motors
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
int currentServo = 0;
#define SERVOMIN  262 // this is the 'minimum' pulse length count (out of 4096)
#define SERVOMAX  488 // this is the 'maximum' pulse length count (out of 4096)
//#define SERVOMIN  0 // this is the 'minimum' pulse length count (out of 4096)
//#define SERVOMAX  780 // this is the 'maximum' pulse length count (out of 4096)
int degrees;
int test;
 
// no more delay
    unsigned long startMillis;  //some global variables available anywhere in the program
    unsigned long currentMillis;
    const unsigned long periode = 100;  // milliseconds

    byte sekunde;    

// set Server stuff
  ESP8266WebServer server (80);

// Handle battery indicator
bool inRange(int val, int minimum, int maximum)
          {
          return ((minimum <= val) && (val <= maximum));
          }

void setup()
{
	Serial.begin(115200);
	delay(100);

  // DFPlayer setup
  mySoftwareSerial.begin(9600);
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  if (!myDFPlayer.begin(mySoftwareSerial)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
    }
  }
  Serial.println(F("DFPlayer Mini online."));
  myDFPlayer.volume(10);  	//Set volume value. From 0 to 30
  myDFPlayer.play(1);  		//Play the first mp3
  // END DFPlayer setup


  // Servo boad setup
  // Output Enable (EO) pin for the servo motors
  pinMode(SR_OE, OUTPUT);
  digitalWrite(SR_OE, HIGH);
  // Communicate with servo shield (Analog servos run at ~60Hz)
  Wire.pins(D6, D5); // Set if your using ESP8266 can use any two pins > SDA to (D6) and SCL to (D5)
  pwm.begin();
  pwm.setPWMFreq(60);
  // END  Servo board setup
  
  // Milliseconds start
  startMillis = millis();  //initial start time
  
	
  /*	
	Serial.print("Configuring access point...");
	/ You can remove the password parameter if you want the AP to be open. 
	WiFi.softAP(ssid);
	IPAddress myIP = WiFi.softAPIP();
	Serial.print("AP IP address: ");
	Serial.println(myIP);
	delay(100);
  */
  
  //  THIS IS USED WITH ESP32 MODULE for CAMERA
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  IPAddress ip(192,168,4,200);   
  IPAddress gateway(192,168,4,1);   
  IPAddress subnet(255,255,255,0);   
  WiFi.config(ip, gateway, subnet);

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());
  
  
  //set the pins as outputs

  pinMode(PWMA, OUTPUT);
  pinMode(AIN1, OUTPUT);

  pinMode(PWMB, OUTPUT);
  pinMode(BIN1, OUTPUT);
  
  pinMode(espLED, OUTPUT);
  digitalWrite(espLED, HIGH);


  ESP8266HTTPUpdateServer httpUpdater;

  server.on("/jsData.html", handleJSData);  
  server.on("/joystick.html",handleJoystickHtml);
  server.on("/virtualjoystick.js",handleVirtualJoystickJS);
  server.on("/funktion1.html",handleFunktion1);
  server.on("/funktion2.html",handleFunktion2);
  server.on("/", handleJoystickHtml);
  httpUpdater.setup(&server);
  server.begin();
  MDNS.begin(host);
  delay(500);    

  // Initialising the UI will init the display too.
  display.init();
  display.flipScreenVertically();
}

void loop()
{  
  /*--------------------------------------------------------------  
  * remove delay (one second)
  --------------------------------------------------------------*/
  currentMillis = millis();  //get the current "time" (actually the number of milliseconds since the program started)
  if (currentMillis - startMillis >= periode)  //test whether the period has elapsed
  { 
  startMillis = currentMillis;
  sekunde++;
  }


  /*-----------------------------------------------------------------
  * Interval one second
  ----------------------------------------------------------------*/
  if ( sekunde > 10 ) {
    sekunde = 0;
    
// Handle Battery
    battMess();

// Servo test
    //digitalWrite(SR_OE, HIGH);
    //delay(100);
    digitalWrite(SR_OE, LOW);
    delay(200);
    Serial.print("Servo #: ");
    Serial.println(currentServo);
    
    if ( test != 1 ) {
    //pwm.setPWM(currentServo, 10, 800 );
    Serial.print("Degree: ");
    Serial.println("120");
    moveDegree(currentServo, 120);
    test = 1;
    } else {
    //pwm.setPWM(currentServo, 50, 100);        
    Serial.print("Degree: ");
    Serial.println("90");
    moveDegree(currentServo, 90);
    test = 0;
    }    
    currentServo++;
    if ( currentServo > SERVOS ) {
      currentServo = 0; 
    }
    
    }
  /*-----------------------------------------------------------------
  * ENDE Intervall one second
  ----------------------------------------------------------------*/
  
// Handle client
    server.handleClient();

  // DFPlayer routine
  if (myDFPlayer.available()) {
    printDetail(myDFPlayer.readType(), myDFPlayer.read()); //Print the detail message from DFPlayer to handle different errors and states.
  }
 
}

/*--------------------------------------------------------------------
 * At this point only sub routines
 *--------------------------------------------------------------------*/
  void moveDegree(int servonum,int degree){
    uint16_t pulselen = map(degree, 0, 180, SERVOMIN, SERVOMAX);
    pwm.setPWM(servonum, 0, pulselen);
  }
 
 void printDetail(uint8_t type, int value){
  switch (type) {
    case TimeOut:
      Serial.println(F("Time Out!"));
      break;
    case WrongStack:
      Serial.println(F("Stack Wrong!"));
      break;
    case DFPlayerCardInserted:
      Serial.println(F("Card Inserted!"));
      break;
    case DFPlayerCardRemoved:
      Serial.println(F("Card Removed!"));
      break;
    case DFPlayerCardOnline:
      Serial.println(F("Card Online!"));
      break;
    case DFPlayerUSBInserted:
      Serial.println("USB Inserted!");
      break;
    case DFPlayerUSBRemoved:
      Serial.println("USB Removed!");
      break;
    case DFPlayerPlayFinished:
      Serial.print(F("Number:"));
      Serial.print(value);
      Serial.println(F(" Play Finished!"));
      break;
    case DFPlayerError:
      Serial.print(F("DFPlayerError:"));
      switch (value) {
        case Busy:
          Serial.println(F("Card not found"));
          break;
        case Sleeping:
          Serial.println(F("Sleeping"));
          break;
        case SerialWrongStack:
          Serial.println(F("Get Wrong Stack"));
          break;
        case CheckSumNotMatch:
          Serial.println(F("Check Sum Not Match"));
          break;
        case FileIndexOut:
          Serial.println(F("File Index Out of Bound"));
          break;
        case FileMismatch:
          Serial.println(F("Cannot Find File"));
          break;
        case Advertise:
          Serial.println(F("In Advertise"));
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
  
}
 
 void battMess() {
    // Calculating battery level and draw it on display
    battery = analogRead(analogPin); // read pin 
    Serial.print("Analog : ");
    Serial.println(battery); // print out value to display 

    // my analog value ist at 12 volt = 641, 8 volt = 430

// Calculate battery capacity and push it to display
    if ( inRange(battery, 599, 1024) )
       {
        if ( battery_level != 10 ) {
            display.clear();
            display.display();
            drawBatt10();
            drawBatt20();
            drawBatt30();
            drawBatt40();
            drawBatt50();
            drawBatt60();
            drawBatt70();
            drawBatt80();
            drawBatt90();
            drawBatt100();
            display.display();
            }
       battery_level = 10;
       }
       
    if ( inRange(battery, 579, 598) )
       {
        if ( battery_level != 9 ) {
          display.clear();
          display.display();
          drawBatt10();
          drawBatt20();
          drawBatt30();
          drawBatt40();
          drawBatt50();
          drawBatt60();
          drawBatt70();
          drawBatt80();
          drawBatt90();
          display.display();
          }
       battery_level = 9;
       }
    if ( inRange(battery, 559, 578) )
       {
        if ( battery_level != 8 ) {
          display.clear();
          display.display();
          drawBatt10();
          drawBatt20();
          drawBatt30();
          drawBatt40();
          drawBatt50();
          drawBatt60();
          drawBatt70();
          drawBatt80();
          display.display();
          }
       battery_level = 8;
       }

    if ( inRange(battery, 539, 558) )
       {
        if ( battery_level != 7 ) {
          display.clear();
          display.display();
          drawBatt10();
          drawBatt20();
          drawBatt30();
          drawBatt40();
          drawBatt50();
          drawBatt60();
          drawBatt70();
          display.display();
          }
        battery_level = 7;
       }

    if ( inRange(battery, 519, 538) )
       {
        if ( battery_level != 6 ) {
          display.clear();
          display.display();
          drawBatt10();
          drawBatt20();
          drawBatt30();
          drawBatt40();
          drawBatt50();
          drawBatt60();
          display.display();
          }
       battery_level = 6;
       }

    if ( inRange(battery, 499, 518) )
       {
        if ( battery_level != 5 ) {
          display.clear();
          display.display();
          drawBatt10();
          drawBatt20();
          drawBatt30();
          drawBatt40();
          drawBatt50();
          display.display();
          }
        battery_level = 5;
       }

    if ( inRange(battery, 479, 498) )
       {
        if ( battery_level != 4 ) {
          display.clear();
          display.display();
          drawBatt10();
          drawBatt20();
          drawBatt30();
          drawBatt40();
          display.display();
          }
       battery_level = 4;
       }

    if ( inRange(battery, 459, 478) )
       {
        if ( battery_level != 3 ) {
          display.clear();
          display.display();
          drawBatt10();
          drawBatt20();
          drawBatt30();
          display.display();
          }
        battery_level = 3;
       }

    if ( inRange(battery, 439, 458) )
       {
        if ( battery_level != 2 ) {
          display.clear();
          display.display();
          drawBatt10();
          drawBatt20();
          display.display();
          }
       battery_level = 2;
       }

    if ( inRange(battery, 0, 438) )
       {
        if ( battery_level != 1 ) {
          display.clear();
          display.display();
          drawBatt10();
          display.display();
          }
       battery_level = 1;
       }

 
  }
 
 void drawBatt10() { 
    // Fill the rectangle
    display.fillRect(108,0,16,64);
}

 void drawBatt20() {
    display.fillRect(96,0,7,64);
}

 void drawBatt30() {
    display.fillRect(84,0,7,64);
}

 void drawBatt40() {
    display.fillRect(72,0,7,64);
}

 void drawBatt50() {
    display.fillRect(60,0,7,64);
}

 void drawBatt60() {
    display.fillRect(48,0,7,64);
}

 void drawBatt70() {
    display.fillRect(36,0,7,64);
}

 void drawBatt80() {
    display.fillRect(24,0,7,64);
}

 void drawBatt90() {
    display.fillRect(12,0,7,64);
}

 void drawBatt100() {
    display.fillRect(0,0,7,64);
}
 
 void motorStop()
{
  //MotorA
  digitalWrite(AIN1, 0);
  analogWrite(PWMA, 0);
  //MotorB
  digitalWrite(BIN1, 0);
  analogWrite(PWMB, 0);
}

void motorForward()
{
 //Move Forward
 //MotorA
  digitalWrite(AIN1, 0);
  analogWrite(PWMA, 1000);
  //MotorB
  digitalWrite(BIN1, 0);
  analogWrite(PWMB, 1000);
  }
  
void motorBack(unsigned long delaytime)
{
  //Move Backward
 //MotorA
  digitalWrite(AIN1, 1);
  analogWrite(PWMA, 800);
  //MotorB
  digitalWrite(BIN1, 1);
  analogWrite(PWMB, 800);
  delay(delaytime);
  motorStop();
}

void motorLeft(unsigned long delaytime)

{
  //Motors Turn Left
  //MotorA
  digitalWrite(AIN1, 1);
  analogWrite(PWMA, 1000);
  //MotorB
  digitalWrite(BIN1, 1);
  analogWrite(PWMB, 0);
  delay(delaytime);
  motorStop();
}

void motorRight(unsigned long delaytime)

{
  //Motors Turn Right
 //MotorA
  digitalWrite(AIN1, 1);
  analogWrite(PWMA, 0);
  //MotorB
  digitalWrite(BIN1, 1);
  analogWrite(PWMB, 1000);
  delay(delaytime);
  motorStop();
}
 
void handleVirtualJoystickJS(){
  server.send_P(200,"application/javascript",virtualjoystick_js);
}

void handleJoystickHtml()
{
 server.send_P(200,"text/html",joystick_html); 
}

//This function takes the parameters passed in the URL(the x and y coordinates of the joystick)
//and sets the motor speed based on those parameters. 

void handleFunktion1() {   
  server.send_P(200,"text/html",joystick_html);
  Serial.println("Funktion1 aufgerufen ...");
  myDFPlayer.next();  //Play next mp3
}

void handleFunktion2() {
  server.send_P(200,"text/html",joystick_html); 
  Serial.println("Funktion2 aufgerufen ...");
}

void handleJSData(){

  int x = server.arg(0).toInt() * 10;
  int y = server.arg(1).toInt() * 10;
  
  Serial.print("x=");
  Serial.println(x);
  Serial.print("y=");
  Serial.println(y);

 if (( x < 0 ) && (y > 0)) {
  aSpeed = y;
  bSpeed = x*(-1) + y; 
 }
 if (( x > 0 ) && (y > 0)) {
  aSpeed = y + x;
  bSpeed = y;
 }
 if (( x < 0 ) && ( y < 0 )) {
  aSpeed = y*(-1);
  bSpeed = y*(-1) + x*(-1);  
 }
 if (( x > 0 ) && (y < 0)) {
  aSpeed = y*(-1) + x;
  bSpeed = y*(-1);
 }
 if (( x == 0) && ( y == 0 )) {
  aSpeed = 0;
  bSpeed = 0;
 }
   
  //set the direction based on y being negative or positive
  if ( y >= 0){
    Direction = 0; 
  } else {
    Direction = 1; 
  }
  
  aSpeed = constrain(aSpeed , 0, 1023); // limit PWM between 0 and 1023
  bSpeed = constrain(bSpeed , 0, 1023); // limit PWM between 0 und 1023
    
  Serial.print("aSpeed=");
  Serial.println(aSpeed);
  Serial.print("bSpeed=");
  Serial.println(bSpeed);

  Serial.print("Direction Motor A=");
  Serial.println(Direction);
  Serial.print("Direction Motor B=");
  Serial.println(Direction);
    
//MotorA
  digitalWrite(AIN1, Direction);
  analogWrite(PWMA, aSpeed);
//MotorB
  digitalWrite(BIN1, Direction);
  analogWrite(PWMB, bSpeed);

  //return an HTTP 200
  server.send(200, "text/plain", "");   
}
