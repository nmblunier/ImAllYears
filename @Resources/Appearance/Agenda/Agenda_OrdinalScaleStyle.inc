[Variables]
;General appearance
GlobalWidth=420
GlobalHeight=500

EventHeight=75

;Colors
BackgroundColor=255,255,255,255
HeaderColor=77,77,77,255
TintColor=210,230,230,125
DefaultColor=77,77,77,255
SecondaryColor=77,77,77,175

;Alignment
Y1=88
Y2=168
Y3=248
Y4=328
Y5=408

; ==== Styles ====
[sEventWeekday]
X=40
FontFace=Roboto
FontWeight=400
StringAlign=Center
FontColor=#SecondaryColor#
FontSize=(#EventHeight#*0.14)
DynamicVariables=1
StringCase=Upper
AntiAlias=1

[sEventDay]
X=40
FontFace=Kozuka Gothic Pro
FontWeight=300
StringAlign=Center
FontColor=#DefaultColor#
FontSize=(#EventHeight#*0.32)
DynamicVariables=1
AntiAlias=1

[sEventTime]
X=100
StringAlign=CenterCenter
FontColor=#DefaultColor#
FontSize=(#EventHeight#*0.2)
DynamicVariables=1
AntiAlias=1

[sEventName]
X=135
FontFace=Roboto
FontWeight=300
FontColor=#DefaultColor#
FontSize=(#EventHeight#*0.2)
W=(#GlobalWidth#-150)
H=((#EventHeight#*0.2)*1.6)
ClipString=1
DynamicVariables=1
AntiAlias=1

[sEventLocation]
X=135
FontFace=Roboto
FontWeight=300
FontColor=#SecondaryColor#
FontSize=(#EventHeight#*0.15)
W=(#GlobalWidth#-150)
H=((#EventHeight#*0.15)*1.6)
ClipString=1
DynamicVariables=1
AntiAlias=1