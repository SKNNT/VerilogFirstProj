#include <QtWidgets>
#include <QSerialPort>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Создаем главное окно
    QWidget window;
    window.setWindowTitle("Отображение состояния кнопки");

    // Создаем кнопку
    QPushButton button1("Кнопка 1", &window);
    button1.setCheckable(true);

    // Создаем метку для отображения состояния кнопки
    QLabel label1("Состояние кнопки: ", &window);
    QLabel label2("Состояние кнопки: ", &window);

    // Создаем слот для обновления состояния кнопки
    QObject::connect(&button1, &QPushButton::clicked, [&label1, &button1]() {
        if (button1.isChecked()) {
            label1.setText("Состояние кнопки: Нажата");
        } else {
            label1.setText("Состояние кнопки: Отжата");
        }
    });

    // Размещаем элементы на форме
    QVBoxLayout layout(&window);
    layout.addWidget(&button1);
    //layout.addWidget(&label1);

    layout.addWidget(&label1);
    layout.addWidget(&label2);

    window.show();

    return app.exec();
}
