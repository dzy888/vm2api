// 005d3a80 rss_bytes

/* <craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rss_bytes */

undefined8 __rustcall
<craggemini_core[66f3c71560d70857]::acp_backend::AcpAccountWorker>::rss_bytes(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x5b0) < 2) || (*(char *)(*(longlong *)(param_1 + 0x230) + 0x10) == '\0')
     ) {
    return 0;
  }
  uVar1 = craggemini_core[66f3c71560d70857]::admission::read_pid_rss_bytes_at
                    ("/",1,*(undefined4 *)(param_1 + 0x5b0));
  return uVar1;
}


