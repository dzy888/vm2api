// 00660510 poll

/* <tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>
   as core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

longlong * __rustcall
<tokio[d7d91d38da47d894]::time::timeout::Timeout<tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(longlong *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  longlong in_FS_OFFSET;
  undefined4 uVar2;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  
  if ((*(char *)(in_FS_OFFSET + -0xf0) != '\0') && (*(char *)(in_FS_OFFSET + -0xf0) == '\x01')) {
    (*(code *)PTR_register_00799240)();
    *(undefined1 *)(in_FS_OFFSET + -0xf0) = 0;
  }
  uVar2 = <tokio[d7d91d38da47d894]::sync::oneshot::Receiver<craggemini_core[66f3c71560d70857]::mcp::McpToolResult>as_core[c0acaeba6ab4c2e0]::future::future::Future>
          ::poll(&local_50,param_2 + 0x1c,param_3);
  if (local_50 == -2) {
    if ((*param_2 == 2) ||
       (cVar1 = (*(code *)PTR_poll_delay_00799228)(uVar2,param_3), cVar1 != '\0')) {
      *param_1 = -3;
    }
    else {
      *param_1 = -2;
    }
  }
  else {
    param_1[2] = local_40;
    param_1[3] = lStack_38;
    *param_1 = local_50;
    param_1[1] = lStack_48;
  }
  return param_1;
}


