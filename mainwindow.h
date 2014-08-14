
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QList>
#include <QMainWindow>
#include <QSlider>

#include "SetComp.h"
#include "MPComp.h"
#include "MultipleOrderedEC.h"

class DiagramScene;

QT_BEGIN_NAMESPACE
class QAction;
class QToolBox;
class QSpinBox;
class QComboBox;
class QFontComboBox;
class QButtonGroup;
class QLineEdit;
class QGraphicsTextItem;
class QFont;
class QToolButton;
class QAbstractButton;
class QGraphicsView;
class QPushButton;
QT_END_NAMESPACE

/*
*���C���E�B���h�E�̃E�B�W�F�b�g
*/

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
	MainWindow(RTC::MultipleOrderedEC *ec);
   /*
   *���s������GUI�ɔ��f������֐�
   */
   void UpdateRTC(std::vector<Rule> &rs);
   RTC::MultipleOrderedEC *m_ec;

private slots:
	/*
	*RTC���ǉ��A�폜���ꂽ�Ƃ��ɌĂяo�����X���b�g
	*/
	void UpdateComp();
	/*
	*�T�C�Y��ύX����Ƃ��ɌĂяo�����X���b�g
	*/
	void m_resize(int w, int h);
	/*
	*�t�@�C���ۑ��̃X���b�g
	*/
	bool save();
	/*
	*�t�@�C���ǂݍ��݃X���b�g
	*/
	void open();
	/*
	*�������̃X���b�g
	*/
	void newFile();

protected:


private:
	/*
	*���j���[�̍쐬�̊֐�
	*/
	void createMenus();
	/*
	*�A�N�V�����̍쐬�̊֐�
	*/
	void createAction();
	SetComp *SC;
	QPushButton *UB;
	QAction *newAct;
	QAction *openAct;
	QAction *saveAct;
	QWidget *widget;

	QMenu *fileMenu;

	QTextCodec* tc;
	



};

#endif
