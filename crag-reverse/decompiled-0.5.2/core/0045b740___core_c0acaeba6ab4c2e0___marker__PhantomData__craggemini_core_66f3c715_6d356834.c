// 0045b740 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::resume::ModelFamily_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>
   as 
   serde_core[48776c27239fa21f]::de::EnumAccess>::variant_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::resume::ModelFamily
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
::variant_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::resume::ModelFamily_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,longlong param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  char local_30;
  undefined1 local_2f;
  undefined8 local_28;
  
  uVar3 = *(ulonglong *)(param_2 + 0x20);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  if (uVar2 < uVar3) {
    do {
      uVar2 = uVar2 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar2);
      uVar5 = (ulonglong)bVar1;
      if (0x22 < uVar5) {
LAB_0045b871:
        if (bVar1 == 0x7d) {
          local_48 = 10;
        }
        else {
          local_48 = 0x11;
        }
        goto LAB_0045b83e;
      }
      if ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0) {
        if (uVar5 != 0x22) goto LAB_0045b871;
        *(ulonglong *)(param_2 + 0x28) = uVar2;
        *(undefined8 *)(param_2 + 0x10) = 0;
        (*(code *)PTR_parse_str_007998f8)(-uVar3,param_2);
        if ((int)local_48 != 2) {
          <<craggemini_core[66f3c71560d70857]::resume::ModelFamily_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__FieldVisitor_as_serde_core[48776c27239fa21f]::de::Visitor>
          ::visit_str::<serde_json[dc3825464c436029]::error::Error>(&local_30,local_40,local_38);
          if (local_30 != '\x01') {
            uVar3 = *(ulonglong *)(param_2 + 0x28);
            if (uVar3 < *(ulonglong *)(param_2 + 0x20)) {
              goto LAB_0045b811;
            }
            break;
          }
          local_40 = local_28;
        }
        uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                          (local_40,param_2);
        goto LAB_0045b849;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2;
    } while (uVar2 != uVar3);
  }
  goto LAB_0045b836;
  while( true ) {
    if ((0x100002600U >> (uVar2 & 0x3f) & 1) == 0) {
      if (uVar2 == 0x3a) {
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        *param_1 = local_2f;
        *(longlong *)(param_1 + 8) = param_2;
        return param_1;
      }
      goto LAB_0045b88a;
    }
    *(ulonglong *)(param_2 + 0x28) = uVar3;
    if (uVar3 == *(ulonglong *)(param_2 + 0x20)) break;
LAB_0045b811:
    uVar3 = uVar3 + 1;
    uVar2 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
    if (0x3a < uVar2) {
LAB_0045b88a:
      local_48 = 6;
      goto LAB_0045b83e;
    }
  }
LAB_0045b836:
  local_48 = 3;
LAB_0045b83e:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_48);
LAB_0045b849:
  *(undefined8 *)(param_1 + 8) = uVar4;
  *param_1 = 0xff;
  return param_1;
}


