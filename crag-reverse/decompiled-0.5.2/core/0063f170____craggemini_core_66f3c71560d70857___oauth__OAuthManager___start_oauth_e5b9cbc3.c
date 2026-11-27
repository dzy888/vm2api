// 0063f170 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#8}>

/* tokio[d7d91d38da47d894]::time::timeout::timeout::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::{closure#0}::{closure#8}>
    */

undefined8 * __rustcall
tokio[d7d91d38da47d894]::time::timeout::timeout::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::start_oauth::_closure_0_::_closure_8_>
          (undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  undefined8 uStack_11e0;
  undefined8 local_11d8;
  undefined8 uStack_11d0;
  undefined8 local_11c8;
  undefined8 uStack_11c0;
  undefined8 local_11b8;
  undefined8 uStack_11b0;
  undefined4 local_11a8;
  undefined4 uStack_11a4;
  undefined4 uStack_11a0;
  undefined4 uStack_119c;
  undefined8 local_1198;
  undefined8 local_1190;
  undefined8 local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined8 local_1168;
  undefined8 uStack_1160;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined4 local_1138;
  undefined4 uStack_1134;
  undefined4 uStack_1130;
  undefined4 uStack_112c;
  undefined8 local_1128;
  
  (*(code *)PTR_memcpy_00799008)();
  (*(code *)PTR_now_00799170)();
  uVar1 = (*(code *)PTR_checked_add_007991c0)();
  if (param_3 == -1) {
    local_1190 = 2;
  }
  else {
    (*(code *)PTR_new_timeout_007991c8)(0);
    local_11f8 = local_1188;
    uStack_11f0 = uStack_1180;
    local_11e8 = local_1178;
    uStack_11e0 = uStack_1170;
    local_11d8 = local_1168;
    uStack_11d0 = uStack_1160;
    local_11c8 = local_1158;
    uStack_11c0 = uStack_1150;
    local_11b8 = local_1148;
    uStack_11b0 = uStack_1140;
    local_11a8 = local_1138;
    uStack_11a4 = uStack_1134;
    uStack_11a0 = uStack_1130;
    uStack_119c = uStack_112c;
    local_1198 = local_1128;
    uVar1 = local_1138;
  }
  (*(code *)PTR_memcpy_00799008)(uVar1,0x10f8);
  *param_1 = local_1190;
  param_1[1] = local_11f8;
  param_1[2] = uStack_11f0;
  param_1[3] = local_11e8;
  param_1[4] = uStack_11e0;
  param_1[5] = local_11d8;
  param_1[6] = uStack_11d0;
  param_1[7] = local_11c8;
  param_1[8] = uStack_11c0;
  param_1[9] = local_11b8;
  param_1[10] = uStack_11b0;
  param_1[0xb] = CONCAT44(uStack_11a4,local_11a8);
  param_1[0xc] = CONCAT44(uStack_119c,uStack_11a0);
  param_1[0xd] = local_1198;
  return param_1;
}


