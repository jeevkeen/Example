# Example
First try Git Bush

# Пример проекта с репозиторием на github

Тестовый репозиторий для освоения GitHub.

1. **Выгрузка существующего проекта на GitHub.**

  * создать репозиторий на GitHub (public, .gitignore for C++, README.md), скопировать на него ссылку <URL>.git
  * открыть Git Bash консоль в папке проекта
  * проинициализировать в этой папке git:
  ```
  git init
  ```

  * закрепить за папкой проекта репозиторий на GitHub:
  ```
  git remote add origin <URL>.git
  ```
  
  * если текущая рабочая ветка называется master, переименовать в новом стиле:
  ```
  git branch -M main
  ```
  
  * подтянуть с GitHub файлы .gitignore и README.md:
  ```
  git pull origin main
  ```

  > На данном этапе лучше внести корректную информацию в .gitignore и README.md.
  
  > Далее важная связка команд (git add, git commit, git push - запомнить!)
  
  * выбрать файлы для сохранения
  
    - сохранить все изменившиеся:
      ```
      git add .
      ```
    - сохранить конкретные:
      ```
      git add file.cpp
      git add file.h
      fit add folder
      ...
      ```
    - убрать из сохранения файл / папку:
      ```
      git reset extra_file.cpp
      ```  
  * сохранить текущее состояние выбранных файлов:
    ```
    git commit -m "что было сделано?"
    ```
    > если git на устройстве настраивается впервые, появится предупреждение и потребуются команды:
    > ```
    > git config --global user.name "Имя Ф."
    > git config --global user.mail "email@mail.ru"
    > ```
  * отправить имеющиеся сохранения на GitHub в ветку main:
    ```
    git push origin main
    ```

2. **Подтягивание изменений с GitHub**

  * подтянуть с GitHub файлы .gitignore и README.md:
  ```
  git pull origin <имя ветки>
  ```

3. **Скачивание уже существующего репозитория с гитхаб**

```
git clone <URL>.git
cd <имя репозитория>
```

4. **Разработка**

* создать ветку:
  ```
  git branch dev
  ```

* перейти в ветку:
  ```
  git checkout dev
  ```
  
* создать ветку и сразу перейти в нее:
  ```
  git checkout -b dev
  ```
  
* сохранение текущего состояния репозитория (можно повторять много раз):
  ```
  git add .
  git commit -m "что было сделано?"
  ```

* выгрузка на GitHub:
  ```
  git push origin dev
  ```
  
  файл будет пополняться в дальнейшем!