#include "dialog.h"
#include <QRect>
#include <QApplication>
#include <QDesktopWidget>
#include <QGuiApplication>
#include <QProcess>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    QProcess *process;
/***
 * All Screen related codes are here.
 * Features:
 * 1. Select display in case of multiple displays connected.
 * 2. Display full screen.
 * 3. Remove the frames and status bar
 *
 * */

    // Get the list of available screens
    QList<QScreen*> screens = QGuiApplication::screens();

    // Assume the secondary screen is at index 1 in the list (you can change this based on your setup)
    QScreen *screen = screens.value(0);

    //Uncomment these three line during final flashing.
//    w.setWindowFlags(w.windowFlags() | Qt::FramelessWindowHint | Qt::FramelessWindowHint | Qt::WindowFullscreenButtonHint);
//    QRect screenGeometry = QApplication::desktop()->geometry();
//    QRect screenGeometry = screen->geometry();
//    w.setGeometry(screenGeometry.x(), screenGeometry.y(), w.width(), w.height());
    process = new QProcess;

//    wmctrl: install wmctrl on your ubunut system before running this command.

//    process->startDetached("wmctrl -r :ACTIVE: -b add, hidden");
//    process->startDetached("wmctrl -r :ACTIVE: -b add, hidden");
//    process->startDetached("xprop -root -f _NET_SHOWING_DESKTOP 32c -set _NET_SHOWING_DESKTOP 0");
//    process->startDetached("xprop -root -remove _MOTIF_WM_HINTS");
    process->startDetached();

//    w.showMaximized();
    w.showFullScreen();
//    w.setWindowTitle("::: Welcome :: Ultrafast Chargers :::");
    w.show();
    return a.exec();
}
