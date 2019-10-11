[Variables]
GlobalWidth=600
GlobalHeight=(0.16*#GlobalWidth#)
LifeGaugeIconColor=255,255,255,200

[styleSystemLabel]
X=(#GlobalWidth#*0.135+[LifeGaugePadding:X])
Y=(#GlobalWidth#*0.06)
StringAlign=CenterCenter
FontSize=(#GlobalWidth#*0.04)
FontColor=255,255,255,200
StringEffect=Border
FontEffectColor=77,77,77,255
AntiAlias=1
DynamicVariables=1

[styleSystemInfo]
X=(#GlobalWidth#*0.62+[LifeGaugePadding:X])
Y=(#GlobalWidth#*0.10)
FontSize=(#GlobalWidth#*0.03)
FontColor=255,255,255,200
StringEffect=Border
FontEffectColor=77,77,77,255
AntiAlias=1
DynamicVariables=1

[styleSystemPercentage]
X=(#GlobalWidth#*0.86+[LifeGaugePadding:X])
DynamicVariables=1