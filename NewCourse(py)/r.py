from string import ascii_uppercase
from typing import Union

class Registration:
    _instance = None 
    MIN_PASS_LEN = 4
    MAX_PASS_LEN = 8

    MIN_LOGIN_LEN = 5
    MAX_LOGIN_LEN = 9


    def __init__(self):
        self.password = None
        self.login = None 
        print('Введите имя пользователя: ', end='')
        self.get_login(input())


    def get_login(self, login: str):
        if self.login is None:       
            if self.login_valid(login):
                self.login = login
                print(f'Логин установлен: {self.login}')
            else:
                print('Логин должен содержать от 5 до 9 символов, хотя бы одну заглавную букву и не содержать специальные символы (?/.,=-_;:@#!%^&*)')
                print('Введите имя пользователя: ', end='')
                self.get_login(input())


    def get_attribute(self):
        if self.login is not None:
            if self.password is None:
                password = input('Введите пароль: ')
                self.set_password(password)


    @classmethod
    def validate(cls, password: Union[int, float]):
        return cls.MIN_PASS_LEN <= len(str(password)) <= cls.MAX_PASS_LEN
    

    @classmethod
    def login_valid(cls, login: str):
        log_con1 = cls.MIN_LOGIN_LEN <= len(login) <= cls.MAX_LOGIN_LEN
        log_con2 = any(map(lambda i: i in ascii_uppercase, login))
        log_con3 = any(map(lambda i: i in '0123456789', login))
        log_con4 = not(any(map(lambda i: i in '?/.,=-_;:@#!%^&*', login)))
        return all([log_con1, log_con2, log_con3, log_con4])
    

    def set_password(self, password: Union[int, float]):
        if self.validate(password): 
            self.password = password
            print(f'Для пользователя {self.login} установлен пароль: {self.password}')    
        else:
            print('Пароль должен содержать от 4 до 8 цифр')
            new_password = input('Введите пароль заново: ')
            self.set_password(new_password)

    

db = Registration()
db.get_attribute()