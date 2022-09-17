#pragma once

#include "Device.h"
#include "CommandQueue.h"
#include "SwapChain.h"
class Engine
{

public:

    void Init(const WindowInfo& info);
    void Render();

    void RenderBegin();
    void RenderEnd();

    void ResizeWindow(int32 width, int32 height);

public :
    shared_ptr<class Device> GetDevice() { return _device; }
    shared_ptr<class CommandQueue> GetCmdQueue() { return _cmdQueue; }
    shared_ptr<class SwapChain> GetSwapChain() { return _swapChain; }


private:

    WindowInfo _window;
    D3D12_VIEWPORT _viewport = {};
    D3D12_RECT _scissorRect = {};

    shared_ptr<Device> _device;
    shared_ptr<CommandQueue> _cmdQueue;
    shared_ptr<SwapChain> _swapChain;
   




};

