// 0063f840 <axum[743f01f147681d98]::body::to_bytes::{closure#0}>

/* tokio[d7d91d38da47d894]::time::timeout::timeout::<axum[743f01f147681d98]::body::to_bytes::{closure#0}>
    */

undefined8 * __rustcall
tokio[d7d91d38da47d894]::time::timeout::timeout::
<axum[743f01f147681d98]::body::to_bytes::_closure_0_>
          (undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  
  (*(code *)PTR_memcpy_00799008)();
  (*(code *)PTR_now_00799170)();
  uVar1 = (*(code *)PTR_checked_add_007991c0)();
  if (param_3 == -1) {
    local_150 = 2;
  }
  else {
    (*(code *)PTR_new_timeout_007991c8)(0);
    local_1b8 = local_148;
    uStack_1b0 = uStack_140;
    local_1a8 = local_138;
    uStack_1a0 = uStack_130;
    local_198 = local_128;
    uStack_190 = uStack_120;
    local_188 = local_118;
    uStack_180 = uStack_110;
    local_178 = local_108;
    uStack_170 = uStack_100;
    local_168 = local_f8;
    uStack_164 = uStack_f4;
    uStack_160 = uStack_f0;
    uStack_15c = uStack_ec;
    local_158 = local_e8;
    uVar1 = local_f8;
  }
  (*(code *)PTR_memcpy_00799008)(uVar1,0xb8);
  *param_1 = local_150;
  param_1[1] = local_1b8;
  param_1[2] = uStack_1b0;
  param_1[3] = local_1a8;
  param_1[4] = uStack_1a0;
  param_1[5] = local_198;
  param_1[6] = uStack_190;
  param_1[7] = local_188;
  param_1[8] = uStack_180;
  param_1[9] = local_178;
  param_1[10] = uStack_170;
  param_1[0xb] = CONCAT44(uStack_164,local_168);
  param_1[0xc] = CONCAT44(uStack_15c,uStack_160);
  param_1[0xd] = local_158;
  return param_1;
}


