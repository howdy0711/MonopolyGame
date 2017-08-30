#include "head.h"

void err_quit(char *msg)
{
	LPVOID IpMsgBuf;
	FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM,
		NULL, WSAGetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR)&IpMsgBuf, 0, NULL);
		MessageBox(NULL, (LPCTSTR)IpMsgBuf, msg, MB_ICONERROR);
		LocalFree(IpMsgBuf);
		exit(1);
}


//소켓함수 오류출력
void err_display(char *msg){
	LPVOID IpMsgBuf;
	FormatMessage(
		FORMAT_MESSAGE_ALLOCATE_BUFFER|FORMAT_MESSAGE_FROM_SYSTEM,
		NULL, WSAGetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
		(LPTSTR)&IpMsgBuf, 0, NULL);
	printf("[%s] %s", msg, (char *)IpMsgBuf);
	LocalFree(IpMsgBuf);

}
int recvn(SOCKET s, char *buf, int len, int flag)
{
	int received;
	char *ptr =buf;
	int left = len;

	while(left > 0 ){
		received = recv(s,ptr,left, flag);
		if(received == SOCKET_ERROR)
			return SOCKET_ERROR;
		else if(received ==0)
			break;
		left -= received;
		ptr += received;
	}
	return (len - left);
}

