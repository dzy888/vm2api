// 004d6790 <alloc[12e961f32105355]::borrow::Cow<str>,alloc[12e961f32105355]::borrow::Cow<str>>

/* <craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::<alloc[12e961f32105355]::borrow::Cow<str>,
   alloc[12e961f32105355]::borrow::Cow<str>> */

undefined4 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::Failure>::dynamic::
<alloc[12e961f32105355]::borrow::Cow<str>,alloc[12e961f32105355]::borrow::Cow<str>>
          (undefined4 *param_1,undefined2 param_2,undefined4 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined4 uStack_3c;
  
  lVar1 = *param_4;
  lVar4 = param_4[1];
  lVar2 = param_4[2];
  craggemini_core[66f3c71560d70857]::protocol::redact_error_secrets(&local_78,lVar4,lVar2);
  lVar3 = CONCAT44(uStack_74,local_78);
  lVar5 = lVar1;
  local_58 = lVar4;
  lStack_50 = lVar2;
  if ((char)lStack_60 != '\0') {
    lVar5 = lVar3;
    local_58 = CONCAT44(uStack_6c,uStack_70);
    lStack_50 = local_68;
  }
  local_68 = *(longlong *)(param_3 + 4);
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  uStack_3e = 0x602;
  local_48 = 0;
  lStack_60 = lVar5;
  uStack_40 = param_2;
  if ((char)lStack_60 == '\x01') {
    lVar4 = ensure_upstream_mut(&local_78);
    *(undefined1 *)(lVar4 + 0x176) = 1;
    *(undefined8 *)(param_1 + 0xc) = local_48;
    *(ulonglong *)(param_1 + 0xe) = CONCAT44(uStack_3c,CONCAT22(uStack_3e,uStack_40));
    *(longlong *)(param_1 + 8) = local_58;
    *(longlong *)(param_1 + 10) = lStack_50;
    *(longlong *)(param_1 + 4) = local_68;
    *(longlong *)(param_1 + 6) = lStack_60;
    *param_1 = local_78;
    param_1[1] = uStack_74;
    param_1[2] = uStack_70;
    param_1[3] = uStack_6c;
    if (0xfffffffffffffffd < lVar1 - 1U) {
      return param_1;
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined2 *)(param_1 + 0xe) = param_2;
    *(undefined2 *)((longlong)param_1 + 0x3a) = 0x602;
    param_1[0xf] = uStack_3c;
    *(longlong *)(param_1 + 8) = local_58;
    *(longlong *)(param_1 + 10) = lStack_50;
    *(longlong *)(param_1 + 4) = local_68;
    *(longlong *)(param_1 + 6) = lVar5;
    *param_1 = local_78;
    param_1[1] = uStack_74;
    param_1[2] = uStack_70;
    param_1[3] = uStack_6c;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(local_78,1);
  return param_1;
}


