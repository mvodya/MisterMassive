﻿/*
	MisterMassive - программа, для работы с массивами.

	создано неким человеком @mvodya в 2016 году
	Страничка, откуда вы вероятно скачали код (надеюсь) - https://github.com/mvodya/MisterMassive
	Просто страничка - http://frogling.com

	Все файлы в проекте распространяются под лицензией GNU General Public License v3.0 (текст с лицензией в корне проекта)
	Можно: использовать в коммерции, модифицировать, распространять, использовать в личных целях.
	Нужно: хотя бы в копипасте оставить ник и ссылку на оригинальный проект.

	Реверсия и глобальный апгрейд (версия 3) 2017 год
*/
#include "mistermassive.h"

const char* VERSION = "{version}";
const char* BUILDID = "{buildid}";

// Собственно, отсюда стартует программа

int main () {
	// Вывод приветствия
	std::cout << "Mister Massive v" << VERSION << " (" << BUILDID << ")\n\n";

	// Выбираем режим:
	MM::StartInput();
	// Указываем размер массивов
	MM::MassiveSizeSet();
	// Проверяем совместимость массивов
	MM::MassiveSizeTest();
	// Вводим данные в массивы (заполняем их)
	MM::MassiveInput();
	// Начинаем оперировать с массивами в зависимости от поставленной задачи
	MM::MassiveOperationStart();

	// Конец. Выход по enter
	system("pause");
	return 0;
}
