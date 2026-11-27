// 0004db20 <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* <core[c0acaeba6ab4c2e0]::marker::PhantomData<u64> as
   serde_core[48776c27239fa21f]::de::DeserializeSeed>::deserialize::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

undefined1  [16] __rustcall
<core[c0acaeba6ab4c2e0]::marker::PhantomData<u64>as_serde_core[48776c27239fa21f]::de::DeserializeSeed>
::deserialize::
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
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
    uVar1 = (*(code *)PTR_invalid_value_000c3b28)
                      (&switchD_0004db45::switchdataD_0000c990,&DAT_000bfdf0);
LAB_0004dc5b:
    param_2 = &local_31;
    uVar2 = 1;
    goto LAB_0004dc06;
  case 6:
    uVar1 = (ulonglong)*(short *)(param_1 + 2);
    if ((longlong)uVar1 < 0) {
      local_30 = 2;
      local_28 = uVar1;
      uVar1 = (*(code *)PTR_invalid_value_000c3b28)
                        (&switchD_0004db45::switchdataD_0000c990,&DAT_000bfdf0);
      goto LAB_0004dc5b;
    }
    break;
  case 7:
    uVar1 = (ulonglong)*(int *)(param_1 + 4);
    if ((longlong)uVar1 < 0) {
      local_30 = 2;
      local_28 = uVar1;
      uVar1 = (*(code *)PTR_invalid_value_000c3b28)
                        (&switchD_0004db45::switchdataD_0000c990,&DAT_000bfdf0);
      goto LAB_0004dc5b;
    }
    break;
  case 8:
    uVar1 = *(ulonglong *)(param_1 + 8);
    if ((longlong)uVar1 < 0) {
      local_30 = 2;
      local_28 = uVar1;
      uVar1 = (*(code *)PTR_invalid_value_000c3b28)
                        (&switchD_0004db45::switchdataD_0000c990,&DAT_000bfdf0);
      goto LAB_0004dc5b;
    }
    break;
  default:
    uVar1 = ::
            <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_1,&local_31,&DAT_000bfdf0);
    uVar2 = 1;
    goto LAB_0004dc0b;
  }
  uVar2 = 0;
LAB_0004dc06:
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_1,param_2);
LAB_0004dc0b:
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}


