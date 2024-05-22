/***************************************************************************
 *        File: winapi_window.c
 *     Created: 2024-05-21
 *    Modified: 2024-05-21
 *      Author: oknauta
 * Description: Creates a generic window in C.
 *        Note: Created with Microsoft Notepad.
***************************************************************************/

#include <windows.h> // Library to create a window in Windows.


// This function is "what is happening in your application".
LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

// The main function to create a window with `winapi`.
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    WNDCLASS wc = {}; // Declares a window class.
    
    wc.lpszClassName = "Generic Window Class";              // The class name.
    wc.hInstance     = hInstance;                           // The class handle instance.
    wc.lpfnWndProc   = WindowProc;                          // The class window procedural.
    wc.style         = CS_HREDRAW | CS_VREDRAW;             // The class style.
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);         // The class cursor.
    wc.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH); // The class background color.
    
    RegisterClass(&wc); // Register the class in Windows.
    
    // Creates the window.
    HWND hWnd;
    hWnd = CreateWindow("Generic Window Class", "Generic Window", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 800, 600, NULL, NULL, hInstance, NULL);
    
    if(hWnd == NULL)
    {
        return 1;
    }
    
    // Shows the window.    
    ShowWindow(hWnd, nCmdShow);
        
    // Loop to handle the window.
    MSG Msg;
    while(GetMessage(&Msg, NULL, 0, 0))
    {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    
    return 0;
}

LRESULT CALLBACK WindowProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch(uMsg) // The user message.
    {
        case WM_DESTROY:
            PostQuitMessage(0);
            break;
        default:
            return DefWindowProc(hWnd, uMsg, wParam, lParam); // Treats what isn't happening.
    }
    return 0;
}
