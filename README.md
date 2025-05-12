# CS2 项目说明

本项目是一个用于 CS2 的辅助模块，需要配合 cs2dumper 使用，并通过注入器加载。
## 项目参考

- Liv_T CS2 [外部静默原理剖析及实现](https://bbs.kanxue.com/thread-282616.htm)
## 编译说明

1. 使用 [cs2dumper](https://github.com/a2x/cs2-dumper) 生成 `output` 目录。
2. 将生成的 `output` 目录复制并替换到本项目源码目录下。
3. 编译此项目（推荐使用 Visual Studio 或 CMake 构建）。

## 使用方法

1. 启动 CS2 游戏。
2. 使用你喜欢的注入器将编译后的 DLL 注入到 CS2 进程中。

## 核心逻辑：静默自瞄

静默自瞄通过修改输入命令结构体中的 Pitch 和 Yaw 实现无视角变化的自动瞄准，其核心代码如下：

```cpp
// 设置计算出的角度并写入 Pitch 和 Yaw
memcpy(&a1[4], &targetAngle.x, sizeof(float)); // 设置 Pitch（俯仰角）
memcpy(&a1[5], &targetAngle.y, sizeof(float)); // 设置 Yaw（偏航角）
