// 0063f2e0 <<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::{closure#0}::{closure#1}>

/* tokio[d7d91d38da47d894]::time::timeout::timeout::<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::{closure#0}::{closure#1}>
    */

undefined8 * __rustcall
tokio[d7d91d38da47d894]::time::timeout::timeout::
<<craggemini_core[66f3c71560d70857]::oauth::OAuthManager>::complete_oauth::_closure_0_::_closure_1_>
          (undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 local_1288;
  undefined8 uStack_1280;
  undefined8 local_1278;
  undefined8 uStack_1270;
  undefined8 local_1268;
  undefined8 uStack_1260;
  undefined8 local_1258;
  undefined8 uStack_1250;
  undefined8 local_1248;
  undefined8 uStack_1240;
  undefined4 local_1238;
  undefined4 uStack_1234;
  undefined4 uStack_1230;
  undefined4 uStack_122c;
  undefined8 local_1228;
  undefined8 local_1218;
  undefined8 local_1210;
  undefined8 uStack_1208;
  undefined8 local_1200;
  undefined8 uStack_11f8;
  undefined8 local_11f0;
  undefined8 uStack_11e8;
  undefined8 local_11e0;
  undefined8 uStack_11d8;
  undefined8 local_11d0;
  undefined8 uStack_11c8;
  undefined4 local_11c0;
  undefined4 uStack_11bc;
  undefined4 uStack_11b8;
  undefined4 uStack_11b4;
  undefined8 local_11b0;
  
  (*(code *)PTR_memcpy_00799008)();
  (*(code *)PTR_now_00799170)();
  uVar1 = (*(code *)PTR_checked_add_007991c0)();
  if (param_3 == -1) {
    local_1218 = 2;
  }
  else {
    (*(code *)PTR_new_timeout_007991c8)(0);
    local_1288 = local_1210;
    uStack_1280 = uStack_1208;
    local_1278 = local_1200;
    uStack_1270 = uStack_11f8;
    local_1268 = local_11f0;
    uStack_1260 = uStack_11e8;
    local_1258 = local_11e0;
    uStack_1250 = uStack_11d8;
    local_1248 = local_11d0;
    uStack_1240 = uStack_11c8;
    local_1238 = local_11c0;
    uStack_1234 = uStack_11bc;
    uStack_1230 = uStack_11b8;
    uStack_122c = uStack_11b4;
    local_1228 = local_11b0;
    uVar1 = local_11c0;
  }
  (*(code *)PTR_memcpy_00799008)(uVar1,0x1180);
  *param_1 = local_1218;
  param_1[1] = local_1288;
  param_1[2] = uStack_1280;
  param_1[3] = local_1278;
  param_1[4] = uStack_1270;
  param_1[5] = local_1268;
  param_1[6] = uStack_1260;
  param_1[7] = local_1258;
  param_1[8] = uStack_1250;
  param_1[9] = local_1248;
  param_1[10] = uStack_1240;
  param_1[0xb] = CONCAT44(uStack_1234,local_1238);
  param_1[0xc] = CONCAT44(uStack_122c,uStack_1230);
  param_1[0xd] = local_1228;
  return param_1;
}


