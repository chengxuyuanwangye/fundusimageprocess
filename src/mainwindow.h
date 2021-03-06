#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class ImageGLWidget;
class QFile;
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
protected:
     void resizeEvent(QResizeEvent* event);
private:
    QDockWidget *toolpanel;
    ImageGLWidget *centreimgwidget;
    QWidget *centralWidget;
    QWidget *dockWidgetContents;
    QWidget *contwidget;
    void createDockTool();
    void btnopenfile_clicked(bool);
    void btnalways_clicked(bool);
    void btnnever_clicked(bool);
    void btnless_clicked(bool);
    void btnequal_clicked(bool);
    void btnlequal_clicked(bool);
    void btngreater_clicked(bool);



};

#endif // MAINWINDOW_H
