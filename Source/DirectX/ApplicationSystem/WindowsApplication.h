/**
* @file WindowsApplication.h
* @brief �A�v���P�[�V�����V�X�e���̊Ǘ�
* @author Syota Tachikawa
* @date 11/27
*/

#ifndef ___WINDOWSAPPLICATION_H
#define ___WINDOWSAPPLICATION_H

#include "..\Common\StdAfx.h"
#include <crtdbg.h>

/// �A�v���P�[�V�����l�[��
#define APPLICATION_NAME "Blush Girls"

/**
* @brief �E�B���h�E�Y�A�v���P�[�V�����N���X
*/
class WindowsApplication
{
public:
	/**
	* @brief �R���X�g���N�^
	*/
	WindowsApplication();
	
	/**
	* @brief �f�X�g���N�^
	*/
	~WindowsApplication();

	/**
	* @brief �쐬
	*/
	HRESULT Create(HINSTANCE hInst);

	/**
	* @brief �E�B���h�E����̃��b�Z�[�W����
	*/
	BOOL ProcessEvent();

	/**
	* @brief �E�B���h�E�̏������i �쐬 �j
	*/
	BOOL WindowInitialize(HINSTANCE hInst);

	/**
	* @brief ���
	*/
	VOID Release();

private:
	/// ���b�Z�[�W
	MSG m_msg;

	/// �E�B���h�E�n���h��
	HWND m_hWnd;

	/**
	* @brief �E�B���h�E�N���X�֓o�^
	* @param hInst   �F �C���X�^���X
	* @param WndProc �F �E�B���h�E�v���V�[�W��
	*/
	ATOM RegisterWindowClass(HINSTANCE hInst, WNDPROC WndProc);

	/**
	* @brief �E�B���h�E�v���V�[�W��
	* @param �K��̃p�����[�^
	* @return ���b�Z�[�W�����̌���
	*/
	static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

	/**
	* @brief �f�o�b�O�p�E�B���h�E���J��
	*/
	static void OpenDebugWindow();

	/**
	* @brief �f�o�b�O�p�E�B���h�E�����
	*/
	void CloseDebugWindow();
};

#endif