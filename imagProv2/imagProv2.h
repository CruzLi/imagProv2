#pragma once
#ifndef IMAGEPROCESS_H
#define IMAGEPROCESS_H
#include <QtWidgets/QMainWindow>
#include "ui_imagProv2.h"
#include <QtWidgets/qfiledialog.h> //getOpenFileNameµÄÀàÉùÃ÷
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>


class imagProv2 : public QMainWindow
{
	Q_OBJECT

public:
	imagProv2(QWidget *parent = Q_NULLPTR);
	~imagProv2();

private slots:

	//menu
	void on_actionOpen_triggered();
	void on_actionProject1_triggered();
	void on_actionProject2_triggered();
	void on_actionProject3_triggered();
	void on_actionProject4_triggered();
	void on_actionProject5_triggered();

	//Project_page1
	//void on_open_clicked();
	void on_hist_clicked();
	void on_otsu_clicked();
	void on_entropy_clicked();
	void on_spinbox_valueChanged();
	void on_thresSlider_valueChanged();
	void on_thresSlider_sliderReleased();

	//Project_page2
	void on_robButton_clicked();
	void on_preButton_clicked();
	void on_sobelButton_clicked();
	void on_gaussButton_clicked();
	void on_medianButton_clicked();
	void on_generateTable_clicked();
	void on_filterButton_clicked();

	//Project_page3
	void on_seButton_clicked();
	void on_bwDilate_clicked();
	void on_bwErode_clicked();
	void on_bwOpen_clicked();
	void on_bwClose_clicked();
	void on_DSButton_clicked();
	void on_skeleButton_clicked();
	void on_skeleRestorButton_clicked();
	
	//Project_page4
	void on_seButton_2_clicked();
	void on_grayDilate_clicked();
	void on_grayErode_clicked();
	void on_grayOpen_clicked();
	void on_grayClose_clicked();

	//Project_page5
	void on_edgeDetectButton_clicked();
	void on_gradientButton_clicked();
	void on_conDilationButton_clicked();
	void on_reconstructionButton_clicked();
private:
	Ui::imagProv2Class ui;
	cv::Mat image; 
	cv::MatND hist;
	cv::Mat binaryImage;
	cv::Mat skelSave;
	cv::Mat labelMat;
	int numOfErode;
};

#endif // IMAGEPROCESS_H