// 004d6950 <&str,&str>

/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str, &str> */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,&str>
          (longlong *param_1,undefined2 param_2,longlong param_3,longlong param_4,longlong param_5,
          longlong param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  undefined2 uStack_38;
  undefined2 uStack_36;
  undefined4 uStack_34;
  
  craggemini_core[66f3c71560d70857]::protocol::redact_error_secrets(&local_70,param_5,param_6);
  lVar2 = local_70;
  if ((char)lStack_58 != '\0') {
    param_6 = local_60;
  }
  lVar1 = -1;
  if ((char)lStack_58 != '\0') {
    param_5 = lStack_68;
    lVar1 = local_70;
  }
  local_70 = -1;
  uStack_36 = 0x602;
  local_40 = 0;
  lStack_68 = param_3;
  local_60 = param_4;
  lStack_58 = lVar1;
  local_50 = param_5;
  lStack_48 = param_6;
  uStack_38 = param_2;
  if ((char)lStack_58 == '\x01') {
    lVar2 = ensure_upstream_mut(&local_70);
    *(undefined1 *)(lVar2 + 0x176) = 1;
    param_1[6] = local_40;
    param_1[7] = CONCAT44(uStack_34,CONCAT22(uStack_36,uStack_38));
    param_1[4] = local_50;
    param_1[5] = lStack_48;
    param_1[2] = local_60;
    param_1[3] = lStack_58;
    *param_1 = local_70;
    param_1[1] = lStack_68;
  }
  else {
    param_1[6] = 0;
    *(undefined2 *)(param_1 + 7) = param_2;
    *(undefined2 *)((longlong)param_1 + 0x3a) = 0x602;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_34;
    param_1[4] = param_5;
    param_1[5] = param_6;
    param_1[2] = param_4;
    param_1[3] = lVar1;
    *param_1 = -1;
    param_1[1] = param_3;
    if (lVar2 != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_3,1);
    }
  }
  return param_1;
}


