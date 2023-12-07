﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif





struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

struct Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3;
struct Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70;
struct InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB;
struct InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2;
struct NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686;
struct NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3;
struct NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD;
struct NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035;
struct NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090;
struct ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 
{
	RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___m_InputRect;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_OutputDimensions;
	int32_t ___m_Format;
	int32_t ___m_Transformation;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARCameraBackground_BeforeBackgroundRenderHandler_m3B215B54CFB6F6F00A724D9A6BE66808593ABFCD(int32_t ___0_eventId);
extern "C" void CDECL ReversePInvokeWrapper_BaselibNetworkInterface_AbortSendMessage_m72B7BF253EF54897773EB3D0E71087F1D6A3CC4E(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData);
extern "C" int32_t CDECL ReversePInvokeWrapper_BaselibNetworkInterface_BeginSendMessage_mA7B98FB9E60EE6B551BDED079C19F919D868CDC5(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData, int32_t ___2_requiredPayloadSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_BaselibNetworkInterface_EndSendMessage_m8F4442A383ABE0C7351E099F4802369F27034230(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_address, intptr_t ___2_userData, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___3_sendQueueHandle);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577(Il2CppChar* ___0_language);
extern "C" void CDECL ReversePInvokeWrapper_FragmentationPipelineStage_InitializeConnection_mF3BBFB71F779AC858B1774CCBFB60119AA63556F(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_FragmentationPipelineStage_Receive_mC82A468D1E984B46DBFA86CFB0881405BB818B9F(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_FragmentationPipelineStage_Send_m371D83ABF5F657F48C1C953FD7F4FC17EE9AFB5F(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" void CDECL ReversePInvokeWrapper_IPCNetworkInterface_AbortSendMessage_mD2213C035B0095095402257A1FE0ED18222ED3BB(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData);
extern "C" int32_t CDECL ReversePInvokeWrapper_IPCNetworkInterface_BeginSendMessage_mEBD306EEF2BB90024C7BB46EA0D527F1DCF0AFC3(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, intptr_t ___1_userData, int32_t ___2_requiredPayloadSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_IPCNetworkInterface_EndSendMessage_mFC6AE048DC0B4A007A51CCB2138699096A4ABAB1(NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___0_handle, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_address, intptr_t ___2_userData, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___3_sendQueueHandle);
extern "C" int32_t CDECL ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B(intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status);
extern "C" int32_t CDECL ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722(intptr_t ___0_userData, uint8_t* ___1_data, uintptr_t ___2_dataLen, uint32_t ___3_status);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_AfterFunctionCallback_mFBBF94D9868CA6870E3A6A78D831145376372D46(char* ___0_function, int32_t ___1_result);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_BeforeFunctionCallback_m70AB6148D0D9FCD315ACDB6B46131514D128380D(char* ___0_function);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MockRuntime_ReceiveScriptEvent_m4A8AAF0A455A02262E3B74CB3DB498A88C84AD14(int32_t ___0_evt, uint64_t ___1_param);
extern "C" void CDECL ReversePInvokeWrapper_NullPipelineStage_InitializeConnection_mE4FD4F09D9CFF2E1936797CB78E73320899AED0A(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_NullPipelineStage_Receive_m8308D590BC7CFA806E9D57D41E719541EFC8B8F7(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_NullPipelineStage_Send_m1B22D7224F96F231918823791DAD77CF1A394552(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3(intptr_t ___0_arg);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OpenXRLoaderBase_ReceiveNativeEvent_m521057A79D56E2995A93CEB8B66A60B4297896F0(int32_t ___0_e, uint64_t ___1_payload);
extern "C" int32_t CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765(intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command);
extern "C" int32_t CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443(int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_ReliableSequencedPipelineStage_InitializeConnection_m8686B1249C04475707EAA6052847250414CFB95F(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_ReliableSequencedPipelineStage_Receive_m992560BA8E67FEF4121328DF27B4167F9EFC181C(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_ReliableSequencedPipelineStage_Send_mF5B4688D4611998490023B13C3E3978E2B962294(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35(intptr_t ___0_state, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8(intptr_t ___0_state, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067(intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command);
extern "C" int32_t CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3(int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStage_InitializeConnection_mE07E7035736226A1FEE8385D4D8D41C1D9AA9E01(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStage_Receive_mBBC0E56D075494CD82C70AE3865BD8DFD488BCB8(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_SimulatorPipelineStage_Send_mDFCF5F9A898D399559922F0F49043BAF7B07E0E3(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStageInSend_InitializeConnection_m996F9AF5C36F710832A3BB160BCAB990766A4605(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_SimulatorPipelineStageInSend_Receive_m886BB6915B5EA4AB28D0C639B34D59E6185B251E(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_SimulatorPipelineStageInSend_Send_m874C15AB96635E629A55FB9009ACD0DBA3BFDEB7(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_UnityTransportProtocol_ComputePacketOverhead_m7F9F4F3826262A4AD39C1176E4C91AA76C6BB11B(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t* ___1_dataOffset);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_Connect_m7AC9FFE6828F64EC37D45D3D7397262A702671AE(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_Disconnect_mAE7E0BD95A6C237B05460FF54479B0C8580A95E5(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessReceive_m5157A3D3CAE03473F57E45490FEA106A4828281E(intptr_t ___0_stream, NetworkInterfaceEndPoint_t19ADA9DC012F2BEFFD7234FF77DA83DB8C8B7686* ___1_endpoint, int32_t ___2_size, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___3_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData, ProcessPacketCommand_t041B9CF2E9754D040113AC55953BB3D9B7CD2F70* ___6_command);
extern "C" int32_t CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSend_m37FFFC64721982127FC2D9268E49D6547F05366E(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, int32_t ___1_hasPipeline, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___2_sendInterface, NetworkInterfaceSendHandle_t0DDDEE6B24387948E786543B54C52A3F7B625CE3* ___3_sendHandle, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___4_queueHandle, intptr_t ___5_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendConnectionAccept_mEAC94D7A5F473685C9806BE15910139E184C0759(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPing_m4E10000A4AFB678C587554AED16DE508FE3AB27B(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPong_m9619FB650811D1E8912EC48CBDA6AF3720A990AF(Connection_t57B7A8186502E304AD87933A0FFD76FDF0972D70* ___0_connection, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnityTransportProtocol_Update_mB09684A8C348D0610EA91DF1035F2F4AC6780702(int64_t ___0_updateTime, NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035* ___1_sendInterface, NetworkSendQueueHandle_t9F11BEB70EFEEE4BCD9CD241BB758B11F25D5090* ___2_queueHandle, intptr_t ___3_userData);
extern "C" void CDECL ReversePInvokeWrapper_UnreliableSequencedPipelineStage_InitializeConnection_m8F9879573CB49EB48A57D70E8355B1C99D99BDAF(uint8_t* ___0_staticInstanceBuffer, int32_t ___1_staticInstanceBufferLength, uint8_t* ___2_sendProcessBuffer, int32_t ___3_sendProcessBufferLength, uint8_t* ___4_recvProcessBuffer, int32_t ___5_recvProcessBufferLength, uint8_t* ___6_sharedProcessBuffer, int32_t ___7_sharedProcessBufferLength);
extern "C" void CDECL ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Receive_mEAB0067A693541F27F50EC6B0E85FFD58F672D32(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundRecvBuffer_t629D03E5A6660D506F09AFF9B44D37D7400448EB* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" int32_t CDECL ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Send_m85598A96582CC98D294248DC63430586E60551B9(NetworkPipelineContext_t8F3D91FC8F21E09B471629ACF6E92F903A1ED3DD* ___0_ctx, InboundSendBuffer_t87526AA7D284BED0A1462C13268C07175DD5FDF2* ___1_inboundBuffer, int32_t* ___2_requests, int32_t ___3_systemHeaderSize);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_XRCpuImage_OnAsyncConversionComplete_mDC3A0C88A34909C9D08E4BE7E94C8E27E2BB3D3C(int32_t ___0_status, ConversionParams_t062706B15E2C508C54473A1FD72013C4381CCB62 ___1_conversionParams, intptr_t ___2_dataPtr, int32_t ___3_dataLength, intptr_t ___4_context);
extern "C" int32_t CDECL ReversePInvokeWrapper_SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB(intptr_t ___0_allocatorState, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA(intptr_t ___0_allocatorState, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234(intptr_t ___0_allocatorState, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2(intptr_t ___0_allocatorState, Block_tCCF620817FE305B5BF7B0FB7705B4571F976C4E3* ___1_block);
extern "C" int32_t CDECL ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131();


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[68] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARCameraBackground_BeforeBackgroundRenderHandler_m3B215B54CFB6F6F00A724D9A6BE66808593ABFCD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BaselibNetworkInterface_AbortSendMessage_m72B7BF253EF54897773EB3D0E71087F1D6A3CC4E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BaselibNetworkInterface_BeginSendMessage_mA7B98FB9E60EE6B551BDED079C19F919D868CDC5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BaselibNetworkInterface_EndSendMessage_m8F4442A383ABE0C7351E099F4802369F27034230),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_m407BCFC1029A4485B7B063BC2F3601968C3BE577),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FragmentationPipelineStage_InitializeConnection_mF3BBFB71F779AC858B1774CCBFB60119AA63556F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FragmentationPipelineStage_Receive_mC82A468D1E984B46DBFA86CFB0881405BB818B9F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_FragmentationPipelineStage_Send_m371D83ABF5F657F48C1C953FD7F4FC17EE9AFB5F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IPCNetworkInterface_AbortSendMessage_mD2213C035B0095095402257A1FE0ED18222ED3BB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IPCNetworkInterface_BeginSendMessage_mEBD306EEF2BB90024C7BB46EA0D527F1DCF0AFC3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IPCNetworkInterface_EndSendMessage_mFC6AE048DC0B4A007A51CCB2138699096A4ABAB1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataReceiveCallback_mEFC143BA88C57BBAD38EB40927FEB51F850D447B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ManagedSecureFunctions_SecureDataSendCallback_m9194B5EB17E62D9763907E987D0A384802C89722),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MockRuntime_AfterFunctionCallback_mFBBF94D9868CA6870E3A6A78D831145376372D46),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MockRuntime_BeforeFunctionCallback_m70AB6148D0D9FCD315ACDB6B46131514D128380D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MockRuntime_ReceiveScriptEvent_m4A8AAF0A455A02262E3B74CB3DB498A88C84AD14),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NullPipelineStage_InitializeConnection_mE4FD4F09D9CFF2E1936797CB78E73320899AED0A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NullPipelineStage_Receive_m8308D590BC7CFA806E9D57D41E719541EFC8B8F7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_NullPipelineStage_Send_m1B22D7224F96F231918823791DAD77CF1A394552),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mF93C3CF6DBEC86E377576D840CAF517CB6E4D7E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OpenXRLoaderBase_ReceiveNativeEvent_m521057A79D56E2995A93CEB8B66A60B4297896F0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ComputePacketOverhead_m4E78C92092C1484F2CB95DD10DE9AA4E2911B5F2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_Connect_mF79B494839F2860E97A8001403E8E7B2F2D0BFFF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_Disconnect_m2B817AF28256EEE336098E3654EE115825D9C766),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessReceive_m31C9840BD1234A5598DAF1D57D750A6A79849765),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSend_m7575ABC041AB3CEF12A17815D0870773958B412C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendConnectionAccept_mB019F49554DCD5FB156369B699D405AD567FA9AD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPing_m7CE90FC0007C848A69176703204B0EA13B7BE9ED),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_ProcessSendPong_m0F98CD0FC19258C75C3DDA67D78E324C032AF6DC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RelayNetworkProtocol_Update_m7A9E599807DE1BFFB74A44187363C8C6FA39B443),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ReliableSequencedPipelineStage_InitializeConnection_m8686B1249C04475707EAA6052847250414CFB95F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ReliableSequencedPipelineStage_Receive_m992560BA8E67FEF4121328DF27B4167F9EFC181C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ReliableSequencedPipelineStage_Send_mF5B4688D4611998490023B13C3E3978E2B962294),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RewindableAllocator_Try_mA4AF5A5088097CB6343C3CC97058959976372C35),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_RewindableAllocator_TryU24BurstManaged_mBB6DAE6A8CDB2E3626C38F3B65186AAF6ACBF6E8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ComputePacketOverhead_m23FF3AD571738B5BBBC31F0DC7A1BADFB3C4B12A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_Connect_mAE3ED3A9FBA3023E1E50467AD4BF826ED89ADFFB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_Disconnect_m73A4699BBAFB93E2FEF31C3F4F6F406E19C66B53),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessReceive_m31DC346544D8BEACDEF4858B7B7E8051DC870067),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSend_m953E726B286E1FF9FB1836FB4897A8357A558987),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendConnectionAccept_m6E2E06B210D208CE575A32F53B49199A9ED0EEB5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPing_m2CD7DA3B44CD99AB7E16C101FB83912649196F18),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_ProcessSendPong_m8D7736A3DAE23BE23205ECA0E5EFFFB2BA3B1AB7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SecureNetworkProtocol_Update_m40062B33F2208A000DB3ACE25B599336414CE9A3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStage_InitializeConnection_mE07E7035736226A1FEE8385D4D8D41C1D9AA9E01),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStage_Receive_mBBC0E56D075494CD82C70AE3865BD8DFD488BCB8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStage_Send_mDFCF5F9A898D399559922F0F49043BAF7B07E0E3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStageInSend_InitializeConnection_m996F9AF5C36F710832A3BB160BCAB990766A4605),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStageInSend_Receive_m886BB6915B5EA4AB28D0C639B34D59E6185B251E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SimulatorPipelineStageInSend_Send_m874C15AB96635E629A55FB9009ACD0DBA3BFDEB7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ComputePacketOverhead_m7F9F4F3826262A4AD39C1176E4C91AA76C6BB11B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_Connect_m7AC9FFE6828F64EC37D45D3D7397262A702671AE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_Disconnect_mAE7E0BD95A6C237B05460FF54479B0C8580A95E5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessReceive_m5157A3D3CAE03473F57E45490FEA106A4828281E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSend_m37FFFC64721982127FC2D9268E49D6547F05366E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendConnectionAccept_mEAC94D7A5F473685C9806BE15910139E184C0759),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPing_m4E10000A4AFB678C587554AED16DE508FE3AB27B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_ProcessSendPong_m9619FB650811D1E8912EC48CBDA6AF3720A990AF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnityTransportProtocol_Update_mB09684A8C348D0610EA91DF1035F2F4AC6780702),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnreliableSequencedPipelineStage_InitializeConnection_m8F9879573CB49EB48A57D70E8355B1C99D99BDAF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Receive_mEAB0067A693541F27F50EC6B0E85FFD58F672D32),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_UnreliableSequencedPipelineStage_Send_m85598A96582CC98D294248DC63430586E60551B9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_XRCpuImage_OnAsyncConversionComplete_mDC3A0C88A34909C9D08E4BE7E94C8E27E2BB3D3C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SlabAllocator_Try_mCD7DED588811A6E3F78E4A14CBFE2852D8E39DEB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_SlabAllocator_TryU24BurstManaged_mC48F05E806431B6537727E4D6A10550207FBB1EA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StackAllocator_Try_m093FA501B1B427E32DD9F654380B3EA56A5A4234),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_StackAllocator_TryU24BurstManaged_mB88D607AA12E4D9181BF1FFE81A1AC3117FDB5E2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_m8F3C6D0129D14359B51860FBA51933C4FE92F131),
};
