// 004f26c0 <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* <serde_core[48776c27239fa21f]::de::impls::OptionVisitor<i32> as
   serde_core[48776c27239fa21f]::de::Visitor>::visit_some::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

void __rustcall
<serde_core[48776c27239fa21f]::de::impls::OptionVisitor<i32>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_some::
<serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
          (undefined4 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 local_31;
  undefined1 local_30;
  ulonglong local_28;
  
  switch(*param_2) {
  case 1:
    uVar3 = (ulonglong)(byte)param_2[1];
    break;
  case 2:
    uVar3 = (ulonglong)*(ushort *)(param_2 + 2);
    break;
  case 3:
    uVar3 = (ulonglong)*(uint *)(param_2 + 4);
    if ((int)*(uint *)(param_2 + 4) < 0) {
      local_30 = 1;
      local_28 = uVar3;
      uVar2 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004f26eb::switchdataD_001982cc,&DAT_0078bfc0);
LAB_004f278e:
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <serde_core[48776c27239fa21f]::private::content::Content>(param_2,&local_31);
      goto LAB_004f27e5;
    }
    break;
  case 4:
    uVar3 = *(ulonglong *)(param_2 + 8);
    if (0x7fffffff < uVar3) {
      local_30 = 1;
      local_28 = uVar3;
      uVar2 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004f26eb::switchdataD_001982cc,&DAT_0078bfc0);
      goto LAB_004f278e;
    }
    break;
  case 5:
    uVar3 = (ulonglong)(uint)(int)(char)param_2[1];
    break;
  case 6:
    uVar3 = (ulonglong)(uint)(int)*(short *)(param_2 + 2);
    break;
  case 7:
    uVar3 = (ulonglong)*(uint *)(param_2 + 4);
    break;
  case 8:
    uVar3 = *(ulonglong *)(param_2 + 8);
    if ((longlong)(int)uVar3 != uVar3) {
      local_30 = 2;
      local_28 = uVar3;
      uVar2 = (*(code *)PTR_invalid_value_007997e0)
                        (&switchD_004f26eb::switchdataD_001982cc,&DAT_0078bfc0);
      goto LAB_004f278e;
    }
    break;
  default:
    uVar2 = ::
            <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>>
            ::invalid_type(param_2,&local_31,&DAT_0078bfc0);
LAB_004f27e5:
    *(undefined8 *)(param_1 + 2) = uVar2;
    uVar1 = 1;
    goto LAB_004f27c2;
  }
  core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_core[48776c27239fa21f]::private::content::Content>
            (param_2);
  param_1[1] = 1;
  param_1[2] = (int)uVar3;
  uVar1 = 0;
LAB_004f27c2:
  *param_1 = uVar1;
  return;
}


