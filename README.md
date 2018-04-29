# XLServicePlatform
Empty Service Implementation to Replace Thunder XLServicePlatform

# Details

在迅雷标准版 / 精简版中，均自带 `XLServicePlatform` 组件，该组件通过系统服务自行启动。当迅雷启动时，会尝试创建 `<Install_Path>\Program\XLServicePlatform.exe` 进程，并通过 `XLServicePlatform.dll` 中的相关导出函数尝试对 `XLServicePlatform` 服务进行检测、安装。

该动态库实现并导出如下函数：
```
- IsInstalled
- InstallPlatform
- UnInstallerPlatform
- StartPlatform
- StopServicePlatform
- SetPlatformAutoRun
- ServiceMain
- DllMain
```

在导出上述空实现函数后，将 `XLServicePlatform.dll` 替换至 `<Install_Path>\Program\XLServicePlatform.dll` 目录下。