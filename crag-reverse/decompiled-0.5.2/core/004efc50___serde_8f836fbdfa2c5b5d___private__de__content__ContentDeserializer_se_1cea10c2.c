// 004efc50 <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* <core[c0acaeba6ab4c2e0]::marker::PhantomData<u16> as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

void __rustcall
<core[c0acaeba6ab4c2e0]::marker::PhantomData<u16>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
          (undefined2 *param_1,byte *param_2)

{
  undefined2 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte local_29 [9];
  ulonglong local_20;
  
  switch(*param_2) {
  case 1:
    param_1[1] = (ushort)param_2[1];
    goto LAB_004efdac;
  case 2:
    param_1[1] = *(undefined2 *)(param_2 + 2);
    goto LAB_004efdac;
  case 3:
    uVar2 = (ulonglong)*(uint *)(param_2 + 4);
    if (0xffff < uVar2) {
      local_29[1] = 1;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004efc76::switchdataD_001981c4,&DAT_0078bf40);
LAB_004efde5:
      *(undefined8 *)(param_1 + 4) = uVar3;
      uVar1 = 1;
      pbVar4 = local_29;
      goto LAB_004efdae;
    }
    break;
  case 4:
    uVar2 = *(ulonglong *)(param_2 + 8);
    if (0xffff < uVar2) {
      local_29[1] = 1;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004efc76::switchdataD_001981c4,&DAT_0078bf40);
      goto LAB_004efde5;
    }
    break;
  case 5:
    uVar2 = (ulonglong)(char)param_2[1];
    if ((longlong)uVar2 < 0) {
      local_29[1] = 2;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004efc76::switchdataD_001981c4,&DAT_0078bf40);
      goto LAB_004efde5;
    }
    break;
  case 6:
    uVar2 = (ulonglong)*(short *)(param_2 + 2);
    if ((longlong)uVar2 < 0) {
      local_29[1] = 2;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004efc76::switchdataD_001981c4,&DAT_0078bf40);
      goto LAB_004efde5;
    }
    break;
  case 7:
    uVar2 = (ulonglong)*(int *)(param_2 + 4);
    if (0xffff < uVar2) {
      local_29[1] = 2;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004efc76::switchdataD_001981c4,&DAT_0078bf40);
      goto LAB_004efde5;
    }
    break;
  case 8:
    uVar2 = *(ulonglong *)(param_2 + 8);
    if (0xffff < uVar2) {
      local_29[1] = 2;
      local_20 = uVar2;
      uVar3 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004efc76::switchdataD_001981c4,&DAT_0078bf40);
      goto LAB_004efde5;
    }
    break;
  default:
    uVar3 = ::
            <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_2,local_29,&DAT_0078bf40);
    *(undefined8 *)(param_1 + 4) = uVar3;
    *param_1 = 1;
    return;
  }
  param_1[1] = (short)uVar2;
LAB_004efdac:
  uVar1 = 0;
  pbVar4 = param_2;
LAB_004efdae:
  *param_1 = uVar1;
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2,pbVar4);
  return;
}


