// 0071afb0 from

/* <serde_json[dc3825464c436029]::value::Value as core[c0acaeba6ab4c2e0]::convert::From<f64>>::from
    */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::value::Value_as_core[c0acaeba6ab4c2e0]::convert::From<f64>>::from
          (ulonglong param_1,undefined1 *param_2)

{
  undefined1 local_28;
  undefined8 local_27;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28 = 0;
  if ((param_1 & 0x7fffffffffffffff) < 0x7ff0000000000000) {
    *(undefined8 *)(param_2 + 8) = 2;
    *(ulonglong *)(param_2 + 0x10) = param_1;
    *param_2 = 2;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(&local_28);
    return param_2;
  }
  *(undefined8 *)(param_2 + 0x10) = local_18;
  *(undefined8 *)(param_2 + 0x18) = uStack_10;
  *param_2 = 0;
  *(undefined8 *)(param_2 + 1) = local_27;
  *(undefined4 *)(param_2 + 9) = local_1f;
  *(undefined2 *)(param_2 + 0xd) = local_1b;
  param_2[0xf] = local_19;
  return param_2;
}


