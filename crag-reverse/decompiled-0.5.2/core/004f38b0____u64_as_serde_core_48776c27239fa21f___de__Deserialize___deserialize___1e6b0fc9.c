// 004f38b0 <<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>

/* <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>
   as serde_core[48776c27239fa21f]::de::Deserializer>::deserialize_u64::<<u64 as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor> */

undefined1  [16] __rustcall
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
::deserialize_u64::
<<u64_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::PrimitiveVisitor>
          (undefined1 *param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 local_31;
  undefined1 local_30;
  ulonglong local_28;
  
  switch(*param_1) {
  case 1:
    uVar1 = (ulonglong)(byte)param_1[1];
    break;
  case 2:
    uVar1 = (ulonglong)*(ushort *)(param_1 + 2);
    break;
  case 3:
    uVar1 = (ulonglong)*(uint *)(param_1 + 4);
    break;
  case 4:
    uVar1 = *(ulonglong *)(param_1 + 8);
    break;
  case 5:
    uVar1 = (ulonglong)(char)param_1[1];
    if (-1 < (longlong)uVar1) break;
    local_30 = 2;
    local_28 = uVar1;
    uVar1 = (*(code *)PTR_invalid_value_007997e0)
                      (&switchD_004f38d5::switchdataD_001983c4,&DAT_0078bf80);
LAB_004f39eb:
    param_2 = &local_31;
    uVar2 = 1;
    goto LAB_004f3996;
  case 6:
    uVar1 = (ulonglong)*(short *)(param_1 + 2);
    if ((longlong)uVar1 < 0) {
      local_30 = 2;
      local_28 = uVar1;
      uVar1 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004f38d5::switchdataD_001983c4,&DAT_0078bf80);
      goto LAB_004f39eb;
    }
    break;
  case 7:
    uVar1 = (ulonglong)*(int *)(param_1 + 4);
    if ((longlong)uVar1 < 0) {
      local_30 = 2;
      local_28 = uVar1;
      uVar1 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004f38d5::switchdataD_001983c4,&DAT_0078bf80);
      goto LAB_004f39eb;
    }
    break;
  case 8:
    uVar1 = *(ulonglong *)(param_1 + 8);
    if ((longlong)uVar1 < 0) {
      local_30 = 2;
      local_28 = uVar1;
      uVar1 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004f38d5::switchdataD_001983c4,&DAT_0078bf80);
      goto LAB_004f39eb;
    }
    break;
  default:
    uVar1 = ::
            <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_1,&local_31,&DAT_0078bf80);
    uVar2 = 1;
    goto LAB_004f399b;
  }
  uVar2 = 0;
LAB_004f3996:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_1,param_2);
LAB_004f399b:
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


