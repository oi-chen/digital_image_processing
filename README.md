#2019_10_16

发现bug：

在change_size.cpp中，对于变换倍率，若小数位数偏多，mat转qimage时，rgb数据会出现问题，生成一系列黑白条纹图像或rgb依次排列的条纹

#2019_10_17

ui整体大更改，添加绘制直方图功能，出现新bug(保存文件时程序异常终止)：could not find a writer for the specified extension in function 'imwrite_'