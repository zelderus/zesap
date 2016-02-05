# zesap
Приложение демон для обработки запросов через UNIX-socket от сервера.
Выполняет всю процедуру приложения самого сайта. Генерирует контент.

Цель
--------
- Слушает UNIX-socket, файл сокета кладет в 'tmp/zesap.sock'
- Получает запрос по UNIX-socket
- Создает отдельный процесс на каждый запрос для работы отдельно с ним
- Выполняет цикл запуска приложения (ruby)
- Отправляет ответ серверу (ZEX)

Компиляция
----------
> make

Запуск
------
> ./bin/zesap

Также можно положить демона в /etc/init.d/zesaxdaemon, предварительно в нем указав верный путь к самому приложению

Запросы
-------
Серверу необходимо прописать полный путь к сокету, например
> "/home/zelder/cc/zesap/tmp/zesap.sock"
> 


