###2019_10_16
发现bug：
在change_size.cpp中，对于变换倍率，若小数位数偏多，mat转qimage时，rgb数据会出现问题，生成一系列黑白条纹图像或rgb依次排列的条纹