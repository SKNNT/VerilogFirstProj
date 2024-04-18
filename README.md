# ControlPanel
This project includes the development of a device on a microcontroller that monitors the employee's condition and the development of software for it

Дальнейшее описание будет на русском языке, данный файл будет постоянно обновляться 

#Стадии работы:
1. Знакомство с git и qt
2. Написание скетча для рабочего стенда(ESP32, датчика температуры, датчика влажности и 2-х кнопок)
3. Написание кода для приложения qt (должен присутсвовать интерфейс для дальшейшего вывода информации)
4. Отправка данных собранных на ESP32 в qt при помощи проводного интерфейса
5. ...

Перед тем как пользоватся git следует установить сам git на ПК, в дальнейшем можно пользоваться либо cmd, либо приложением с графическим интерфейсом 
#git команды:

  Создание ветки, в мастер заливаем в самом конце 
  
  git pull
  
  ветвление:
  
  git branch <имя ветки>
  
  git checkout <имя ветки>
  
  возвращаемся в master и пишем:
  
  git pull
  
  git merge <имя ветки>
  
  Open a pull request

основные команды:
  git clone [<url>](https://github.com/OfficeWorkControlPanel/ControlPanel.git)
  git add .
  git commit -m "комментарий"
  git push <url>        (иногда так git push --set-upstream https://github.com/OfficeWorkControlPanel/ControlPanel.git master)
