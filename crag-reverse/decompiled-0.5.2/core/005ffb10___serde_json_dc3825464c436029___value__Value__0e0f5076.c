// 005ffb10 <serde_json[dc3825464c436029]::value::Value>

/* <core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<u64>> as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<serde_json[dc3825464c436029]::value::Value>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::marker::PhantomData<core[c0acaeba6ab4c2e0]::option::Option<u64>>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::<serde_json[dc3825464c436029]::value::Value>(undefined8 *param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_51;
  undefined1 local_50;
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*param_2 == '\0') {
    *param_1 = 0;
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_2);
    return;
  }
  local_38 = *(undefined4 *)param_2;
  uStack_34 = *(undefined4 *)(param_2 + 4);
  uStack_30 = (undefined4)*(longlong *)(param_2 + 8);
  uStack_2c = *(undefined4 *)(param_2 + 0xc);
  lVar1 = *(longlong *)(param_2 + 8);
  local_28 = (undefined4)*(longlong *)(param_2 + 0x10);
  uStack_24 = *(undefined4 *)(param_2 + 0x14);
  local_48 = *(longlong *)(param_2 + 0x10);
  uStack_20 = *(undefined4 *)(param_2 + 0x18);
  uStack_1c = *(undefined4 *)(param_2 + 0x1c);
  if ((char)local_38 == '\x02') {
    if (lVar1 == 0) {
LAB_005ffb5c:
      *param_1 = 1;
      param_1[1] = local_48;
      return;
    }
    if (lVar1 == 1) {
      if (-1 < local_48) goto LAB_005ffb5c;
      local_50 = 2;
      uVar2 = (*(code *)PTR_invalid_value_007997e0)(1,&DAT_0078ecd8);
    }
    else {
      local_50 = 3;
      uVar2 = (*(code *)PTR_invalid_type_007997e8)
                        (lVar1,anon_f98aad3bb3e6c606de146d8493d2cfe7_33_llvm_13619962878011216390);
    }
  }
  else {
    uVar2 = ::<serde_json[dc3825464c436029]::value::Value>::invalid_type::
            <serde_json[dc3825464c436029]::error::Error>(&local_38,&local_51,&DAT_0078ecd8);
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(param_2);
  }
  param_1[1] = uVar2;
  *param_1 = 2;
  return;
}


