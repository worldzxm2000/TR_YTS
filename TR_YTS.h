#ifndef TRSF_XJ_H
#define TRSF_XJ_H

#define TRSF_XJ_EXPORT __declspec(dllexport)
#ifdef TRSF_XJ_EXPORT
#else
#define TRSF_XJ __declspec(dllimport)
#endif
#include<windows.h>
#include<windef.h>
#include "ControlUI.h"
#include<qjsonobject.h>
#define HEADER 0xAA
#define TAIL 0xDD
#define FE 0xFE
#define TRSF 24
typedef struct DataFrame{
    //长度(2字节)
    int len;
    //源地址(2字节)
    int SrcAddr;
    //目的地址(2字节)
    int DesAddr;
    //帧命令
    int Command;
    //数据域
   QString data;

} Frame;


//定义结构和联合
typedef union
{
    struct
    {
        byte low_byte;
        byte mlow_byte;
        byte mhigh_byte;
        byte high_byte;
     }float_byte;
     float  value;
}FLOAT_UNION;

//APN服务器
void Transform2APNAddr(QString data, QJsonObject &json);
//通道号
void Transform2Channel(QString data, QJsonObject &json);
	//补抄数据
   void Transform2Data(QString data,QJsonObject &json);
     //采集时钟发送命令
    void Transform2Time(QString data, QJsonObject &json);
    //获取IP地址和端口数据
    void  Transform2IPPort(QString data,QJsonObject &json);
    //采集器标定参数
    void  Transform2SelectorConfig(QString data,QJsonObject &json);
    //传感器标定参数
    void  Transform2SensorConfig(QString data,QJsonObject &json);
    //采集器土壤特性
    void Transform2FeatureOfSoil(QString data,QJsonObject &json);
    //GPRS小时平均体积含水量和频率数据
    void Transform2GPRSPerVolume(QString data,QJsonObject &json);
    //心跳包
    void Transform2Heartbeat(QString data, QJsonObject &json);
	//通信结束
	void Transform2CloeseConnection(QString data, QJsonObject &json);
    //时间格式
    QString Convert2Time(QString strTime);
	//解析数据
	EXTERN_C TRSF_XJ_EXPORT LRESULT Char2Json(QString &buff, QJsonObject &json);
	//获取业务号
	EXTERN_C TRSF_XJ_EXPORT int GetServiceTypeID();
	//获取业务名称
	EXTERN_C TRSF_XJ_EXPORT QString GetServiceTypeName();
	//获取版本号
	EXTERN_C TRSF_XJ_EXPORT QString GetVersionNo();
	//获取端口号
	EXTERN_C TRSF_XJ_EXPORT int GetPort();
	//调试窗体
	EXTERN_C TRSF_XJ_EXPORT void GetControlWidget(QString StationID, uint Socket, QWidget *parent);
	//矫正时钟
	EXTERN_C TRSF_XJ_EXPORT void SetTime(QString StationID, uint Socket);
	//显示返回值
	EXTERN_C TRSF_XJ_EXPORT void  SetValueToControlWidget(QStringList list);
	//发送命令
	//发送命令
	EXTERN_C TRSF_XJ_EXPORT void SetCommand(uint Socket, int CommandType, QString Params1, QString Params2, QString StationID);//<>
	ControlUI *w;//终端窗体
	bool isActive = false;//判断终端窗体是否开启 
	HANDLE hEvent=CreateEvent(NULL,TRUE,FALSE,NULL);
#endif // 
