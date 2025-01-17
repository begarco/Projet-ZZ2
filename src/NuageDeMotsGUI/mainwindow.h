#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QFileDialog>
#include <QString>
#include <QMessageBox>

#include <iostream>
#include <string>

//#include "FileReader.h"
#include "processthread.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

private :
    typedef std::vector<std::string> stringVec;

    //IFileReader * fr;
    std::string buff[3];
    std::string buff0;
    std::string buff1;
    std::string buff2;

    stringVec * lastList; // La derniere liste affichee

    ProcessThread * thread;

    void lock_controls();

    void unlock_controls();

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void setDefaultFiles(const std::string &, const std::string &, const std::string &);

private slots:
    void on_actionQuitter_triggered();

    void on_browsePrincipal_clicked();

    void on_browseIgnore_clicked();

    void on_browseSeparator_clicked();

    void on_extract_clicked();

    void on_defaultIgnore_clicked();

    void on_defaultSeparator_clicked();

    void print_results(stringVec);

    void on_actionAide_triggered();

    void on_actionA_propos_triggered();

    void on_export_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
