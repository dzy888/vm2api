// 00701c50 build_child

/* <tokio[d7d91d38da47d894]::process::Command>::build_child */

longlong * __rustcall
<tokio[d7d91d38da47d894]::process::Command>::build_child
          (longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  longlong lStack_18;
  
  tokio[d7d91d38da47d894]::process::imp::build_child(&local_b0,param_3);
  if (local_b0 == -1) {
    param_1[1] = local_a8;
    *param_1 = -1;
    return param_1;
  }
  if ((int)local_b0 != 2) {
    local_d8 = local_a0;
    lStack_d0 = lStack_98;
  }
  if (local_90 == 2) {
    uVar1 = *(undefined1 *)(param_2 + 200);
  }
  else {
    uVar1 = *(undefined1 *)(param_2 + 200);
    local_198 = local_88;
    lStack_190 = lStack_80;
    local_188 = local_78;
  }
  if (local_70 != 2) {
    local_168 = local_58;
    local_178 = local_68;
    lStack_170 = lStack_60;
  }
  *param_1 = local_b0;
  param_1[1] = local_a8;
  param_1[2] = local_d8;
  param_1[3] = lStack_d0;
  param_1[4] = local_90;
  param_1[5] = local_198;
  param_1[6] = lStack_190;
  param_1[7] = local_188;
  param_1[8] = local_70;
  param_1[9] = local_178;
  param_1[10] = lStack_170;
  param_1[0xb] = local_168;
  param_1[0xc] = local_50;
  param_1[0xd] = lStack_48;
  param_1[0xe] = local_40;
  param_1[0xf] = lStack_38;
  param_1[0x10] = local_30;
  param_1[0x11] = lStack_28;
  param_1[0x12] = local_20;
  param_1[0x13] = lStack_18;
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  return param_1;
}


