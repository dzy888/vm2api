// 0063f6e0 <<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::{closure#0}>

/* tokio[d7d91d38da47d894]::time::timeout::timeout::<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::{closure#0}>
    */

undefined8 * __rustcall
tokio[d7d91d38da47d894]::time::timeout::timeout::
<<craggemini_core[66f3c71560d70857]::bridge::Bridge>::push_ring_request_chunked::_closure_0_>
          (undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  
  (*(code *)PTR_memcpy_00799008)();
  (*(code *)PTR_now_00799170)();
  uVar1 = (*(code *)PTR_checked_add_007991c0)();
  if (param_3 == -1) {
    local_248 = 2;
  }
  else {
    (*(code *)PTR_new_timeout_007991c8)(0);
    local_2b8 = local_240;
    uStack_2b0 = uStack_238;
    local_2a8 = local_230;
    uStack_2a0 = uStack_228;
    local_298 = local_220;
    uStack_290 = uStack_218;
    local_288 = local_210;
    uStack_280 = uStack_208;
    local_278 = local_200;
    uStack_270 = uStack_1f8;
    local_268 = local_1f0;
    uStack_264 = uStack_1ec;
    uStack_260 = uStack_1e8;
    uStack_25c = uStack_1e4;
    local_258 = local_1e0;
    uVar1 = local_1f0;
  }
  (*(code *)PTR_memcpy_00799008)(uVar1,0x1b0);
  *param_1 = local_248;
  param_1[1] = local_2b8;
  param_1[2] = uStack_2b0;
  param_1[3] = local_2a8;
  param_1[4] = uStack_2a0;
  param_1[5] = local_298;
  param_1[6] = uStack_290;
  param_1[7] = local_288;
  param_1[8] = uStack_280;
  param_1[9] = local_278;
  param_1[10] = uStack_270;
  param_1[0xb] = CONCAT44(uStack_264,local_268);
  param_1[0xc] = CONCAT44(uStack_25c,uStack_260);
  param_1[0xd] = local_258;
  return param_1;
}


