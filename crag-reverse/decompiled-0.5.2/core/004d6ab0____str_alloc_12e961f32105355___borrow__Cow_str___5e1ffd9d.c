// 004d6ab0 <&str,alloc[12e961f32105355]::borrow::Cow<str>>

/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,
   alloc[12e961f32105355]::borrow::Cow<str>>
   <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<&str,
   alloc[12e961f32105355]::string::String> */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
<&str,alloc[12e961f32105355]::borrow::Cow<str>>
          (undefined8 *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
          longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  lVar1 = *param_5;
  lVar4 = param_5[1];
  lVar2 = param_5[2];
  local_38 = param_4;
  uVar5 = craggemini_core[66f3c71560d70857]::protocol::redact_error_secrets(&local_78,lVar4,lVar2);
  lVar3 = local_78;
  local_58 = lVar4;
  lStack_50 = lVar2;
  lVar4 = lVar1;
  if ((char)lStack_60 != '\0') {
    local_58 = uStack_70;
    lStack_50 = local_68;
    lVar4 = local_78;
  }
  local_78 = 0xffffffffffffffff;
  local_68 = local_38;
  uStack_3e = 0x602;
  local_48 = 0;
  uStack_70 = param_3;
  lStack_60 = lVar4;
  uStack_40 = param_2;
  if ((char)lStack_60 == '\x01') {
    lVar4 = ensure_upstream_mut(&local_78);
    *(undefined1 *)(lVar4 + 0x176) = 1;
    param_1[6] = local_48;
    param_1[7] = CONCAT44(uStack_3c,CONCAT22(uStack_3e,uStack_40));
    param_1[4] = local_58;
    param_1[5] = lStack_50;
    param_1[2] = local_68;
    param_1[3] = lStack_60;
    *(undefined4 *)param_1 = (undefined4)local_78;
    *(undefined4 *)((longlong)param_1 + 4) = local_78._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_70._4_4_;
    uVar5 = (undefined4)local_78;
    if (0xfffffffffffffffd < lVar1 - 1U) {
      return param_1;
    }
  }
  else {
    param_1[6] = 0;
    *(undefined2 *)(param_1 + 7) = param_2;
    *(undefined2 *)((longlong)param_1 + 0x3a) = 0x602;
    *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_3c;
    param_1[4] = local_58;
    param_1[5] = lStack_50;
    param_1[2] = local_38;
    param_1[3] = lVar4;
    *param_1 = 0xffffffffffffffff;
    param_1[1] = param_3;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
  return param_1;
}


