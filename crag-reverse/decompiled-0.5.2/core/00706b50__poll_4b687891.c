// 00706b50 poll

/* <tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,
   tokio[d7d91d38da47d894]::io::blocking::Buf)> as
   core[c0acaeba6ab4c2e0]::future::future::Future>::poll */

int * __rustcall
<tokio[d7d91d38da47d894]::runtime::task::join::JoinHandle<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf)>as_core[c0acaeba6ab4c2e0]::future::future::Future>
::poll(undefined4 param_1,int *param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  longlong *in_FS_OFFSET;
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined8 local_38;
  
  local_68 = 0xfffffffffffffffe;
  lVar1 = *in_FS_OFFSET;
  if (*(char *)(lVar1 + -0xf0) != '\0') {
    if (*(char *)(lVar1 + -0xf0) != '\x01') {
      cVar4 = '\0';
      bVar3 = 0;
      goto LAB_00706baf;
    }
    param_1 = (*(code *)PTR_register_00799240)();
    *(undefined1 *)(lVar1 + -0xf0) = 0;
  }
  bVar3 = *(byte *)(lVar1 + -0xf4);
  cVar4 = *(char *)(lVar1 + -0xf3);
  cVar2 = cVar4;
  if (bVar3 == 1) {
    if (cVar4 == '\0') {
      (*(code *)PTR_defer_0079a740)();
      param_2[0] = -2;
      param_2[1] = -1;
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <core[c0acaeba6ab4c2e0]::task::poll::Poll<core[c0acaeba6ab4c2e0]::result::Result<(tokio[d7d91d38da47d894]::fs::file::Operation,tokio[d7d91d38da47d894]::io::blocking::Buf),tokio[d7d91d38da47d894]::runtime::task::error::JoinError>>>
                (&local_68,&anon_880d723ff0f66ce4ced63274bf095def_37_llvm_12887403613343987975);
      return param_2;
    }
    cVar2 = cVar4 + -1;
  }
  *(char *)(lVar1 + -0xf3) = cVar2;
LAB_00706baf:
  (**(code **)(*(longlong *)(*param_3 + 0x10) + 0x18))(param_1,*param_4);
  *(undefined8 *)(param_2 + 0xc) = local_38;
  param_2[8] = local_48;
  param_2[9] = iStack_44;
  param_2[10] = iStack_40;
  param_2[0xb] = iStack_3c;
  param_2[4] = local_58;
  param_2[5] = iStack_54;
  param_2[6] = iStack_50;
  param_2[7] = iStack_4c;
  *param_2 = (int)local_68;
  param_2[1] = local_68._4_4_;
  param_2[2] = iStack_60;
  param_2[3] = iStack_5c;
  if (((int)local_68 == -2 & bVar3) == 1) {
    if (*(char *)(lVar1 + -0xf0) != '\0') {
      if (*(char *)(lVar1 + -0xf0) == '\x02') {
        return param_2;
      }
      (*(code *)PTR_register_00799240)();
      *(undefined1 *)(lVar1 + -0xf0) = 0;
    }
    *(undefined1 *)(lVar1 + -0xf4) = 1;
    *(char *)(lVar1 + -0xf3) = cVar4;
  }
  return param_2;
}


