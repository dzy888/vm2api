// 004efa10 <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* <u32 as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

void __rustcall
<u32_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
          (undefined4 *param_1,byte *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte local_29 [9];
  ulonglong local_20;
  
  switch(*param_2) {
  case 1:
    param_1[1] = (uint)param_2[1];
    goto LAB_004efb3b;
  case 2:
    param_1[1] = (uint)*(ushort *)(param_2 + 2);
    goto LAB_004efb3b;
  case 3:
    param_1[1] = *(undefined4 *)(param_2 + 4);
    goto LAB_004efb3b;
  case 4:
    uVar2 = *(ulonglong *)(param_2 + 8);
    if (uVar2 >> 0x20 != 0) {
      local_29[1] = 1;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)(uVar2 >> 0x20,&DAT_0078bf60);
LAB_004efb9d:
      *(undefined8 *)(param_1 + 2) = uVar3;
      uVar1 = 1;
      pbVar4 = local_29;
      goto LAB_004efb3d;
    }
    break;
  case 5:
    uVar2 = (ulonglong)(char)param_2[1];
    if ((longlong)uVar2 < 0) {
      local_29[1] = 2;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004efa36::switchdataD_001981a4,&DAT_0078bf60);
      goto LAB_004efb9d;
    }
    break;
  case 6:
    uVar2 = (ulonglong)*(short *)(param_2 + 2);
    if ((longlong)uVar2 < 0) {
      local_29[1] = 2;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004efa36::switchdataD_001981a4,&DAT_0078bf60);
      goto LAB_004efb9d;
    }
    break;
  case 7:
    uVar2 = (ulonglong)*(int *)(param_2 + 4);
    if ((longlong)uVar2 < 0) {
      local_29[1] = 2;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004efa36::switchdataD_001981a4,&DAT_0078bf60);
      goto LAB_004efb9d;
    }
    break;
  case 8:
    uVar2 = *(ulonglong *)(param_2 + 8);
    if (uVar2 >> 0x20 != 0) {
      local_29[1] = 2;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)(uVar2 >> 0x20,&DAT_0078bf60);
      goto LAB_004efb9d;
    }
    break;
  default:
    uVar3 = ::
            <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_2,local_29,&DAT_0078bf60);
    *(undefined8 *)(param_1 + 2) = uVar3;
    *param_1 = 1;
    return;
  }
  param_1[1] = (int)uVar2;
LAB_004efb3b:
  uVar1 = 0;
  pbVar4 = param_2;
LAB_004efb3d:
  *param_1 = uVar1;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2,pbVar4);
  return;
}


