#include<windows.h>
#include <QWidget>
#include "ui_ControlUI.h"
#include<QMouseEvent>
#include <QMessageBox>

class ControlUI : public QWidget
{
	Q_OBJECT

public:
	ControlUI(QWidget *parent = 0);
	~ControlUI();
	void setValue(QStringList);
	bool *isActive;
private:
	Ui::ControlUI ui;
	//窗体移动
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
	bool m_Drag;                //判断鼠标左键是否按下
	QPoint m_DragPosition;
	int cmmIndex;//记录当前操作类型
protected:
	void closeEvent(QCloseEvent *event);
	private slots:
	void slot_minWindow();
	void OnChannelIndexChanged(int index);
	void OnWOpenChannelBtnClick();
	void OnWCloseChannelBtnClick();
	void OnWIPBtnClick();
	void OnRIPBtnClick();
	void OnDownBtnClick();
	void OnWTimeBtnClick();
	void OnRTimeBtnClick();
	void OnRAPNBtnClick();
	void OnWAPNBtnClick();

public:
	QString StationID;
	uint Socket;
};


