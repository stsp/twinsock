#ifndef FUNCS_H
#define FUNCS_H

#include "twinsock.h"
#include "tx.h"

extern	void	PacketTransmitData(void *pvData, int iDataLen, int iStream);
extern void	PacketReceiveData(void *pvData, int nDataLen);
extern void SendSocketData(int iSocket,
		void	*pvData,
		int	iLen,
		struct sockaddr_in *psa,
		int	iAddrLen,
		enum Functions ft);
extern void InitTerm(void);
extern void	UnInitTerm(void);
extern void	TimeoutReceived(void);
extern void ResponseReceived(struct tx_request *ptxr_);
extern void	SetTransmitTimeout(void);
extern void	KillTransmitTimeout(void);
extern void	KillReceiveTimeout(void);
extern void DataReceived(void *pvData, int iLen);
extern void	FlushInput(void);
void	Shutdown(void);
extern void	SetReceiveTimeout(void);
extern int	BumpLargestFD(int iValue);
extern void	FlushStream(int	iStream);
extern int	SetClosed(int iValue);
extern int	SetListener(int iValue);

extern int	KillTimer(int idTimer);
extern int	SetTimer(int idTimer, int iTime);
extern int	FireTimer(int iTimer);

#endif
