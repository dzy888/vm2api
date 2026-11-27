// 0063f9a0 <&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>

/* tokio[d7d91d38da47d894]::time::timeout::timeout::<&mut
   tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,
   serde_json[dc3825464c436029]::value::Value>>> */

undefined8 * __rustcall
tokio[d7d91d38da47d894]::time::timeout::timeout::
<&mut_tokio[d7d91d38da47d894]::sync::oneshot::Receiver<core[c0acaeba6ab4c2e0]::result::Result<serde_json[dc3825464c436029]::value::Value,serde_json[dc3825464c436029]::value::Value>>>
          (undefined8 *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  (*(code *)PTR_now_00799170)();
  (*(code *)PTR_checked_add_007991c0)();
  if (param_3 == -1) {
    local_98 = 2;
  }
  else {
    (*(code *)PTR_new_timeout_007991c8)(0);
    local_108 = local_90;
    uStack_100 = uStack_88;
    local_f8 = local_80;
    uStack_f0 = uStack_78;
    local_e8 = local_70;
    uStack_e0 = uStack_68;
    local_d8 = local_60;
    uStack_d0 = uStack_58;
    local_c8 = local_50;
    uStack_c0 = uStack_48;
    local_b8 = local_40;
    uStack_b0 = uStack_38;
    local_a8 = local_30;
  }
  param_1[0xe] = param_4;
  *param_1 = local_98;
  param_1[1] = local_108;
  param_1[2] = uStack_100;
  param_1[3] = local_f8;
  param_1[4] = uStack_f0;
  param_1[5] = local_e8;
  param_1[6] = uStack_e0;
  param_1[7] = local_d8;
  param_1[8] = uStack_d0;
  param_1[9] = local_c8;
  param_1[10] = uStack_c0;
  param_1[0xb] = local_b8;
  param_1[0xc] = uStack_b0;
  param_1[0xd] = local_a8;
  return param_1;
}


