
#include <windows.h>

LRESULT CALLBACK WindProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_CLOSE: PostQuitMessage(69); break;
        case WM_KEYDOWN:
            if (wParam == 'F') SetWindowText(hwnd, "Respects");
            break;
        case WM_KEYUP:
            if (wParam == 'F') SetWindowText(hwnd, "DangerField");
            break;
    }
    return DefWindowProc(hwnd, msg, wParam, lParam);
}

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    
    const auto pClassName = "hw3dbutts";

    // register window class
    WNDCLASSEX wc = {0};
    wc.cbSize = sizeof(wc);
    wc.style = CS_OWNDC;
    wc.lpfnWndProc = WindProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hInstance;
    wc.hIcon = nullptr;
    wc.hCursor = nullptr;
    wc.hbrBackground = nullptr;
    wc.lpszMenuName = nullptr;
    wc.lpszClassName = pClassName;
    wc.hIconSm = nullptr;
    RegisterClassEx(&wc);

    // instance window
    HWND hwnd = CreateWindowEx(
        0, pClassName,
        "\\o/",
        WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU,
        200, 200, 640, 480,
        nullptr, nullptr, hInstance, nullptr
    );
    
    // show the damn window
    ShowWindow(hwnd, SW_SHOW);


    // message pump
    MSG msg;
    BOOL gResult;
    while ((gResult = GetMessage(&msg, nullptr, 0, 0)) > 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    if (gResult == -1) return -1;
    else return msg.wParam;
}

