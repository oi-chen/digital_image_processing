### 2019_10_16

发现bug：

在change_size.cpp中，对于变换倍率，若小数位数偏多，mat转qimage时，rgb数据会出现问题，生成一系列黑白条纹图像或rgb依次排列的条纹

### 2019_10_17

ui整体大更改，添加绘制直方图功能，出现新bug(保存文件时若不手动加后缀程序异常终止)：could not find a writer for the specified extension in function 'imwrite_'

### 2019_10_19

添加图像仿射变换功能框架及三点法变换的实现。

此外，linux系统下保存文件时不会自动不全后缀名，因此导致程序异常终止。已在保存文件时加入提醒。

### 2019_10_20

完成课程实验内容，后续内容等待更新。