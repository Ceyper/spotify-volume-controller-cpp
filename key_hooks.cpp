/*
#include "key_hooks.h"
void start_volume_hook(VolumeController *controller) {
	m_controller = controller;
	_hook = SetWindowsHookExA(WH_KEYBOARD_LL, VolumeCallback, GetModuleHandle(NULL), 0);
	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0)) {};
	delete m_controller;
	UnhookWindowsHookEx(_hook);
}

LRESULT CALLBACK VolumeCallback(int nCode, WPARAM wParam, LPARAM lParam) {
	if (nCode < 0) {
		return CallNextHookEx(_hook, nCode, wParam, lParam);
	}

	if (wParam == WM_KEYDOWN) {
		kbdStruct = *((KBDLLHOOKSTRUCT*)lParam);
		if (kbdStruct.vkCode == m_controller->VOLUME_UP) {
			m_controller->set_volume(m_controller->get_volume() + 1);
			return 1;
		}
		else if (kbdStruct.vkCode == m_controller->VOLUME_DOWN) {
			m_controller->set_volume(m_controller->get_volume() - 1);
			return 1;
		}
	}
	return CallNextHookEx(_hook, nCode, wParam, lParam);
}
*/
