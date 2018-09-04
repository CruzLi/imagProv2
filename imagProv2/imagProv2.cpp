#include "imagProv2.h"
#include <opencv2/opencv.hpp>
#include <cv.h>
#include "QtCore/qvector.h"
#include <QMessageBox>
#include <qdebug.h>
#include <math.h>
#include <distanceCal.h>

using namespace cv;
using namespace std;

imagProv2::imagProv2(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

imagProv2::~imagProv2()
{

}

/*************************************/
/*--------------slot函数-------------*/
/*************************************/
/*-------------menu-----------------*/
//图片读取函数
void imagProv2::on_actionOpen_triggered()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"),
		",", tr("image Files(*.png *.jpg *.jpeg *.bmp)"));
	std::string str = fileName.toStdString();

	Mat image0;

	image0 = imread(str);

	if (image0.type() == CV_8UC3)
		cvtColor(image0, image, CV_RGB2GRAY);
	int width = image.cols;
	int height = image.rows;

	if (image.empty())
	{
		fprintf(stderr, "Can not load image!\n", str);
	}

	int index = ui.stackedWidget->currentIndex();
	switch (index)
	{
	case 0:
	{
		QImage cvMat2QImage(const cv::Mat& mat);
		QImage img = cvMat2QImage(image);
		ui.inImage->clear();
		ui.inImage->setPixmap(QPixmap::fromImage(img));
		ui.inImage->setScaledContents(true);
		ui.inImage->show();
		break;
	}
	case 1:
	{
		QImage cvMat2QImage(const cv::Mat& mat);
		QImage img = cvMat2QImage(image);
		ui.inImage_2->clear();
		ui.inImage_2->setPixmap(QPixmap::fromImage(img));
		ui.inImage_2->setScaledContents(true);
		ui.inImage_2->show();
		break;
	}
	case 2:
	{
		image.copyTo(binaryImage);
		threshold(image, binaryImage, 0, 255, CV_THRESH_BINARY | CV_THRESH_OTSU);
		QImage cvMat2QImage(const cv::Mat& mat);
		QImage img = cvMat2QImage(binaryImage);
		ui.inImage_3->setPixmap(QPixmap::fromImage(img));
		ui.inImage_3->setScaledContents(true);
		ui.inImage_3->show();

		//binaryImage = binaryImage / 255;
		break;
	}
	case 3:
	{
		QImage cvMat2QImage(const cv::Mat& mat);
		QImage img = cvMat2QImage(image);
		ui.inImage_4->clear();
		ui.inImage_4->setPixmap(QPixmap::fromImage(img));
		ui.inImage_4->setScaledContents(true);
		ui.inImage_4->show();
		break;
	}
	case 4:
	{
		image.copyTo(binaryImage);
		threshold(image, binaryImage, 0, 255, CV_THRESH_BINARY | CV_THRESH_OTSU);
		QImage cvMat2QImage(const cv::Mat& mat);
		QImage img = cvMat2QImage(binaryImage);
		ui.inImage_5->setPixmap(QPixmap::fromImage(img));
		ui.inImage_5->setScaledContents(true);
		ui.inImage_5->show();
		break;
	}
	default:
		break;
	}
}

//页面切换
void imagProv2::on_actionProject1_triggered()
{

	int index = ui.stackedWidget->indexOf(ui.page);
	ui.stackedWidget->setCurrentIndex(index);
	ui.stackedWidget->setCurrentWidget(ui.page);
}
void imagProv2::on_actionProject2_triggered()
{

	int index = ui.stackedWidget->indexOf(ui.page_2);
	ui.stackedWidget->setCurrentIndex(index);
	ui.stackedWidget->setCurrentWidget(ui.page_2);
}
void imagProv2::on_actionProject3_triggered()
{

	int index = ui.stackedWidget->indexOf(ui.page_3);
	ui.stackedWidget->setCurrentIndex(index);
	ui.stackedWidget->setCurrentWidget(ui.page_3);
}
void imagProv2::on_actionProject4_triggered()
{

	int index = ui.stackedWidget->indexOf(ui.page_4);
	ui.stackedWidget->setCurrentIndex(index);
	ui.stackedWidget->setCurrentWidget(ui.page_4);
}
void imagProv2::on_actionProject5_triggered()
{

	int index = ui.stackedWidget->indexOf(ui.page_5);
	ui.stackedWidget->setCurrentIndex(index);
	ui.stackedWidget->setCurrentWidget(ui.page_5);
}

/*****************************************/
/*----------Project1_Page----------------*/

//计算直方图
void imagProv2::on_hist_clicked()	
{
	const int channels[1] = { 0 };//输入图像通道数
	const int histSize[1] = { 256 };//每个维度的bin数目
	float hranges[2] = { 0, 255 };
	const float* ranges[1] = { hranges };//每个维度的取值范围

	calcHist(&image, 1, channels, Mat(), hist, 1, histSize, ranges, true, false);//计算得到图像的直方图
	
	Mat getHistImg(const MatND& hist, int width, int height); //getHistImg()函数定义
	Mat histImg = getHistImg(hist, ui.outImage->width(), ui.outImage->height());

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(histImg);

	ui.outImage->setPixmap(QPixmap::fromImage(img));
	ui.outImage->setScaledContents(true);
	ui.outImage->show();
}

//Otsu阈值算法
void imagProv2::on_otsu_clicked() 
{
	int k;
	int numPixel;
	numPixel = image.rows * image.cols;
	if (image.empty())
	{
		fprintf(stderr, "Can not open hist image\n");
	}
	int getOtsuThes(const MatND& hist, int numPixel);
	k = getOtsuThes(hist, numPixel);
	Mat thresImg;
	image.copyTo(thresImg);
	threshold(image, thresImg, k, 255, THRESH_BINARY);
	
	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(thresImg);

	ui.outImage_2->setPixmap(QPixmap::fromImage(img));
	ui.outImage_2->setScaledContents(true);
	ui.outImage_2->show();
}

//熵最大算法
void imagProv2::on_entropy_clicked() 
{
	int k;
	int numPixel;
	numPixel = image.rows * image.cols;
	int getEntropyThes(const MatND& hist, int numPixel);
	k = getEntropyThes(hist, numPixel);
	Mat thresImg;
	image.copyTo(thresImg);
	threshold(image, thresImg, k, 255, THRESH_BINARY);

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(thresImg);
	/*QImage img = QImage((const unsigned char*)(thresImg.data), image.cols, image.rows, QImage::Format_Indexed8);
	QVector<QRgb> grayTable;
	for (int i = 0; i < 256; i++)
		grayTable.push_back(qRgb(i, i, i));
	img.setColorTable(grayTable);
	*/

	ui.outImage_3->setPixmap(QPixmap::fromImage(img));
	ui.outImage_3->setScaledContents(true);
	ui.outImage_3->show();
}

//滑动条数字同步显示
void imagProv2::on_spinbox_valueChanged()
{
	int pos;
	pos = ui.spinBox->value();
	ui.spinBox->setValue(pos);
}
void imagProv2::on_thresSlider_valueChanged()
{
	int pos;
	pos = ui.thresSlider->value();
	ui.spinBox->setValue(pos);	
}

//滑动条动态调整阈值
void imagProv2::on_thresSlider_sliderReleased()
{
	Mat thresImg;
	image.copyTo(thresImg);
	int pos = ui.thresSlider->value();
	threshold(image, thresImg, pos, 255, THRESH_BINARY);

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(thresImg);

	ui.outImage_3->clear();
	ui.outImage_3->setPixmap(QPixmap::fromImage(img));
	ui.outImage_3->setScaledContents(true);
	ui.outImage_3->show();
}

/***********************************************/
/*-------------Project_page2-------------------*/

//Robert算子
void imagProv2::on_robButton_clicked()
{
	Mat robImg;
	image.copyTo(robImg);
	for (int i = 0; i < image.rows - 1; i++)
	{
		for (int j = 0; j < image.cols - 1; j++)
		{
			robImg.at<uchar>(i, j) = sqrt((image.at<uchar>(i, j) - image.at<uchar>(i + 1, j + 1))*
				(image.at<uchar>(i, j) - image.at<uchar>(i + 1, j + 1)) + (image.at<uchar>(i, j + 1) - image.at<uchar>(i + 1, j))*
				(image.at<uchar>(i, j + 1) - image.at<uchar>(i + 1, j)));
		}
	}

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(robImg);

	QString str = "Robert Operator";
	ui.convText->setText(str);
	ui.convOutLabel->clear();
	ui.convOutLabel->setPixmap(QPixmap::fromImage(img));
	ui.convOutLabel->setScaledContents(true);
	ui.convOutLabel->show();
}

//Prewitt算子
void imagProv2::on_preButton_clicked()
{
	float prewitx[9] =
	{
		-1,0,1,
		-1,0,1,
		-1,0,1
	};
	float prewity[9] =
	{
		1,1,1,
		0,0,0,
		-1,-1,-1
	};
	Mat px = Mat(3, 3, CV_32F, prewitx);
	Mat py = Mat(3, 3, CV_32F, prewity);
	Mat dstx = Mat(image.size(), image.type(), image.channels());
	Mat dsty = Mat(image.size(), image.type(), image.channels());
	Mat dst = Mat(image.size(), image.type(), image.channels());
	filter2D(image, dstx, image.depth(), px);
	filter2D(image, dsty, image.depth(), py);
	float tempx, tempy, temp;
	for(int i = 0; i < image.rows; i++)
	{
		for (int j = 0; j < image.cols; j++)
		{
			tempx = dstx.at<uchar>(i, j);
			tempy = dsty.at<uchar>(i, j);
			temp = sqrt(tempx*tempx + tempy*tempy);
			dst.at<uchar>(i, j) = temp;
		}
	}

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(dst);

	QString str = "Prewitt Operator";
	ui.convText->setText(str);
	ui.convOutLabel->clear();
	ui.convOutLabel->setPixmap(QPixmap::fromImage(img));
	ui.convOutLabel->setScaledContents(true);
	ui.convOutLabel->show();
}

//Sobel滤波
void imagProv2::on_sobelButton_clicked()
{
	Mat resultImg;
	image.copyTo(resultImg);
	Mat H, V, HV;
	image.copyTo(H);
	image.copyTo(V);
	Sobel(image, H, image.depth(), 0, 1);
	Sobel(image, V, image.depth(), 1, 0);
	for (int i = 0; i < image.rows; i++)
	{
		for (int j = 0; j < image.cols; j++)
		{
			resultImg.at<uchar>(i, j) = sqrt(H.at<uchar>(i, j)*H.at<uchar>(i, j) +
				V.at<uchar>(i, j)*V.at<uchar>(i, j));
		}
	}
	normalize(resultImg, resultImg, 255, 0, CV_MINMAX);

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(resultImg);

	QString str = "Sobel Operator";
	ui.convText->setText(str);
	ui.convOutLabel->clear();
	ui.convOutLabel->setPixmap(QPixmap::fromImage(img));
	ui.convOutLabel->setScaledContents(true);
	ui.convOutLabel->show();
}

//Gauss滤波
void imagProv2::on_gaussButton_clicked()
{
	Mat resultImg;
	image.copyTo(resultImg);
	int n = 3;
	double sigma = 1.0;
	Mat kernel;
	GaussianBlur(image, resultImg, Size(3,3), 0, 0);

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(resultImg);

	QString str = "Gaussian filter";
	ui.convText_2->setText(str);
	ui.gaussOutLabel->clear();
	ui.gaussOutLabel->setPixmap(QPixmap::fromImage(img));
	ui.gaussOutLabel->setScaledContents(true);
	ui.gaussOutLabel->show();

}

//生成卷积核表格
void imagProv2::on_generateTable_clicked()
{
	QString strR = ui.tableR->text();
	int valR = strR.toInt();
	QString strC = ui.tableC->text();
	int valC = strC.toInt();
	int width = 300;
	int cellsize = ceil(width / valR);
	if (cellsize > 50)
		cellsize = 40;
	else if (cellsize < 10)
		cellsize = 10;
	if (valR != valC)
	{
		fprintf(stderr, "The size of the kernel is wrong!\n");
	}
	else if (valR > 30)
	{
		fprintf(stderr, "The size of the kernel exceed of 30!\n");
	}
	else
	{
		ui.optWidget->setRowCount(valR);
		ui.optWidget->setColumnCount(valC);
		ui.optWidget->verticalHeader()->setDefaultSectionSize(cellsize);
		ui.optWidget->horizontalHeader()->setDefaultSectionSize(cellsize);
		ui.optWidget->setFixedSize(width, width);
		for (int j = 0; j < valR; j++)
		{
			for (int i = 0; i < valC; i++)
			{
				ui.optWidget->setItem(i, j, new QTableWidgetItem("1"));//设置表格初始值
			}
		}
	}
}

//中值滤波
void imagProv2::on_medianButton_clicked()
{
	QString strR = ui.tableR->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.tableC->text();
	int valC = strC.toInt();//卷积核Cols
	int tempX, tempY;
	tempX = image.cols + valR - 1;//cols
	tempY = image.rows + valC - 1;//rows
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat result;
	image.copyTo(result);//输出
	int sizeOfKernel = valR * valC;
	Mat roi(temp, Rect((valR - 1)/2, (valC - 1)/2, image.cols, image.rows));
	image.copyTo(roi);
	double maxv = 0;
	int medData;
	int *buf;
	buf = new int[sizeOfKernel];

	//设置零行
	for (int p = 0; p < valR - 1; p++)
	{
		temp.col(p).setTo(Scalar(0));
	}
	for (int q = image.cols + valR - 1; q < tempX; q++)
	{
		temp.col(q).setTo(Scalar(0));
	}
	for (int k = 0; k < valC - 1; k++)
	{
		temp.row(k).setTo(Scalar(0));
	}
	for (int l = image.rows + valC - 1; l < tempY; l++)
	{
		temp.row(l).setTo(Scalar(0));
	}

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0);

	//获得Kernel矩阵
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.optWidget->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i, j) = str.toDouble();
		}
	}
	//卷积操作
	Mat convRe(valR, valC, CV_32F);
	for (int m = 0; m < image.cols; m++)
	{
		for (int n = 0; n < image.rows; n++)
		{
			Mat tempRoi(tempC, Rect(m, n, valR, valC));
			Mat multiMat = tempRoi.mul(kernel);
			for (int i = 0; i < multiMat.rows; i++)
			{
				for (int j = 0; j < multiMat.cols; j++)
				{
					buf[i*multiMat.cols + j] = int(multiMat.ptr<float>(i)[j]);
				}
			}
			qsort(buf, sizeOfKernel, sizeof(buf[0]), cmp);
			medData = buf[int(floor(sizeOfKernel / 2))];
			result.at<uchar>(n, m) = medData;
		}
	}

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	QString str = "Median filter";
	ui.convText_2->setText(str);
	ui.gaussOutLabel->clear();
	ui.gaussOutLabel->setPixmap(QPixmap::fromImage(img));
	ui.gaussOutLabel->setScaledContents(true);
	ui.gaussOutLabel->show();
}

//自定义滤波
void imagProv2::on_filterButton_clicked()
{
	
	QString strR = ui.tableR->text();
	int valR = strR.toInt();
	QString strC = ui.tableC->text();
	int valC = strC.toInt();
	Mat resultImg;
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.optWidget->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i,j) = str.toDouble();;
		}
			
	}
	
	filter2D(image, resultImg, image.depth(), kernel);

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(resultImg);

	ui.normalOutLabel->clear();
	ui.normalOutLabel->setPixmap(QPixmap::fromImage(img));
	ui.normalOutLabel->setScaledContents(true);
	ui.normalOutLabel->show();
	
}

/***********************************************/
/*-------------Project_page3-------------------*/
//Generate Kernel
void imagProv2::on_seButton_clicked()
{
	QString strR = ui.SEtableR->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC->text();
	int valC = strC.toInt();//卷积核Cols
	int width = 320;
	int cellsize = ceil(width / valR);
	if (cellsize > 50)
		cellsize = 40;
	else if (cellsize < 10)
		cellsize = 10;
	if (valR != valC)
	{
		fprintf(stderr, "The size of the kernel is wrong!\n");
	}
	else if (valR > 30)
	{
		fprintf(stderr, "The size of the kernel exceed of 30!\n");
	}
	else
	{
		ui.SEWidget->setRowCount(valR);
		ui.SEWidget->setColumnCount(valC);
		ui.optWidget->verticalHeader()->setDefaultSectionSize(cellsize);
		ui.optWidget->horizontalHeader()->setDefaultSectionSize(cellsize);
		ui.optWidget->setFixedSize(width, width);
		for (int j = 0; j < valR; j++)
		{
			for (int i = 0; i < valC; i++)
			{
				ui.SEWidget->setItem(i, j, new QTableWidgetItem("1"));//设置表格初始值
			}
		}
	}


}

//Dilate Operation
void imagProv2::on_bwDilate_clicked()
{
	QString strR = ui.SEtableR->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC->text();
	int valC = strC.toInt();//卷积核Cols
	QString strX = ui.anchorX->text();
	int valX = strX.toInt();//锚点X坐标
	QString strY = ui.anchorY->text();
	int valY = strY.toInt();//锚点Y坐标
	int tempX, tempY;
	tempX = binaryImage.cols + valR - 1;//cols
	tempY = binaryImage.rows + valC - 1;//rows
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat result;
	binaryImage.copyTo(result);//输出
	double sum; //卷积和
	double sizeOfKernel = valR * valC;
	Mat roi(temp, Rect(valX - 1, valY - 1, binaryImage.cols, binaryImage.rows));
	binaryImage.copyTo(roi);

	//设置零行
	for (int p = 0; p < valX - 1; p++)
	{
		temp.col(p).setTo(Scalar(0));
	}
	for (int q = binaryImage.cols + valX - 1; q < tempX; q++)
	{
		temp.col(q).setTo(Scalar(0));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		temp.row(k).setTo(Scalar(0));
	}
	for (int l = binaryImage.rows + valY - 1; l < tempY; l++)
	{
		temp.row(l).setTo(Scalar(0));
	}

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0 / 255);

	//获得Kernel矩阵
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.SEWidget->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i, j) = str.toDouble();
		}

	}

	//卷积操作
	for (int m = 0; m < binaryImage.cols; m++)
	{
		for (int n = 0; n < binaryImage.rows; n++)
		{
			Mat tempRoi(tempC, Rect(m, n, valR, valC));
			sum = tempRoi.dot(kernel);
			if (sum == 0)
				result.at<uchar>(n, m) = 0;
			else
				result.at<uchar>(n, m) = 1;
		}
	}
	result = result * 255;

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.biOpOut->clear();
	ui.biOpOut->setPixmap(QPixmap::fromImage(img));
	ui.biOpOut->setScaledContents(true);
	ui.biOpOut->show();
}

//Erode Operation
void imagProv2::on_bwErode_clicked()
{
	QString strR = ui.SEtableR->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC->text();
	int valC = strC.toInt();//卷积核Cols
	QString strX = ui.anchorX->text();
	int valX = strX.toInt();//锚点X坐标
	QString strY = ui.anchorY->text();
	int valY = strY.toInt();//锚点Y坐标
	int tempX, tempY;
	tempX = binaryImage.cols + valR - 1;//cols
	tempY = binaryImage.rows + valC - 1;//rows
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat result;
	Mat convOut = Mat(valR, valC, CV_32F);
	Mat oneMat = Mat::ones(valR, valC, CV_32F);
	binaryImage.copyTo(result);//输出
	//double sizeOfKernel = valR * valC;
	Mat roi(temp, Rect(valX - 1, valY - 1, binaryImage.cols, binaryImage.rows));
	binaryImage.copyTo(roi);

	//设置零行
	for (int p = 0; p < valX - 1; p++)
	{
		temp.col(p).setTo(Scalar(0));
	}
	for (int q = binaryImage.cols + valX - 1; q < tempX; q++)
	{
		temp.col(q).setTo(Scalar(0));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		temp.row(k).setTo(Scalar(0));
	}
	for (int l = binaryImage.rows + valY - 1; l < tempY; l++)
	{
		temp.row(l).setTo(Scalar(0));
	}

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0 / 255);

	//获得Kernel矩阵
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.SEWidget->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i, j) = str.toDouble();
		}

	}

	//卷积操作
	for (int m = 0; m < binaryImage.cols; m++)
	{
		for (int n = 0; n < binaryImage.rows; n++)
		{
			Mat tempRoi(tempC, Rect(m, n, valR, valC));
			if (tempRoi.dot(kernel) == kernel.dot(oneMat))
				result.at<uchar>(n, m) = 1;
			else
				result.at<uchar>(n, m) = 0;
		}
	}
	result = result * 255;

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.biOpOut->clear();
	ui.biOpOut->setPixmap(QPixmap::fromImage(img));
	ui.biOpOut->setScaledContents(true);
	ui.biOpOut->show();
}

//Open Operation
void imagProv2::on_bwOpen_clicked()
{
	QString strR = ui.SEtableR->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC->text();
	int valC = strC.toInt();//卷积核Cols
	QString strX = ui.anchorX->text();
	int valX = strX.toInt();//锚点X坐标
	QString strY = ui.anchorY->text();
	int valY = strY.toInt();//锚点Y坐标
	int tempX, tempY;
	tempX = binaryImage.cols + valR - 1;//cols
	tempY = binaryImage.rows + valC - 1;//rows
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat oneMat = Mat::ones(valR, valC, CV_32F);
	Mat result;
	binaryImage.copyTo(result);//Open输出
	double sumKernel; //卷积和
	double sizeOfKernel = valR * valC;

	
	Mat roi(temp, Rect(valX - 1, valY - 1, binaryImage.cols, binaryImage.rows));
	binaryImage.copyTo(roi);
	

	//设置零行
	for (int p = 0; p < valX - 1; p++)
	{
		temp.col(p).setTo(Scalar(0));
	}
	for (int q = binaryImage.cols + valX - 1; q < tempX; q++)
	{
		temp.col(q).setTo(Scalar(0));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		temp.row(k).setTo(Scalar(0));
	}
	for (int l = binaryImage.rows + valY - 1; l < tempY; l++)
	{
		temp.row(l).setTo(Scalar(0));
	}

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0 / 255);

	

	//获得Kernel矩阵
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.SEWidget->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i, j) = str.toDouble();
		}

	}
	Mat resultTemp;
	tempC.copyTo(resultTemp);//中间输出
	Mat roiTemp(resultTemp, Rect(valX - 1, valY - 1, binaryImage.cols, binaryImage.rows));
	binaryImage.copyTo(roiTemp);

	//腐蚀操作
	for (int m = 0; m < binaryImage.cols; m++)
	{
		for (int n = 0; n < binaryImage.rows; n++)
		{
			Mat tempRoi(tempC, Rect(m, n, valR, valC));
			if (tempRoi.dot(kernel) == kernel.dot(oneMat))
				roiTemp.at<uchar>(n, m) = 1;
			else
				roiTemp.at<uchar>(n, m) = 0;
			
		}
	}
	//膨胀操作
	for (int m = 0; m < binaryImage.cols; m++)
	{
		for (int n = 0; n < binaryImage.rows; n++)
		{
			Mat tempRoi(resultTemp, Rect(m, n, valR, valC));
			sumKernel = tempRoi.dot(kernel);
			if (sumKernel == 0)
				result.at<uchar>(n, m) = 0;
			else
				result.at<uchar>(n, m) = 1;
		}
	}

	result = result * 255;

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.biOpOut->clear();
	ui.biOpOut->setPixmap(QPixmap::fromImage(img));
	ui.biOpOut->setScaledContents(true);
	ui.biOpOut->show();
}

//Close Operation
void imagProv2::on_bwClose_clicked()
{
	QString strR = ui.SEtableR->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC->text();
	int valC = strC.toInt();//卷积核Cols
	QString strX = ui.anchorX->text();
	int valX = strX.toInt();//锚点X坐标
	QString strY = ui.anchorY->text();
	int valY = strY.toInt();//锚点Y坐标
	int tempX, tempY;
	tempX = binaryImage.cols + valR - 1;//cols
	tempY = binaryImage.rows + valC - 1;//rows
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat oneMat = Mat::ones(valR, valC, CV_32F);
	Mat result;
	binaryImage.copyTo(result);//Open输出
	double sumKernel; //卷积和
	double sizeOfKernel = valR * valC;


	Mat roi(temp, Rect(valX - 1, valY - 1, binaryImage.cols, binaryImage.rows));
	binaryImage.copyTo(roi);


	//设置零行
	for (int p = 0; p < valX - 1; p++)
	{
		temp.col(p).setTo(Scalar(0));
	}
	for (int q = binaryImage.cols + valX - 1; q < tempX; q++)
	{
		temp.col(q).setTo(Scalar(0));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		temp.row(k).setTo(Scalar(0));
	}
	for (int l = binaryImage.rows + valY - 1; l < tempY; l++)
	{
		temp.row(l).setTo(Scalar(0));
	}

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0 / 255);



	//获得Kernel矩阵
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.SEWidget->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i, j) = str.toDouble();
		}

	}
	Mat resultTemp;
	tempC.copyTo(resultTemp);//中间输出
	Mat roiTemp(resultTemp, Rect(valX - 1, valY - 1, binaryImage.cols, binaryImage.rows));
	binaryImage.copyTo(roiTemp);

	//膨胀操作
	for (int m = 0; m < binaryImage.cols; m++)
	{
		for (int n = 0; n < binaryImage.rows; n++)
		{
			Mat tempRoi(tempC, Rect(m, n, valR, valC));
			sumKernel = tempRoi.dot(kernel);
			if (sumKernel == 0)
				roiTemp.at<uchar>(n, m) = 0;
			else
				roiTemp.at<uchar>(n, m) = 1;

		}
	}
	//腐蚀操作
	for (int m = 0; m < binaryImage.cols; m++)
	{
		for (int n = 0; n < binaryImage.rows; n++)
		{
			Mat tempRoi(resultTemp, Rect(m, n, valR, valC));
			if (tempRoi.dot(kernel) == kernel.dot(oneMat))
				result.at<uchar>(n, m) = 1;
			else
				result.at<uchar>(n, m) = 0;
		}
	}

	result = result * 255;

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.biOpOut->clear();
	ui.biOpOut->setPixmap(QPixmap::fromImage(img));
	ui.biOpOut->setScaledContents(true);
	ui.biOpOut->show();
}

//Distance Transform
void imagProv2::on_DSButton_clicked()
{
	int tempX, tempY;
	tempX = binaryImage.cols + 2;//cols
	tempY = binaryImage.rows + 2;//rows
	int numOferode = 1;
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat result = Mat::zeros(binaryImage.size(), CV_8U);;
	Mat convOut = Mat(3, 3, CV_32F);
	Mat oneMat = Mat::ones(3, 3, CV_32F);
	Mat erodeTemp = Mat::zeros(binaryImage.size(), CV_8U);
	double minv = 0, maxv = 255;
	double* minp = &minv;
	double* maxp = &maxv;
	Mat lastErode(temp, Rect(1, 1, binaryImage.cols, binaryImage.rows));
	binaryImage.copyTo(lastErode);
	lastErode = lastErode / 255;

	//设置零行

	temp.col(0).setTo(Scalar(0));
	temp.col(binaryImage.cols + 1).setTo(Scalar(0));
	temp.row(0).setTo(Scalar(0));
	temp.row(binaryImage.rows + 1).setTo(Scalar(0));
	

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0);

	//获得Kernel矩阵
	Mat kernel = Mat::ones(3, 3, CV_32F);

	//卷积操作
	bool done;
	do
	{
		//腐蚀操作
		for (int m = 0; m < binaryImage.cols; m++)
		{
			for (int n = 0; n < binaryImage.rows; n++)
			{
				Mat tempRoi(tempC, Rect(m, n, 3, 3));
				if (tempRoi.dot(kernel) == kernel.dot(oneMat))
					erodeTemp.at<uchar>(n, m) = 1;
				else
					erodeTemp.at<uchar>(n, m) = 0;
				if (erodeTemp.at<uchar>(n, m) != lastErode.at<uchar>(n, m))
					result.at<uchar>(n, m) = numOferode;

			}
		}
		erodeTemp.copyTo(lastErode);
		temp.convertTo(tempC, CV_32F, 1.0);
		numOferode += 1;
		done = (countNonZero(erodeTemp) == 0);
	} while (!done);
	
	//输出显示调整
	minMaxIdx(result, minp, maxp);
	for (int y = 0; y < binaryImage.cols; y++)
	{
		for (int x = 0; x < binaryImage.rows; x++)
		{
			if (result.at<uchar>(x, y) != 0)

				result.at<uchar>(x, y) = (result.at<uchar>(x, y) - minv) / (maxv - minv) * 255;
				//result.at<uchar>(x, y) = result.at<uchar>(x, y) + 256 - numOferode;
		}
	}

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.DSOut->clear();
	ui.DSOut->setPixmap(QPixmap::fromImage(img));
	ui.DSOut->setScaledContents(true);
	ui.DSOut->show();
}

//Morphological skeleton
void imagProv2::on_skeleButton_clicked()
{
	Mat tempImg;
	binaryImage.copyTo(tempImg);
	Mat skel(binaryImage.size(), CV_8UC1, cv::Scalar(0));
	Mat labelTemp(binaryImage.size(), CV_8UC1, cv::Scalar(0));
	Mat eroded, temp;
	Mat element = getStructuringElement(MORPH_CROSS, Size(3, 3));
	Mat tempComp;
	numOfErode = 0;
	bool done;
	do
	{
		erode(tempImg, eroded, element);
		dilate(eroded, temp, element);
		subtract(tempImg, temp, temp);
		bitwise_or(skel, temp, skel);
		compare(eroded, tempImg, tempComp, CMP_NE);
		for (int y = 0; y < tempImg.cols; y++)
		{
			for (int x = 0; x < tempImg.rows; x++)
			{
				if (tempComp.at<uchar>(x, y) == 255)
					labelTemp.at<uchar>(x, y) = numOfErode + 1;
			}
		}
		eroded.copyTo(tempImg);
		numOfErode += 1;
		done = (countNonZero(tempImg) == 0);
	} while (!done);
	labelTemp.copyTo(labelMat);

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(skel);

	ui.skeleOut->clear();
	ui.skeleOut->setPixmap(QPixmap::fromImage(img));
	ui.skeleOut->setScaledContents(true);
	ui.skeleOut->show();

}

//Morphological skeleton restoration
void imagProv2::on_skeleRestorButton_clicked()
{
	Mat result(binaryImage.size(), CV_8UC1, cv::Scalar(0));
	Mat labelSel(binaryImage.size(), CV_8UC1, cv::Scalar(0));
	Mat partResult;
	while(numOfErode)
	{
		labelSel.setTo(Scalar(0));
		for (int y = 0; y < labelMat.cols; y++)
		{
			for (int x = 0; x < labelMat.rows; x++)
			{
				if (labelMat.at<uchar>(x, y) == numOfErode)
					labelSel.at<uchar>(x, y) = 255;
			}
		}
		Mat element = getStructuringElement(MORPH_CROSS, Size(numOfErode, numOfErode));
		dilate(labelSel, partResult, element);
		for (int y = 0; y < labelMat.cols; y++)
		{
			for (int x = 0; x < labelMat.rows; x++)
			{
				if (partResult.at<uchar>(x, y) == 255)
					result.at<uchar>(x, y) = 255;
			}
		}
		numOfErode -= 1;
	}

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.skeleOut->clear();
	ui.skeleOut->setPixmap(QPixmap::fromImage(img));
	ui.skeleOut->setScaledContents(true);
	ui.skeleOut->show();
	

}



/***********************************************/
/*-------------Project_page4-------------------*/  
//生成结构算子SE
void imagProv2::on_seButton_2_clicked()
{
	QString strR = ui.SEtableR_2->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC_2->text();
	int valC = strC.toInt();//卷积核Cols
	int width = 400;
	int cellsize = ceil(width / valR);
	if (cellsize > 50)
		cellsize = 40;
	else if (cellsize < 10)
		cellsize = 10;
	if (valR != valC)
	{
		fprintf(stderr, "The size of the kernel is wrong!\n");
	}
	else if (valR > 30)
	{
		fprintf(stderr, "The size of the kernel exceed of 30!\n");
	}
	else
	{
		ui.SEWidget_2->setRowCount(valR);
		ui.SEWidget_2->setColumnCount(valC);
		ui.optWidget->verticalHeader()->setDefaultSectionSize(cellsize);
		ui.optWidget->horizontalHeader()->setDefaultSectionSize(cellsize);
		ui.optWidget->setFixedSize(width, width);
		for (int j = 0; j < valR; j++)
		{
			for (int i = 0; i < valC; i++)
			{
				ui.SEWidget_2->setItem(i, j, new QTableWidgetItem("1"));//设置表格初始值
			}
		}
	}
}

//灰度图膨胀
void imagProv2::on_grayDilate_clicked()
{
	QString strR = ui.SEtableR_2->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC_2->text();
	int valC = strC.toInt();//卷积核Cols
	QString strX = ui.anchorX_2->text();
	int valX = strX.toInt();//锚点X坐标
	QString strY = ui.anchorY_2->text();
	int valY = strY.toInt();//锚点Y坐标
	int tempX, tempY;
	tempX = image.cols + valR - 1;//cols
	tempY = image.rows + valC - 1;//rows
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat result;
	image.copyTo(result);//输出
	double sum; //卷积和
	double sizeOfKernel = valR * valC;
	Mat roi(temp, Rect(valX - 1, valY - 1, image.cols, image.rows));
	image.copyTo(roi);
	double maxv = 0;
	//double* minp;
	//double* maxp;

	//设置零行
	for (int p = 0; p < valX - 1; p++)
	{
		temp.col(p).setTo(Scalar(0));
	}
	for (int q = image.cols + valX - 1; q < tempX; q++)
	{
		temp.col(q).setTo(Scalar(0));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		temp.row(k).setTo(Scalar(0));
	}
	for (int l = image.rows + valY - 1; l < tempY; l++)
	{
		temp.row(l).setTo(Scalar(0));
	}

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0);

	//获得Kernel矩阵
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.SEWidget_2->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i, j) = str.toDouble();
		}

	}

	//卷积操作
	Mat convRe(valR, valC, CV_32F);
	for (int m = 0; m < image.cols; m++)
	{
		for (int n = 0; n < image.rows; n++)
		{
			Mat tempRoi(tempC, Rect(m, n, valR, valC));
			convRe = tempRoi + kernel;
			//add(tempRoi, kernel, convRe);
			for (int i = 0; i < valR; i++)
			{
				for (int j = 0; j < valC; j++)
				{
					if (convRe.at<float>(i, j) > maxv)
						maxv = convRe.at<float>(i, j);
				}
			}
			//minMaxIdx(convRe, minp, maxp);
			result.at<uchar>(n, m) = maxv;
			maxv = 0;
		}
	}

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.grayOpOut->clear();
	ui.grayOpOut->setPixmap(QPixmap::fromImage(img));
	ui.grayOpOut->setScaledContents(true);
	ui.grayOpOut->show();
}

//灰度图腐蚀
void imagProv2::on_grayErode_clicked()
{
	QString strR = ui.SEtableR_2->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC_2->text();
	int valC = strC.toInt();//卷积核Cols
	QString strX = ui.anchorX_2->text();
	int valX = strX.toInt();//锚点X坐标
	QString strY = ui.anchorY_2->text();
	int valY = strY.toInt();//锚点Y坐标
	int tempX, tempY;
	tempX = image.cols + valR - 1;//cols
	tempY = image.rows + valC - 1;//rows
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat result;
	image.copyTo(result);//输出
	double sum; //卷积和
	double sizeOfKernel = valR * valC;
	Mat roi(temp, Rect(valX - 1, valY - 1, image.cols, image.rows));
	image.copyTo(roi);
	double minv = 255;
	//double* minp;
	//double* maxp;

	//设置零行
	for (int p = 0; p < valX - 1; p++)
	{
		temp.col(p).setTo(Scalar(255));
	}
	for (int q = image.cols + valX - 1; q < tempX; q++)
	{
		temp.col(q).setTo(Scalar(255));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		temp.row(k).setTo(Scalar(255));
	}
	for (int l = image.rows + valY - 1; l < tempY; l++)
	{
		temp.row(l).setTo(Scalar(255));
	}

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0);

	//获得Kernel矩阵
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.SEWidget_2->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i, j) = str.toDouble();
		}

	}

	//卷积操作
	Mat convRe(valR, valC, CV_32F);
	for (int m = 0; m < image.cols; m++)
	{
		for (int n = 0; n < image.rows; n++)
		{
			Mat tempRoi(tempC, Rect(m, n, valR, valC));
			convRe = tempRoi - kernel;
			//add(tempRoi, kernel, convRe);
			for (int i = 0; i < valR; i++)
			{
				for (int j = 0; j < valC; j++)
				{
					if (convRe.at<float>(i, j) < minv)
						minv = convRe.at<float>(i, j);
				}
			}
			//minMaxIdx(convRe, minp, maxp);
			result.at<uchar>(n, m) = minv;
			minv = 255;
		}
	}

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.grayOpOut->clear();
	ui.grayOpOut->setPixmap(QPixmap::fromImage(img));
	ui.grayOpOut->setScaledContents(true);
	ui.grayOpOut->show();
}

//灰度图开操作
void imagProv2::on_grayOpen_clicked()
{
	QString strR = ui.SEtableR_2->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC_2->text();
	int valC = strC.toInt();//卷积核Cols
	QString strX = ui.anchorX_2->text();
	int valX = strX.toInt();//锚点X坐标
	QString strY = ui.anchorY_2->text();
	int valY = strY.toInt();//锚点Y坐标
	int tempX, tempY;
	tempX = image.cols + valR - 1;//cols
	tempY = image.rows + valC - 1;//rows
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat result;
	image.copyTo(result);//输出
	double sum; //卷积和
	double sizeOfKernel = valR * valC;
	Mat roi(temp, Rect(valX - 1, valY - 1, image.cols, image.rows));
	image.copyTo(roi);
	double minv = 255, maxv = 0;
	//double* minp;
	//double* maxp;

	//设置原图扩展边界
	for (int p = 0; p < valX - 1; p++)
	{
		temp.col(p).setTo(Scalar(255));
	}
	for (int q = image.cols + valX - 1; q < tempX; q++)
	{
		temp.col(q).setTo(Scalar(255));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		temp.row(k).setTo(Scalar(255));
	}
	for (int l = image.rows + valY - 1; l < tempY; l++)
	{
		temp.row(l).setTo(Scalar(255));
	}

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0);

	//获得Kernel矩阵
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.SEWidget_2->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i, j) = str.toDouble();
		}

	}

	Mat erodeTemp;
	tempC.copyTo(erodeTemp);//中间输出
	Mat roiTemp(erodeTemp, Rect(valX - 1, valY - 1, image.cols, image.rows));
	//Mat roiTemp = erodeTemp(Rect(valX - 1, valY - 1, binaryImage.cols, binaryImage.rows));


	//腐蚀操作
	Mat convRe(valR, valC, CV_32F);
	for (int m = 0; m < image.cols; m++)
	{
		for (int n = 0; n < image.rows; n++)
		{
			Mat tempRoi(tempC, Rect(m, n, valR, valC));
			convRe = tempRoi - kernel;
			//add(tempRoi, kernel, convRe);
			for (int i = 0; i < valR; i++)
			{
				for (int j = 0; j < valC; j++)
				{
					if (convRe.at<float>(i, j) < minv)
						minv = convRe.at<float>(i, j);
				}
			}
			//if (minv = 255.0)
			//	minv = 0.0;
			//minMaxIdx(convRe, minp, maxp);
			roiTemp.at<float>(n, m) = minv;
			minv = 255.0;
		}
	}

	//设置腐蚀后图片的扩展边界
	for (int p = 0; p < valX - 1; p++)
	{
		erodeTemp.col(p).setTo(Scalar(0.0));
	}
	for (int q = image.cols + valX - 1; q < tempX; q++)
	{
		erodeTemp.col(q).setTo(Scalar(0.0));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		erodeTemp.row(k).setTo(Scalar(0.0));
	}
	for (int l = image.rows + valY - 1; l < tempY; l++)
	{
		erodeTemp.row(l).setTo(Scalar(0.0));
	}

	//膨胀操作
	for (int m = 0; m < image.cols; m++)
	{
		for (int n = 0; n < image.rows; n++)
		{
			Mat tempRoi(erodeTemp, Rect(m, n, valR, valC));
			convRe = tempRoi + kernel;
			//add(tempRoi, kernel, convRe);
			for (int i = 0; i < valR; i++)
			{
				for (int j = 0; j < valC; j++)
				{
					if (convRe.at<float>(i, j) > maxv)
						maxv = convRe.at<float>(i, j);
				}
			}
			//minMaxIdx(convRe, minp, maxp);
			result.at<uchar>(n, m) = maxv;
			maxv = 0;
		}
	}

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.grayOpenShow->clear();
	ui.grayOpenShow->setPixmap(QPixmap::fromImage(img));
	ui.grayOpenShow->setScaledContents(true);
	ui.grayOpenShow->show();
}

//灰度图闭操作
void imagProv2::on_grayClose_clicked()
{
	QString strR = ui.SEtableR_2->text();
	int valR = strR.toInt();//卷积核Rows
	QString strC = ui.SEtableC_2->text();
	int valC = strC.toInt();//卷积核Cols
	QString strX = ui.anchorX_2->text();
	int valX = strX.toInt();//锚点X坐标
	QString strY = ui.anchorY_2->text();
	int valY = strY.toInt();//锚点Y坐标
	int tempX, tempY;
	tempX = image.cols + valR - 1;//cols
	tempY = image.rows + valC - 1;//rows
	Mat temp = Mat(tempY, tempX, CV_8U);
	Mat result;
	image.copyTo(result);//输出
	double sum; //卷积和
	double sizeOfKernel = valR * valC;
	Mat roi(temp, Rect(valX - 1, valY - 1, image.cols, image.rows));
	image.copyTo(roi);
	double minv = 255, maxv = 0;
	//double* minp;
	//double* maxp;

	//设置原图扩展边界
	for (int p = 0; p < valX - 1; p++)
	{
		temp.col(p).setTo(Scalar(0));
	}
	for (int q = image.cols + valX - 1; q < tempX; q++)
	{
		temp.col(q).setTo(Scalar(0));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		temp.row(k).setTo(Scalar(0));
	}
	for (int l = image.rows + valY - 1; l < tempY; l++)
	{
		temp.row(l).setTo(Scalar(0));
	}

	Mat tempC;
	temp.convertTo(tempC, CV_32F, 1.0);

	//获得Kernel矩阵
	Mat kernel = Mat(valR, valC, CV_32F);
	for (int i = 0; i < valR; i++)
	{
		for (int j = 0; j < valC; j++)
		{
			QString str = ui.SEWidget_2->item(i, j)->text();//取出字符串
			if (str.isEmpty())
			{
				fprintf(stderr, "Kernel is wrong!\n");
				break;
			}
			//double num = str.toDouble();//转成int
			kernel.at<float>(i, j) = str.toDouble();
		}

	}

	Mat dilateTemp;
	tempC.copyTo(dilateTemp);//中间输出
	Mat roiTemp(dilateTemp, Rect(valX - 1, valY - 1, image.cols, image.rows));

	//膨胀操作
	Mat convRe(valR, valC, CV_32F);
	for (int m = 0; m < image.cols; m++)
	{
		for (int n = 0; n < image.rows; n++)
		{
			Mat tempRoi(tempC, Rect(m, n, valR, valC));
			convRe = tempRoi + kernel;
			//add(tempRoi, kernel, convRe);
			for (int i = 0; i < valR; i++)
			{
				for (int j = 0; j < valC; j++)
				{
					if (convRe.at<float>(i, j) > maxv)
						maxv = convRe.at<float>(i, j);
				}
			}
			//minMaxIdx(convRe, minp, maxp);
			roiTemp.at<float>(n, m) = maxv;
			maxv = 0;

		}
	}

	//设置腐蚀后图片的扩展边界
	for (int p = 0; p < valX - 1; p++)
	{
		dilateTemp.col(p).setTo(Scalar(255.0));
	}
	for (int q = image.cols + valX - 1; q < tempX; q++)
	{
		dilateTemp.col(q).setTo(Scalar(255.0));
	}
	for (int k = 0; k < valY - 1; k++)
	{
		dilateTemp.row(k).setTo(Scalar(255.0));
	}
	for (int l = image.rows + valY - 1; l < tempY; l++)
	{
		dilateTemp.row(l).setTo(Scalar(255.0));
	}

	//腐蚀操作
	for (int m = 0; m < image.cols; m++)
	{
		for (int n = 0; n < image.rows; n++)
		{
			Mat tempRoi(dilateTemp, Rect(m, n, valR, valC));
			convRe = tempRoi - kernel;
			//add(tempRoi, kernel, convRe);
			for (int i = 0; i < valR; i++)
			{
				for (int j = 0; j < valC; j++)
				{
					if (convRe.at<float>(i, j) < minv)
						minv = convRe.at<float>(i, j);
				}
			}
			//minMaxIdx(convRe, minp, maxp);
			result.at<uchar>(n, m) = minv;
			minv = 255;
		}
	}

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.grayCloseShow->clear();
	ui.grayCloseShow->setPixmap(QPixmap::fromImage(img));
	ui.grayCloseShow->setScaledContents(true);
	ui.grayCloseShow->show();
}


/***********************************************/
/*-------------Project_page5-------------------*/
//形态学边缘检测
void imagProv2::on_edgeDetectButton_clicked()
{
	Mat eroded, dilated, temp;
	binaryImage.copyTo(temp);
	Mat result(binaryImage.size(), CV_8UC1, cv::Scalar(0));
	Mat element = getStructuringElement(MORPH_ELLIPSE, Size(3, 3));
	erode(temp, eroded, element);
	dilate(temp, dilated, element);
	subtract(dilated, eroded, result);


	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.EDShow->clear();
	ui.EDShow->setPixmap(QPixmap::fromImage(img));
	ui.EDShow->setScaledContents(true);
	ui.EDShow->show();

}

//形态学梯度
void imagProv2::on_gradientButton_clicked()
{
	Mat eroded, dilated, temp;
	image.copyTo(temp);
	Mat result(image.size(), CV_8UC1, cv::Scalar(0));
	Mat element = getStructuringElement(MORPH_ELLIPSE, Size(3, 3));
	erode(temp, eroded, element);
	dilate(temp, dilated, element);
	//subtract(dilated, eroded, result);
	result = 0.5 * (dilated - eroded);

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img0 = cvMat2QImage(image);
	ui.inImage_5->clear();
	ui.inImage_5->setPixmap(QPixmap::fromImage(img0));
	ui.inImage_5->setScaledContents(true);
	ui.inImage_5->show();

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(result);

	ui.gradientShow->clear();
	ui.gradientShow->setPixmap(QPixmap::fromImage(img));
	ui.gradientShow->setScaledContents(true);
	ui.gradientShow->show();


}

//Conditional Dilation
void imagProv2::on_conDilationButton_clicked()
{
	Mat marker, mask, temp, temp0, T;
	binaryImage.copyTo(mask);
	Mat element = getStructuringElement(MORPH_ELLIPSE, Size(3, 3));
	Mat element2 = getStructuringElement(MORPH_RECT, Size(3, 3));
	//开操作
	erode(mask, temp, element);
	dilate(temp, marker, element);
	bool done;
	do
	{
	marker.copyTo(T);
	dilate(marker, marker, element);

	int c = binaryImage.cols;
	int r = binaryImage.rows;

	for (int y = 0; y < c; y++)
	{
		for (int x = 0; x < r; x++)
		{
			if (marker.at<uchar>(x, y) != mask.at<uchar>(x, y))
				marker.at<uchar>(x, y) = 0;
		}
	}
	compare(marker, T, temp0, CMP_NE);
	done = (countNonZero(temp0) == 0);
	} while (!done);

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(T);

	ui.reconstructionShow->clear();
	ui.reconstructionShow->setPixmap(QPixmap::fromImage(img));
	ui.reconstructionShow->setScaledContents(true);
	ui.reconstructionShow->show();
}

//灰度图重建
void imagProv2::on_reconstructionButton_clicked()  
{
	Mat marker, mask, temp, temp0, T;
	image.copyTo(mask);
	Mat element = getStructuringElement(MORPH_ELLIPSE, Size(3, 3));
	Mat element2 = getStructuringElement(MORPH_RECT, Size(3, 3));
	//开操作
	erode(mask, temp, element);
	dilate(temp, marker, element);
	bool done;
	do
	{
		marker.copyTo(T);
		dilate(marker, marker, element);

		int c = image.cols;
		int r = image.rows;

		for (int y = 0; y < c; y++)
		{
			for (int x = 0; x < r; x++)
			{
				if (marker.at<uchar>(x, y) > mask.at<uchar>(x, y))
					marker.at<uchar>(x, y) = mask.at<uchar>(x, y);
			}
		}
		compare(marker, T, temp0, CMP_NE);
		done = (countNonZero(temp0) == 0);
	} while (!done);

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img0 = cvMat2QImage(image);
	ui.inImage_5->clear();
	ui.inImage_5->setPixmap(QPixmap::fromImage(img0));
	ui.inImage_5->setScaledContents(true);
	ui.inImage_5->show();

	QImage cvMat2QImage(const cv::Mat& mat);
	QImage img = cvMat2QImage(T);
	ui.reconstructionShow->clear();
	ui.reconstructionShow->setPixmap(QPixmap::fromImage(img));
	ui.reconstructionShow->setScaledContents(true);
	ui.reconstructionShow->show();


}

/************************************************/
/*------------------图像处理函数----------------*/
/************************************************/

//图像转换函数
QImage cvMat2QImage(const cv::Mat& mat)
{
	// 8-bits unsigned, NO. OF CHANNELS = 1  
	if (mat.type() == CV_8UC1)
	{
		QImage image(mat.cols, mat.rows, QImage::Format_Indexed8);
		// Set the color table (used to translate colour indexes to qRgb values)  
		image.setColorCount(256);
		for (int i = 0; i < 256; i++)
		{
			image.setColor(i, qRgb(i, i, i));
		}
		// Copy input Mat  
		uchar *pSrc = mat.data;
		for (int row = 0; row < mat.rows; row++)
		{
			uchar *pDest = image.scanLine(row);
			memcpy(pDest, pSrc, mat.cols);
			pSrc += mat.step;
		}
		return image;
	}
	// 8-bits unsigned, NO. OF CHANNELS = 3  
	else if (mat.type() == CV_8UC3)
	{
		// Copy input Mat  
		const uchar *pSrc = (const uchar*)mat.data;
		// Create QImage with same dimensions as input Mat  
		QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
		return image.rgbSwapped();
	}
	else if (mat.type() == CV_8UC4)
	{
		qDebug() << "CV_8UC4";
		// Copy input Mat  
		const uchar *pSrc = (const uchar*)mat.data;
		// Create QImage with same dimensions as input Mat  
		QImage image(pSrc, mat.cols, mat.rows, mat.step, QImage::Format_ARGB32);
		return image.copy();
	}
	else
	{
		qDebug() << "ERROR: Mat could not be converted to QImage.";
		return QImage();
	}
}

cv::Mat QImage2Mat(QImage image)
{
	cv::Mat mat;
	qDebug() << image.format();
	switch (image.format())
	{
	case QImage::Format_ARGB32:
	case QImage::Format_RGB32:
	case QImage::Format_ARGB32_Premultiplied:
		mat = cv::Mat(image.height(), image.width(), CV_8UC4, (void*)image.constBits(), image.bytesPerLine());
		break;
	case QImage::Format_RGB888:
		mat = cv::Mat(image.height(), image.width(), CV_8UC3, (void*)image.constBits(), image.bytesPerLine());
		cv::cvtColor(mat, mat, CV_BGR2RGB);
		break;
	case QImage::Format_Indexed8:
		mat = cv::Mat(image.height(), image.width(), CV_8UC1, (void*)image.constBits(), image.bytesPerLine());
		break;
	}
	return mat;
}

//直方图显示函数
Mat getHistImg(const MatND& hist,int width,int height)
{
	double maxVal = 0;
	double minVal = 0;

	//找到直方图中的最大值和最小值
	minMaxLoc(hist, &minVal, &maxVal, 0, 0);
	int histSize = hist.rows;
	int scale = 2;
	Mat histImg = Mat::zeros(height, histSize* scale, CV_8U);

	//设置最大峰值为图像高度的90%
	int hpt = static_cast<int>(0.9* height);

	for (int h = 0; h < histSize; h++)
	{
		float binVal = hist.at<float>(h);
		int intensity = static_cast<int>(binVal*hpt/maxVal);
		//line(histImg, Point(h, height), Point(h, height - intensity), Scalar::all(0));
		rectangle(histImg, Point(h*scale, height), Point((h + 1)*scale - 1, height - intensity), Scalar(255));
	}

	return histImg;
}

//Otsu阈值函数
int getOtsuThes(const MatND& hist, int numPixel)
{
	int thres = 0;
	double sum = 0;
	double pOfHist[256];
	double w0, w1, u0, u1, ut, uT, u, sigmaB, sigmaMax;
	int  rows = hist.rows;
	//直方图归一化
	for (int i = 0; i < rows; i++)
	{
		//const double* Mi = tempHist.ptr<double>(i);
		//for (int j = 0; j < cols; j++)
		//{
		//tempHist.at<float>(i,j) = Mi[j] / numPixel;
		pOfHist[i] = hist.at<float>(i, 0) / numPixel;
		sum += pOfHist[i];
		//cout << pOfHist[i] << "||" << hist.at<float>(i, 0) << endl;
		//}
	}
	sigmaB = sigmaMax = 0;

	for (int j = 0; j < 256; j++)
	{
		w0 = w1 = u0 = u1 = ut = uT = u = 0;
		for (int k = 0; k < 256; k++)
		{
			if (k <= j)
			{
				w0 += pOfHist[k];//以j为分类阀值，计算第一类出现概率
				ut += k * pOfHist[k];
			}
			else
			{
				w1 += pOfHist[k];
				uT += k * pOfHist[k];
			}
			u0 = ut / w0; u1 = uT / w1;
			u = ut + uT;

		}
		sigmaB = w0 * pow((u0 - u), 2) + w1 * pow((u1 - u), 2);
		if (sigmaB > sigmaMax)
		{
			sigmaMax = sigmaB;
			thres = j;
		}
	}
	return thres;
}

//Entropy阈值函数
int getEntropyThes(const MatND& hist, int numPixel)
{
	int thres = 0;
	double Hb, Hw, H, HMAX = 0;
	double pOfHist[256], Pn = 0;
	int rows = hist.rows;
	for (int i = 0; i < rows; i++)
	{
		Hb = 0; Hw = 0; Pn = 0;
		for (int k = 0; k <= i; k++)
		{
			Pn += hist.at<float>(k, 0);
		}
		for (int j = 0; j < 256; j++)
		{
			if (j <= i)
			{
				pOfHist[j] = hist.at<float>(j, 0) / Pn;
				if (pOfHist[j] == 0)
					continue;
				Hb += -pOfHist[j] * log(pOfHist[j]);
			}
			else
			{
				pOfHist[j] = hist.at<float>(j, 0) / (numPixel - Pn);
				if (pOfHist[j] == 0)
					continue;
				Hw += -pOfHist[j] * log(pOfHist[j]);
			}
		}
		H = Hb + Hw;
		if (H > HMAX)
		{
			thres = i;
			HMAX = H;
		}
	}
	return thres;
}



