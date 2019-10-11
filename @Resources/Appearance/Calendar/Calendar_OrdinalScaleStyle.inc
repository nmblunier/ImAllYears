[Variables]
;General appearance
GlobalWidth=420

;Number of weeks shown on the calendar (1 - 6).
WeekCount=6

;Colors
BackgroundColor=255,255,255,255
HeaderColor=135,135,135,255
CurrentMonthColor=221,151,144,255
TintColor=210,230,230,125
NextMonthColor=203,179,168,255

DayDefaultColor=135,135,135,255
DayTodayColor=10,10,10,255
DayHolidayColor=224,68,50,255
DayWeekendColor=100,100,100,150
DayEventColor=224,68,50,125

;===== Changing the variables below are not recommended =====
;Alignment
GlobalHeight=(#GlobalWidth#*1.45)
;Column Center of each weekday
X0=(#GlobalWidth#*(0*0.35/3+0.15))
X1=(#GlobalWidth#*(1*0.35/3+0.15))
X2=(#GlobalWidth#*(2*0.35/3+0.15))
X3=(#GlobalWidth#*(3*0.35/3+0.15))
X4=(#GlobalWidth#*(4*0.35/3+0.15))
X5=(#GlobalWidth#*(5*0.35/3+0.15))
X6=(#GlobalWidth#*(6*0.35/3+0.15))

;Row Center of days of the week
Y0=(#GlobalHeight#*0.3575)
;Row distance
Ydelta = (#GlobalHeight#*0.075)
;Row Center of each week row
Y1=(#Y0#+#Ydelta#/1.1)
Y2=(#Y1#+#Ydelta#)
Y3=(#Y2#+#Ydelta#)
Y4=(#Y3#+#Ydelta#)
Y5=(#Y4#+#Ydelta#)
Y6=(#Y5#+#Ydelta#)

;Reserve space for month header if a new month starts
NewMonthPadding=(#GlobalHeight#*0.2217)

; ==== Styles ====
[sHeaderStyle]
FontFace=Kozuka Gothic Pro
FontWeight=200
FontColor=#HeaderColor#
Y=(#GlobalHeight#*0.075)
AntiAlias=1

[sWeekdaysStyle]
StringAlign=CenterBottom
Y=#Y0#
FontFace=Roboto
FontSize=(#GlobalHeight#*0.0135)
FontColor=#HeaderColor#
DynamicVariables=1
AntiAlias=1

[sWeekdaysStyle2]
StringAlign=CenterBottom
Y=#Y0#
FontFace=Roboto
FontSize=(#GlobalHeight#*0.0135)
FontColor=#DayTodayColor#
DynamicVariables=1
AntiAlias=1

;Calendar days
[sDayDefault]
FontFace=Kozuka Gothic Pro
StringAlign=CenterBottom
FontWeight=300
FontColor=#DayDefaultColor#
FontSize=(#GlobalHeight#*0.025)
DynamicVariables=1
AntiAlias=1

[sDayToday]
FontColor=#DayTodayColor#
FontWeight=400

[sDayHoliday]
FontColor=#DayHolidayColor#
FontWeight=400

[sDayWeekend]
FontColor=#DayWeekendColor#