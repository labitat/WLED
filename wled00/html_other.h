/*
 * More web UI HTML source arrays.
 * This file is auto generated, please don't make any changes manually.
 * Instead, see https://kno.wled.ge/advanced/custom-features/#changing-web-ui
 * to find out how to easily modify the web UI source!
 */ 

// Autogenerated from wled00/data/usermod.htm, do not edit!!
const char PAGE_usermod[] PROGMEM = R"=====(<!DOCTYPE html><html><body>No usermod custom web page set.</body></html>)=====";


// Autogenerated from wled00/data/msg.htm, do not edit!!
const char PAGE_msg[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta content="width=device-width" name="viewport">
<title>WLED Message</title><script>
function B(){window.history.back()}function RS(){window.location="/settings"}function RP(){top.location.href="/"}
</script><style>
.bt{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.3ch solid #333;display:inline-block;font-size:20px;margin:8px;margin-top:12px}body{font-family:Verdana,sans-serif;text-align:center;background:#222;color:#fff;line-height:200%%;margin:0}
</style></head><body><h2>%MSG%</body></html>)=====";


#ifdef WLED_ENABLE_DMX

// Autogenerated from wled00/data/dmxmap.htm, do not edit!!
const char PAGE_dmxmap[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta content="width=device-width" name="viewport">
<title>DMX Map</title><script>
function B(){window.history.back()}function RS(){window.location="/settings"}function RP(){top.location.href="/"}function FM() {%DMXVARS%
var n=["SET 0","RED","GREEN","BLUE","WHITE","SHUTTER","SET 255","DISABLED"],o=[];for(i=0;i<512;i++)o.push(7);for(i=0;i<LC;i++)for(FS=CS+CG*i,j=0;j<CN;j++)DA=FS+j,o[DA-1]=CH[j];for(DMXMap="",i=0;i<512;i++)DMXMap+='<div class="anytype type'+o[i]+'">'+String(i+1)+"<br />"+n[o[i]]+"</div>";document.getElementById("map").innerHTML=DMXMap}
</script><style>
.anytype{border:1px solid #fff;margin:1px;float:left;width:100px;height:100px}.S{margin:0;border:2px solid #fff}.type7{color:#888;border:1px dotted grey}.type6{color:#fff}.type4{color:#fff;font-weight:700}.type3{color:#00f;font-weight:700}.type2{color:#0f0;font-weight:700}.type1{color:red;font-weight:700}.bt{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.3ch solid #333;display:inline-block;font-size:20px;margin:8px;margin-top:12px}body{font-family:Verdana,sans-serif;text-align:center;background:#222;color:#fff;line-height:200%%;margin:0}
</style></head><body onload="FM()"><div id="map">...</div></body></html>)=====";


#else
const char PAGE_dmxmap[] PROGMEM = R"=====()=====";
#endif

// Autogenerated from wled00/data/update.htm, do not edit!!
const char PAGE_update[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta content="width=device-width" name="viewport">
<title>WLED Update</title><script>
function B(){window.history.back()}function U(){document.getElementById("uf").style.display="none",document.getElementById("msg").style.display="block"}
</script><style>
.bt{background:#333;color:#fff;font-family:Verdana,sans-serif;border:.3ch solid #333;display:inline-block;font-size:20px;margin:8px;margin-top:12px}input[type=file]{font-size:16px}body{font-family:Verdana,sans-serif;text-align:center;background:#222;color:#fff;line-height:200%}#msg{display:none}
</style></head><body><h2>WLED Software Update</h2><form method="POST" 
action="/update" id="uf" enctype="multipart/form-data" onsubmit="U()">
Installed version: 0.13.2-a0<br>Download the latest binary: <a 
href="https://github.com/Aircoookie/WLED/releases" target="_blank"><img 
src="https://img.shields.io/github/release/Aircoookie/WLED.svg?style=flat-square">
</a><br><input type="file" class="bt" name="update" required><br><input 
type="submit" class="bt" value="Update!"><br><button type="button" class="bt" 
onclick="B()">Back</button></form><div id="msg"><b>Updating...</b><br>
Please do not close or refresh the page :)</div></body></html>)=====";


// Autogenerated from wled00/data/welcome.htm, do not edit!!
const char PAGE_welcome[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta charset="utf-8"><meta 
content="width=device-width" name="viewport"><meta name="theme-color" 
content="#222222"><title>Welcome!</title><style>
body{font-family:Verdana,Helvetica,sans-serif;text-align:center;background-color:#222;margin:0;color:#fff}button{outline:0;cursor:pointer;padding:8px;margin:10px;width:230px;text-transform:uppercase;font-family:helvetica;font-size:19px;background-color:#333;color:#fff;border:0 solid #fff;border-radius:25px}img{width:950px;max-width:82%;image-rendering:pixelated;image-rendering:crisp-edges;margin:4vh 0 0 0;animation:fi 1s}@keyframes fi{from{opacity:0}to{opacity:1}}.main{animation:fi 1.5s .7s both}
</style></head><body><img alt="" 
src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAG0AAAAfCAMAAADazLOuAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAABLUExURQAAAAB81gCU/zKq///mo7sWMN8bO+ZIYtZaAP9rAP+HMsCiG+TAIOnMS0KqNU7KPnLUZOrq6v///4CAgGhoaL+/v6CgoExMTAAAAAlm4O8AAAAZdFJOU////////////////////////////////wABNAq3AAAACXBIWXMAAA7DAAAOwwHHb6hkAAACN0lEQVRIS73VjVLCMBAEYIr8CYKkrdj3f1J37zaXFCpTO+piaDgbPq9px9VQ0qyrvKj4q6m0Zr1h+M7xF1zRmnWzqV9/0d2jttGotO1uv9dUObwej5oqp7fzWVPl8n69aprzoOUUbbvdIbV3OLwitXc6vSG1d7m8I3feSEN0j2CeNbOY4MxigjOLCc4sZsTV2l1cCyy4wIILLLjAxtykltq2rbTU+qi01N5rXNO2leaFORoija2l5MM5a02ac9Ya16Sk5tgaPrUpjZub0BL6YqSxKwbH77XUUmSkJXSl8QtaMuyJhq5maL5nTKVpZC13VmtMpTFT2g4vJjTuGfMzzXftiUZnhdtgb1xofvypRon5TjNnxYN9zJo6K5ruSIzQtGuVZn0x91rKvdHBvm39E7SyZ4y06Gz8BDBFKzsXmhcwyfsGZ9VpbhoiCinaxPNmGWmWWrNU2jB0q6HvOhN1JUtCixQtp2g51ZVUXIPS2RMAD++T2nY/DrDjOMDO4wC7jmNYj3d73nrXug8Yt9uNB8xNU1cKNXWlUFNXCjV1pZhGTE83m2vWfYf/NGj4Bg1zu5JD3/MnH5ZWfLOksbmGWGjgXMN5/C2GXYGFFW9Nmtle6Xut0Gm+JsayCj8z0nhjGvYJzVf4aSzmNYsr+u7Q2JIdoX3YOQjOslmsW1jJ3120nE9gfo79hTaNdcsqVR610lvO47pllae9ReZ805zKo2a3iaY5c75pTmVCA6dJ5H7N0sr/asPwBehb7ifEhusRAAAAAElFTkSuQmCC">
<div class="main"><h1>Welcome to WLED!</h1><h3>
Thank you for installing my application!</h3><b>Next steps:</b><br><br>
Connect the module to your local WiFi here!<br><button 
onclick='window.location.href="/settings/wifi"'>WiFi settings</button><br><i>
Just trying this out in AP mode?</i><br><button 
onclick='window.location.href="/sliders"'>To the controls!</button><br></div>
</body></html>)=====";


// Autogenerated from wled00/data/liveview.htm, do not edit!!
const char PAGE_liveview[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta name="viewport" 
content="width=device-width,initial-scale=1,minimum-scale=1"><meta 
charset="utf-8"><meta name="theme-color" content="#222222"><title>
WLED Live Preview</title><style>
body{margin:0}#canv{background:#000;filter:brightness(175%);width:100%;height:100%;position:absolute}
</style></head><body><div id="canv"><script>
update();var tmout=null;function update(){if(document.hidden)return clearTimeout(tmout),void(tmout=setTimeout(update,250));fetch("/json/live").then(t=>(t.ok||(clearTimeout(tmout),tmout=setTimeout(update,2500)),t.json())).then(t=>{var e="linear-gradient(90deg,",u=t.leds.length;for(i=0;i<u;i++){var o=t.leds[i];o.length>6&&(o=o.substring(2)),e+="#"+o,i<u-1&&(e+=",")}e+=")",document.getElementById("canv").style.background=e,clearTimeout(tmout),tmout=setTimeout(update,40)}).catch((function(t){clearTimeout(tmout),tmout=setTimeout(update,2500)}))}
</script></body></html>)=====";


// Autogenerated from wled00/data/liveviewws.htm, do not edit!!
const char PAGE_liveviewws[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta name="viewport" 
content="width=device-width,initial-scale=1,minimum-scale=1"><meta 
charset="utf-8"><meta name="theme-color" content="#222222"><title>
WLED Live Preview</title><style>
body{margin:0}#canv{background:#000;filter:brightness(175%);width:100%;height:100%;position:absolute}
</style></head><body><div id="canv"><script>
function updatePreview(e){var n="linear-gradient(90deg,",o=e.length;for(i=2;i<o;i+=3)n+=`rgb(${e[i]},${e[i+1]},${e[i+2]})`,i<o-3&&(n+=",");n+=")",document.getElementById("canv").style.background=n}function getLiveJson(e){try{if("[object ArrayBuffer]"===toString.call(e.data)){let e=new Uint8Array(event.data);if(76!=e[0])return;updatePreview(e)}}catch(e){console.error("Peek WS error:",e)}}var ws=top.window.ws;ws&&ws.readyState===WebSocket.OPEN?(console.info("Peek uses top WS"),ws.send("{'lv':true}")):(console.info("Peek WS opening"),(ws=new WebSocket(("https:"==window.location.protocol?"wss":"ws")+"://"+document.location.host+"/ws")).onopen=function(){console.info("Peek WS open"),ws.send("{'lv':true}")}),ws.binaryType="arraybuffer",ws.addEventListener("message",getLiveJson)
</script></body></html>)=====";


// Autogenerated from wled00/data/404.htm, do not edit!!
const char PAGE_404[] PROGMEM = R"=====(<!DOCTYPE html><html><head><meta charset="utf-8"><meta 
content="width=device-width" name="viewport"><meta name="theme-color" 
content="#222222"><title>Not found</title><style>
body{font-family:Verdana,Helvetica,sans-serif;text-align:center;background-color:#222;margin:0;color:#fff}img{width:400px;max-width:50%;image-rendering:pixelated;image-rendering:crisp-edges;margin:25px 0 -10px 0}button{outline:0;cursor:pointer;padding:8px;margin:10px;width:230px;text-transform:uppercase;font-family:helvetica;font-size:19px;background-color:#333;color:#fff;border:0 solid #fff;border-radius:25px}
</style></head><body><img alt="" 
src="data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAACAAAAAgCAMAAABEpIrGAAAAAXNSR0IArs4c6QAAAARnQU1BAACxjwv8YQUAAAAbUExURQAAAAB81gCU/zKq/////9bW1oCAgGhoaAAAAGPLX8AAAAAJdFJOU///////////AFNPeBIAAAAJcEhZcwAADsAAAA7AAWrWiQkAAACdSURBVDhPxc9bDoUgEANQebP/FUuHMjBGY/B+3EYR7RH0qC/ZBc6HwCljgHO+xZIVSI2sYgHaG7EBWh8jWoxTrCBFdDJ+BD4lbIHxAcz8APAVLTsrZE4eQD5qzt3cAFTYokC4YCN9Gybgu4yAQtBFLQXHuHABA7JMeOEC/E0W5uy9gv4vo5QHK2i7yq2C8UABM4HmL+CSTXCTF1DrCX6+Gp9zB5dsAAAAAElFTkSuQmCC">
<h1>404 Not Found</h1><b>Akemi does not know where you are headed...</b><br><br>
<button onclick='window.location.href="/sliders"'>Back to controls</button>
</body></html>)=====";


// Autogenerated from wled00/data/favicon.ico, do not edit!!
const uint16_t favicon_length = 954;
const uint8_t favicon[] PROGMEM = {
  0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x10, 0x10, 0x00, 0x00, 0x01, 0x00, 0x18, 0x00, 0x86, 0x00,
  0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00,
  0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x10, 0x08, 0x06,
  0x00, 0x00, 0x00, 0x1f, 0xf3, 0xff, 0x61, 0x00, 0x00, 0x00, 0x4d, 0x49, 0x44, 0x41, 0x54, 0x38,
  0x8d, 0x63, 0xfc, 0xff, 0xff, 0x3f, 0x03, 0xb1, 0x80, 0xd1, 0x9e, 0x01, 0x43, 0x31, 0x13, 0xd1,
  0xba, 0x71, 0x00, 0x8a, 0x0d, 0x60, 0x21, 0xa4, 0x00, 0xd9, 0xd9, 0xff, 0x0f, 0x32, 0x30, 0x52,
  0xdd, 0x05, 0xb4, 0xf1, 0x02, 0xb6, 0xd0, 0xa6, 0x99, 0x0b, 0x68, 0x1f, 0x0b, 0xd8, 0x42, 0x9e,
  0xaa, 0x2e, 0xa0, 0xd8, 0x00, 0x46, 0x06, 0x3b, 0xcc, 0xcc, 0x40, 0xc8, 0xd9, 0x54, 0x75, 0x01,
  0xe5, 0x5e, 0x20, 0x25, 0x3b, 0x63, 0x03, 0x00, 0x3e, 0xb7, 0x11, 0x5a, 0x8d, 0x1c, 0x07, 0xb4,
  0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

