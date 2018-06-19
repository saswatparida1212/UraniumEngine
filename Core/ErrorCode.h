#pragma once
#ifndef _ERROR_CODE_H_
#define _ERROR_CODE_H_
namespace u92 {
	enum ErrorCode {
		E_CODE_SUCCESS = 0,

		//codes for OSFramework
		E_CODE_UNKOWN_SUBSYSTEM,
		E_CODE_QUIT_MESSAGE,
		E_CODE_REGISTERCLASSFAILED,

		//Network subsystem
		E_CODE_WINSOCK_INIT_FAILED,
		E_CODE_SOCKET_NOINIT,
		E_CODE_SOCKET_SENDFAILED,
		E_CODE_SOCKET_RECVFAILED
	};
}

#endif