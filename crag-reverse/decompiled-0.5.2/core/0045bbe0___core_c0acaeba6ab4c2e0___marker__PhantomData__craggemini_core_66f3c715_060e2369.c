// 0045bbe0 <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>

/* <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>
   as 
   serde_core[48776c27239fa21f]::de::EnumAccess>::variant_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>> */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
::variant_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
          (undefined1 *param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_38;
  char (*local_30) [4];
  longlong local_28;
  
  uVar5 = *(ulonglong *)(param_2 + 0x20);
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 < uVar5) {
    do {
      uVar3 = uVar3 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar3);
      uVar6 = (ulonglong)bVar1;
      if (0x22 < uVar6) {
LAB_0045bd5b:
        if (bVar1 == 0x7d) {
          local_38 = 10;
        }
        else {
          local_38 = 0x11;
        }
        goto LAB_0045bd28;
      }
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
        if (uVar6 != 0x22) goto LAB_0045bd5b;
        *(ulonglong *)(param_2 + 0x28) = uVar3;
        *(undefined8 *)(param_2 + 0x10) = 0;
        (*(code *)PTR_parse_str_007998f8)(-uVar5,param_2);
        if ((int)local_38 == 2) {
LAB_0045bcb9:
          uVar4 = ::<serde_json[dc3825464c436029]::error::Error>::fix_position::
                  <<serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>::fix_position::_closure_0_>
                            (local_30,param_2);
          goto LAB_0045bd33;
        }
        if (local_28 == 4) {
          uVar2 = 1;
          if (*local_30 != anon_2c3f00c6db51fc4e52b1607637b553f4_20_llvm_6489901693990513673)
          goto LAB_0045bca5;
        }
        else if (local_28 == 8) {
          if (*(longlong *)local_30 !=
              anon_2c3f00c6db51fc4e52b1607637b553f4_19_llvm_6489901693990513673) {
LAB_0045bca5:
            local_30 = (char (*) [4])
                       <serde_json[dc3825464c436029]::error::Error_as_serde_core[48776c27239fa21f]::de::Error>
                       ::unknown_variant(local_30,local_28,
                                         &
                                         anon_2c3f00c6db51fc4e52b1607637b553f4_22_llvm_6489901693990513673
                                         ,3);
            goto LAB_0045bcb9;
          }
          uVar2 = 0;
        }
        else if ((local_28 != 0xb) ||
                (uVar2 = 2,
                *(longlong *)(*local_30 + 3) !=
                CONCAT35(s_nd_robin_00199594._5_3_,s_nd_robin_00199594._0_5_) ||
                *(longlong *)local_30 !=
                CONCAT53(s_nd_robin_00199594._0_5_,
                         anon_2c3f00c6db51fc4e52b1607637b553f4_21_llvm_6489901693990513673)))
        goto LAB_0045bca5;
        uVar5 = *(ulonglong *)(param_2 + 0x28);
        if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
          goto LAB_0045bcfb;
        }
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar3;
    } while (uVar3 != uVar5);
  }
  goto LAB_0045bd20;
  while( true ) {
    if ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0) {
      if (uVar3 == 0x3a) {
        *(ulonglong *)(param_2 + 0x28) = uVar5;
        *param_1 = uVar2;
        *(longlong *)(param_1 + 8) = param_2;
        return param_1;
      }
      goto LAB_0045bd74;
    }
    *(ulonglong *)(param_2 + 0x28) = uVar5;
    if (uVar5 == *(ulonglong *)(param_2 + 0x20)) break;
LAB_0045bcfb:
    uVar5 = uVar5 + 1;
    uVar3 = (ulonglong)*(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar5);
    if (0x3a < uVar3) {
LAB_0045bd74:
      local_38 = 6;
      goto LAB_0045bd28;
    }
  }
LAB_0045bd20:
  local_38 = 3;
LAB_0045bd28:
  uVar4 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_38);
LAB_0045bd33:
  *(undefined8 *)(param_1 + 8) = uVar4;
  *param_1 = 0xff;
  return param_1;
}


